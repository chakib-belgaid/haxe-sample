# haxe-sample
a sample that study the energy consumption of different haxe outputs (js, c, binary and the interpreted). 
It is based on Docker containers. 


# Docker images 
There is two images: 
1. Base image in which all the necessary libraries are installed so you can run it directly to testes your -haxe- files and translate them into different programming languages.
  To use it just pull it from docker hub through this command
    
    ```docker pull chakibmed/haxe:base ```

2. an instance in which we run **Tommti** test just to see the behavior of different languages. 
   it accept as arguments the name of the target, the name of the test and warmup, execution parameters 

   ```docker run chakib/haxe-example:latest [target] [testname] [warmup] [execution]```

# Targets 

| Language | Usage |  
| :--- | :--- | 
|python | python | 
|C# | cs | 
|Java |java| 
|JavaScript|js| 
|lua| lua | 
|C++| cpp| 
|Php|php|
|haxe | interp | 

# Benchmarks 

The benchmarks are based on Tommti benchmark suite 

| Benchmark Name | description | 
| :--- | :--- | 
| intArithmetic | To test Integers manipulation | 
| doubleArithmetic | To test the double manipulation | 
| trig | different mathematical operations (sin, cos,log ...) | 


# some preliminary results 
