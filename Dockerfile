FROM haxe:4.0 

RUN apt-get update && apt-get install -y  build-essential \
    g++  \ 
    nodejs \ 
    openjdk-8-jdk \
    luarocks \
    php  php-mbstring \
    mono-devel \ 
    && haxelib install hxcpp \
    && haxelib install hxjava \
    && haxelib install hxcs \ 
    && haxelib install hxnodejs \
    && luarocks install luabitop \
    && luarocks install luautf8 
    # && luarocks install lrexlib-pcre \
    # && luarocks install environ \
    # && luarocks install luasocket 

# ADD . . 


CMD ["bash"]