# How to use GPG - Keys with GIT
[Github Tutorial](https://docs.github.com/en/github/authenticating-to-github/managing-commit-signature-verification)

### List GPG Keys 
for which puplic and private key exist on the machine
`gpg --list-secret-keys --keyid-format LONG`

### Generate GPG Keys
`gpg --full-generate-key`

### Get Puplic Key
` gpg --armor --export [Key Number]`
> the key number is shown when the List GPG Keys command is executed. It is listed at `sec`.
> Example:  `sec   rsa4096/84CC0C8A36A35DC0` -> Key Number is 84CC0C8A36A35DC0

### Tell GIT about the GPG Key
1. `git config user.signingkey [Key Number]`
2. `git config commit.gpgsign true` - 