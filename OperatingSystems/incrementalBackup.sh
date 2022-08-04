#!/bin/bash
# obtained from "https://linuxconfig.org/how-to-create-incremental-backups-using-rsync-on-linux"
# A script to perform incremental backups using rsync

set -o errexit
set -o nounset
set -o pipefail

readonly SOURCE_DIR="${HOME}"
readonly BACKUP_DIR="/run/user/1000/gvfs/smb-share:server=island-nas.local,share=fedora-island-backup/rsync-backup"
readonly DATETIME="$(date '+%Y-%m-%d_%H')"
readonly BACKUP_PATH="${BACKUP_DIR}/${DATETIME}"
readonly LATEST_LINK="${BACKUP_DIR}/latest"

mkdir -p "${BACKUP_DIR}"

rsync -av --delete \
  "${SOURCE_DIR}/" \
  --link-dest "${LATEST_LINK}" \
  --exclude=".cache" \
  "${BACKUP_PATH}"

rm -rf "${LATEST_LINK}"
ln -s "${BACKUP_PATH}" "${LATEST_LINK}"
