#!/bin/bash

root="/home/dt/2019/c++11/exercises";

echo "add meg a fejezetet (enter the chapter) [eg. 07_types_and_declarations]:"
read chapter
echo "add meg a gyakorlatot (enter the exercise) [eg. 02]:"
read exercise

echo "gyakorlat létrehozása (creating exercise)..."
target="$root/$chapter/$exercise"
mkdir $target

echo "jegyzékek létrehozása (creating directories)..."
mkdir $target/src $target/include $target/solution $target/test $target/make

echo "leírás létrehozása (creating description)..."
touch $target/EN_exercise.md $target/HU_gyakorlat.md
