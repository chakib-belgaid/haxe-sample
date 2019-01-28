FROM chakibmed/haxe:base 

WORKDIR /example 
ADD . .

RUN haxe -main Main --cpp example-cpp \
    && haxe -main Main --java example-java \
    && haxe -main Main --php example-php \
    && haxe -main Main --cs example-cs \
    && haxe -main Main --lua  example-lua/main.lua \
    && haxe -main Main --python example-python/main.py \
    && haxe  -lib hxnodejs -main Main --js example-js/main.js 
      

ENTRYPOINT ["./launcher.sh"]
CMD ["java","intArithmetic","5","10"]