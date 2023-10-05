#!/bin/bash
id -Gn -n $FT_USER | tr ' ' ',' | tr -d '\n'
