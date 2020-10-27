#!/bin/bash

blih -u thibault.pras@epitech.eu repository create $1
blih -u thibault.pras@epitech.eu repository setacl $1 ramassage-tek r
blih -u thibault.pras@epitech.eu repository getacl $1
