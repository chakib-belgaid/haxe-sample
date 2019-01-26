# Generated by Haxe 4.0.0-preview.5
# coding: utf-8



class Main:
    __slots__ = ()

    @staticmethod
    def main():
        bench = Bencher()
        bench.intArithmetic(50000000)
        print("Hello World")


class Bencher:
    __slots__ = ()

    def __init__(self):
        pass

    def intArithmetic(self,intMax):
        intResult = 1
        myIterator_min = 0
        myIterator_max = intMax
        while (myIterator_min < myIterator_max):
            i = myIterator_min
            myIterator_min = (myIterator_min + 1)
            intResult = (intResult - i)
            i = (i + 1)
            intResult = (intResult + i)
            i = (i + 1)
            intResult = (intResult * i)
            i = (i + 1)
            intResult1 = None
            try:
                intResult1 = int((intResult / i))
            except Exception as _hx_e:
                _hx_e1 = _hx_e
                e = _hx_e1
                intResult1 = None
            intResult = intResult1
            i = (i + 1)



class python_internal_MethodClosure:
    __slots__ = ("obj", "func")

    def __init__(self,obj,func):
        self.obj = obj
        self.func = func

    def __call__(self,*args):
        return self.func(self.obj,*args)




if __name__ == '__main__':
    Main.main()