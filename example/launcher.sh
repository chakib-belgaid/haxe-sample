#!/bin/bash

target=$1

if [ -z $target ] ;then 

    target="interp" 
fi 
shift 
params=$@ 

targets=( cpp \
python \ 
cs \
java \ 
js \ 
php \ 
lua \
interp \
)

case "$target" in 
"cpp") 
    example-cpp/Main $params ;;
"python") 
    python example-python/main.py $params ;;
"cs") 
    mono example-cs/bin/Main.exe $params ;;
"java") 
    java -jar example-java/Main.jar $params ;;
"js") 
    node
     example-js/main.js  $params ;;
"php") 
    php example-php/index.php $params ;;
"lua") 
    lua example-lua/main.lua $params ;;
"interp") 
    haxe --run Main $params ;;
*) 
    echo "error in the target "
    exit 1
esac 


