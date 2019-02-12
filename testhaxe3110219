

min=2 
max=120
step=20

implementations=( \
cpp \
python \ 
cs \
java \ 
js \ 
php \ 
lua \
interp \
)

functions=(   \
        intArithmetic \
        doubleArithmetic \
        # longArithmetic \
        trig \
        # array \
        # hashtest \
        # hashes\
        # heapsort \
        # vector \
        # matrixMultiply \
        # nestedLoop \
        # stringConcat \
        # io \
        # except \
        )

# function=intArithmetic
# i=20
# for implem in ${implementations[@]}; do 
# docker pull chakibmed/icse_$implem:tommtiv1 ; 
# done 
j=0
i=50 
j=$((0))
tag="tommti"
# while true ; 
# do 
    for function in ${functions[@]} ; 
    do 
        j=$((0))
        while [ $j -lt 100 ] ; 
        do 
            for implem in ${implementations[@]}; 
            do 
                name="$tag"$implem$function$i"n"$j
                echo $implem  $function 5 $i  $j ;
                # docker pull chakibmed/icse_$implem:tommtiv1
                ./tester.sh -n "haxe"$tag$implem$function$i"n"$j chakibmed/haxe-example:latest $implem $function 5  $i 
            done
        j=$((j+1))  
        done
    done

    # i=$((i + 10 ))
# done 