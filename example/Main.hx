

class Main {

    static var bench : Bencher ;

    //------------ default params -----------------//
    static var intMax:Int=50000000 ;
    static var floatMin = -25000000 ; 
    static var floatMax = 25000000 ;
    static var trigMax = 50000;
    
    //---------------------------------------------//

  static public function main():Void {

    bench = new Bencher() ; 
    var benchname:String=Sys.args()[0];
    var wamrup:Int ;
    if(Sys.args()[1] != null) wamrup = Std.parseInt(Sys.args()[1]) ; else wamrup=5 ;
    var execution:Int=Std.parseInt(Sys.args()[2]);
    if(Sys.args()[2] != null) execution== Std.parseInt(Sys.args()[2]) ; else  execution=50 ; 

    if (benchname != null) {
      if (benchname == 'intArithmetic') 
        __intArithmetic(wamrup,execution);    
      else if (benchname == 'doubleArithmetic') 
        __doubleArithmetic(wamrup,execution);
      else if (benchname == 'trig') 
        __trig(wamrup,execution);
      else  
        trace ("error module not found ") ; 
    }else{
      __intArithmetic(wamrup,execution);    
      __doubleArithmetic(wamrup,execution);
      __trig(wamrup,execution);
    }

  }

   private static function __intArithmetic(wamrup:Int,execution:Int) {
      var i:Int=0 ; 
      trace("--++beginwarmup") ; 
      while(i<wamrup) {
        Main.bench.intArithmetic(Main.intMax);
        i++ ;
      }
      i=0; 
      trace("++--endwarmup") ; 
      while(i<execution) {
        Main.bench.intArithmetic(Main.intMax);
        i++ ;
      }
  }

   private static function __doubleArithmetic(wamrup:Int,execution:Int) {
      var i:Int=0 ; 
      trace("--++beginwarmup") ; 
      while(i<wamrup) {
        Main.bench.doubleArithmetic(Main.floatMin,Main.floatMax);
        i++ ;
      }
      i=0; 
      trace("++--endwarmup") ; 
      while(i<execution) {
        Main.bench.doubleArithmetic(Main.floatMin,Main.floatMax);
        i++ ;
      }
  }

   private static function __trig(wamrup:Int,execution:Int) {
      var i:Int=0 ; 
      trace("--++beginwarmup") ; 
      while(i<wamrup) {
        Main.bench.trig(Main.trigMax);
        i++ ;
      }
      i=0; 
      trace("++--endwarmup") ; 
      while(i<execution) {
        Main.bench.trig(Main.trigMax);
        i++ ;
      }
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