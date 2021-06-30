#!/bin/sh
FT_NBR1=\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"
FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo
echo $FT_NBR2 + $FT_NBR1 | sed -e "s/\'/0/g" | sed -e "s/\\/1/g" | sed -e "s/\"/2/g" | sed -e "s/\?/3/g" | sed -e "s/\!/4/g" | sed -e "s/m/0/g" | sed -e "s/r/1/g" | sed -e "s/d/2/g" | sed -e "s/o/3/g" | sed -e "s/c/4/g" | xargs echo 'obase=D; ibase=5;' | bc | tr 0123456789ABC 'gtaio luSnemf'
