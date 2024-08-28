#!/bin/bash
# This script sets up two network namespaces and connects them via a virtual ethernet cable.
namespace1="blue"
namespace2="red"
veth1="veth-red"
veth2="veth-blue"
ipVeth1="192.168.70.0/24"
ipVeth2="192.168.70.1/24"

# Terminate on error
set -e

# Set up the namespaces
echo "[INFO] Create namespaces: $namespace1 and $namespace2"
sudo ip netns add $namespace1
sudo ip netns add $namespace2

# Create the veth pair
echo "[INFO] Create veth pair: $veth1 and $veth2"
sudo ip link add $veth1 type veth peer name $veth2

# Move the veths into the namespaces
echo "[INFO] Move $veth1 to $namespace1 and $veth2 to $namespace2"
sudo ip link set $veth1 netns $namespace1
sudo ip link set $veth2 netns $namespace2

# Configure the interfaces
echo "[INFO] Add $ipVeth1 to $veth1 and $ipVeth2 to $veth2"
sudo ip -n $namespace1 addr add $ipVeth1 dev $veth1
sudo ip -n $namespace2 addr add $ipVeth2 dev $veth2

# Bring up the interfaces
echo "[INFO] Bring up $veth1 and $veth2"
sudo ip -n $namespace1 link set $veth1 up
sudo ip -n $namespace2 link set $veth2 up

# show the namespaces
echo "[INFO] Namespaces on the system:"
ip netns list

# show the interfaces
echo "[INFO] Interfaces in $namespace1:"
sudo ip -n $namespace1 -br a
echo "[INFO] Interfaces in $namespace2:"
sudo ip -n $namespace2 -br a
