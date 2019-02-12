# Generated by Haxe 4.0.0-preview.5
# coding: utf-8

import math as python_lib_Math
import math as Math
import sys as python_lib_Sys


class Main:
    __slots__ = ()
    bench = None

    @staticmethod
    def main():
        Main.bench = Bencher()
        benchname = python_internal_ArrayImpl._get(Sys.args(), 0)
        wamrup = None
        if (python_internal_ArrayImpl._get(Sys.args(), 1) is not None):
            wamrup = Std.parseInt(python_internal_ArrayImpl._get(Sys.args(), 1))
        else:
            wamrup = 5
        execution = Std.parseInt(python_internal_ArrayImpl._get(Sys.args(), 2))
        if (python_internal_ArrayImpl._get(Sys.args(), 2) is not None):
            Std.parseInt(python_internal_ArrayImpl._get(Sys.args(), 2))
        else:
            execution = 50
        if (benchname is not None):
            if (benchname == "intArithmetic"):
                Main._hx___intArithmetic(wamrup,execution)
            elif (benchname == "doubleArithmetic"):
                Main._hx___doubleArithmetic(wamrup,execution)
            elif (benchname == "trig"):
                Main._hx___trig(wamrup,execution)
            else:
                print("error module not found ")
        else:
            Main._hx___intArithmetic(wamrup,execution)
            Main._hx___doubleArithmetic(wamrup,execution)
            Main._hx___trig(wamrup,execution)

    @staticmethod
    def _hx___intArithmetic(wamrup,execution):
        i = 0
        print("--++beginwarmup")
        while (i < wamrup):
            Main.bench.intArithmetic(Main.intMax)
            i = (i + 1)
        i = 0
        print("++--endwarmup")
        while (i < execution):
            Main.bench.intArithmetic(Main.intMax)
            i = (i + 1)

    @staticmethod
    def _hx___doubleArithmetic(wamrup,execution):
        i = 0
        print("--++beginwarmup")
        while (i < wamrup):
            Main.bench.doubleArithmetic(Main.floatMin,Main.floatMax)
            i = (i + 1)
        i = 0
        print("++--endwarmup")
        while (i < execution):
            Main.bench.doubleArithmetic(Main.floatMin,Main.floatMax)
            i = (i + 1)

    @staticmethod
    def _hx___trig(wamrup,execution):
        i = 0
        print("--++beginwarmup")
        while (i < wamrup):
            Main.bench.trig(Main.trigMax)
            i = (i + 1)
        i = 0
        print("++--endwarmup")
        while (i < execution):
            Main.bench.trig(Main.trigMax)
            i = (i + 1)


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
                _hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
                e = _hx_e1
                intResult1 = None
            intResult = intResult1
            i = (i + 1)

    def doubleArithmetic(self,floatMin,floatMax):
        floatResult = floatMin
        myIterator_min = floatMin
        myIterator_max = floatMax
        while (myIterator_min < myIterator_max):
            i = myIterator_min
            myIterator_min = (myIterator_min + 1)
            floatResult = (floatResult - i)
            i = (i + 1)
            floatResult = (floatResult + i)
            i = (i + 1)
            floatResult = (floatResult * i)
            i = (i + 1)
            floatResult = (floatResult / i)
            i = (i + 1)

    def trig(self,trigMax):
        sine = 0.0
        cosine = 0.0
        tangent = 0.0
        logarithm = 0.0
        squareRoot = 0.0
        i = 1
        while (i < trigMax):
            sine = (Math.NaN if (((i == Math.POSITIVE_INFINITY) or ((i == Math.NEGATIVE_INFINITY)))) else python_lib_Math.sin(i))
            cosine = (Math.NaN if (((i == Math.POSITIVE_INFINITY) or ((i == Math.NEGATIVE_INFINITY)))) else python_lib_Math.cos(i))
            tangent = Math.tan(i)
            logarithm = (Math.NEGATIVE_INFINITY if ((i == 0.0)) else (Math.NaN if ((i < 0.0)) else python_lib_Math.log(i)))
            squareRoot = (Math.NaN if ((i < 0)) else python_lib_Math.sqrt(i))
            i = (i + 1)



