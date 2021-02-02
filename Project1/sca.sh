#!/bin/bash

if [ ! -d "report" ]; then
     echo "report folder not exist, creating it"
     mkdir "report"
  fi 

cppcheck --enable=all --force -q --xml --suppress=missingInclude --output-file="report"/sca.xml device/*
