#! /bin/bash
# This script need the coreutils installed on the macos or ubuntu

os_name=$(uname)
if [ "$os_name" == "Linux" ]; then
    SCRIPT=$(readlink -f "$0")
else
    SCRIPT=$(greadlink -f "$0")
fi

SCRIPTPATH=$(dirname "$SCRIPT")

echo "\$1: $1"
echo "\$0: $0"
echo "script: $SCRIPT"
echo "script path: $SCRIPTPATH"

echo "export PATH=\$PATH:$SCRIPTPATH" >tmp
