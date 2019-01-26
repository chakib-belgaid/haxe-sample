class Main {
  static public function main():Void {
    var bench : Bencher ;
    bench = new Bencher() ; 
    bench.intArithmetic(50000000); 
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


}