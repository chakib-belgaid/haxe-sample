class Main {
  static public function main():Void {
    var bench : Bencher ;
    bench = new Bencher() ; 
    // bench.doubleArithmetic(0,50000000); 
    bench.trig(5000);
    trace("Hello World");
  }

}


class Bencher { 

public function new() {}


public function intArithmetic(intMax:Int) {

  var intResult:Int=1;
  var myIterator:IntIterator;
  myIterator= new IntIterator(0,intMax);
  for (i in myIterator) {
    intResult = intResult - i ;
    i = i + 1 ;
    intResult = intResult + i ;
    i = i + 1 ;
    intResult = intResult * i ;
    i = i + 1  ;
    intResult = Std.int(intResult / i ) ;
    i = i + 1 ;
    } 

  } 

public function doubleArithmetic(floatMin:Int,floatMax:Int) {

  var floatResult:Float=floatMin;
  var myIterator:IntIterator;
  myIterator= new IntIterator(floatMin,floatMax);
  for (i in myIterator) {
    floatResult = floatResult - i ;
    i = i + 1 ;
    floatResult = floatResult + i ;
    i = i + 1 ;
    floatResult = floatResult * i ;
    i = i + 1  ;
    floatResult = floatResult / i  ;
    i = i + 1 ;
    } 
}



public function trig(trigMax:Int) {

    var sine:Float = 0.0 ;
    var cosine:Float = 0.0 ;
    var tangent:Float = 0.0 ;
    var logarithm:Float = 0.0 ;
    var squareRoot:Float = 0.0 ;
    var i :Int= 1 ;
    while (i<trigMax) {
        sine = Math.sin(i) ;
        cosine = Math.cos(i) ;
        tangent = Math.tan(i) ;
        logarithm = Math.log(i) ;
        squareRoot = Math.sqrt(i) ;
        i = i + 1 ;
    }
}



}