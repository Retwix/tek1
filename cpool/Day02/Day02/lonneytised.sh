#!/bin/bash

cat bonus/passwd | grep "theo1" | sed -e "s/theo1/Wile E . Coyote/"
cat bonus/passwd | grep "steven1" | sed -e "s/steven1/Daffy Duck/"
cat bonus/passwd | grep "arnaud1" | sed -e "s/arnaud1/Porky Pig/"
cat bonus/passwd | grep "pierre-jean" | sed -e "s/pierre-jean/Marvin the Martian/"
