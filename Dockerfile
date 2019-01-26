FROM haxe:4.0 

RUN apt-get update && apt-get install -y  build-essential \
    g++  \ 
    rhino \ 
    openjdk-8-jdk \
    luarocks \
    && haxelib install hxcpp \
    && haxelib install hxjava \
    && luarocks install lrexlib-pcre \
    && luarocks install environ \
    && luarocks install luasocket \
    luarocks install luv 
# ADD . . 


CMD ["bash"]