class Std:
    __slots__ = ()

    @staticmethod
    def parseInt(x):
        if (x is None):
            return None
        try:
            return int(x)
        except Exception as _hx_e:
            _hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
            e = _hx_e1
            try:
                prefix = HxString.substr(x,0,2).lower()
                if (prefix == "0x"):
                    return int(x,16)
                raise _HxException("fail")
            except Exception as _hx_e:
                _hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
                e1 = _hx_e1
                x1 = Std.parseFloat(x)
                r = None
                try:
                    r = int(x1)
                except Exception as _hx_e:
                    _hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
                    e2 = _hx_e1
                    r = None
                if (r is None):
                    r1 = Std.shortenPossibleNumber(x)
                    if (r1 != x):
                        return Std.parseInt(r1)
                    else:
                        return None
                return r

    @staticmethod
    def shortenPossibleNumber(x):
        r = ""
        _g = 0
        _g1 = len(x)
        while (_g < _g1):
            i = _g
            _g = (_g + 1)
            c = ("" if (((i < 0) or ((i >= len(x))))) else x[i])
            _g2 = HxString.charCodeAt(c,0)
            if (_g2 is None):
                break
            else:
                _g3 = _g2
                if (((((((((((_g3 == 57) or ((_g3 == 56))) or ((_g3 == 55))) or ((_g3 == 54))) or ((_g3 == 53))) or ((_g3 == 52))) or ((_g3 == 51))) or ((_g3 == 50))) or ((_g3 == 49))) or ((_g3 == 48))) or ((_g3 == 46))):
                    r = (("null" if r is None else r) + ("null" if c is None else c))
                else:
                    break
        return r

    @staticmethod
    def parseFloat(x):
        try:
            return float(x)
        except Exception as _hx_e:
            _hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
            e = _hx_e1
            if (x is not None):
                r1 = Std.shortenPossibleNumber(x)
                if (r1 != x):
                    return Std.parseFloat(r1)
            return Math.NaN


class Sys:
    __slots__ = ()

    @staticmethod
    def args():
        argv = python_lib_Sys.argv
        return argv[1:None]


class python_internal_ArrayImpl:
    __slots__ = ()

    @staticmethod
    def _get(x,idx):
        if ((idx > -1) and ((idx < len(x)))):
            return x[idx]
        else:
            return None


class _HxException(Exception):
    __slots__ = ("val",)

    def __init__(self,val):
        self.val = None
        message = str(val)
        super().__init__(message)
        self.val = val



class HxOverrides:
    __slots__ = ()

    @staticmethod
    def stringOrNull(s):
        if (s is None):
            return "null"
        else:
            return s


class python_internal_MethodClosure:
    __slots__ = ("obj", "func")

    def __init__(self,obj,func):
        self.obj = obj
        self.func = func

    def __call__(self,*args):
        return self.func(self.obj,*args)



class HxString:
    __slots__ = ()

    @staticmethod
    def charCodeAt(s,index):
        if ((((s is None) or ((len(s) == 0))) or ((index < 0))) or ((index >= len(s)))):
            return None
        else:
            return ord(s[index])

    @staticmethod
    def substr(s,startIndex,_hx_len = None):
        if (_hx_len is None):
            return s[startIndex:]
        else:
            if (_hx_len == 0):
                return ""
            if (startIndex < 0):
                startIndex = (len(s) + startIndex)
                if (startIndex < 0):
                    startIndex = 0
            return s[startIndex:(startIndex + _hx_len)]

Math.NEGATIVE_INFINITY = float("-inf")
Math.POSITIVE_INFINITY = float("inf")
Math.NaN = float("nan")
Math.PI = python_lib_Math.pi

Main.intMax = 50000000
Main.floatMin = -25000000
Main.floatMax = 25000000
Main.trigMax = 50000

if __name__ == '__main__':
    Main.main()