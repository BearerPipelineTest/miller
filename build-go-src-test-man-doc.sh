#!/bin/bash

# Build everything
# go:
#   go build 
#   go test
# man:
#   creates manpage mlr.1 and manpage.txt using mlr from the $PATH
#   copies the latter to docs/src
#   also copies it out-of-tree to ~/man/man1, but only if that exists
# docs: 
#   turn *.md.in into *.md (live code samples), using mlr from the $PATH
#   turn *.md into docs/site HTML and CSS files

export TZ=""

set -euo pipefail

cd go
go fmt ./...
gofmt -s -w $(find . -name \*.go | grep -v src/parsing)
./build

cd ../man
make maybeinstallhome

cd ../docs
./regen.sh

echo
echo DONE