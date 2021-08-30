#!/bin/bash

platform=$1
file_name=$2

git add $2

git commit -m "$1"

git push