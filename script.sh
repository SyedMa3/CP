#!/bin/bash

platform=$1
file_name=$2
problem=${file_name%.*}

git add $2

git commit -m "$platform Problem - $problem"

git push