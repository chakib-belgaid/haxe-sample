// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_Bencher
#include <Bencher.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_15_main,"Main","main",0xed0e206e,"Main.main","Main.hx",15,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_41___intArithmetic,"Main","__intArithmetic",0xc40bb044,"Main.__intArithmetic","Main.hx",41,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_56___doubleArithmetic,"Main","__doubleArithmetic",0x77741830,"Main.__doubleArithmetic","Main.hx",56,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_71___trig,"Main","__trig",0x2ca61f71,"Main.__trig","Main.hx",71,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_8_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",8,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_9_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",9,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_10_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",10,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_11_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",11,0x087e5c05)

void Main_obj::__construct() { }

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x332f6459;
}

 ::Bencher Main_obj::bench;

int Main_obj::intMax;

int Main_obj::floatMin;

int Main_obj::floatMax;

int Main_obj::trigMax;

void Main_obj::main(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_15_main)
HXLINE(  17)		::Main_obj::bench =  ::Bencher_obj::__alloc( HX_CTX );
HXLINE(  18)		::String benchname = ::Sys_obj::args()->__get(0);
HXLINE(  19)		int wamrup;
HXLINE(  20)		if (hx::IsNotNull( ::Sys_obj::args()->__get(1) )) {
HXLINE(  20)			wamrup = ( (int)(::Std_obj::parseInt(::Sys_obj::args()->__get(1))) );
            		}
            		else {
HXLINE(  20)			wamrup = 5;
            		}
HXLINE(  21)		int execution = ( (int)(::Std_obj::parseInt(::Sys_obj::args()->__get(2))) );
HXLINE(  22)		if (hx::IsNotNull( ::Sys_obj::args()->__get(2) )) {
HXLINE(  22)			::Std_obj::parseInt(::Sys_obj::args()->__get(2));
            		}
            		else {
HXLINE(  22)			execution = 50;
            		}
HXLINE(  24)		if (hx::IsNotNull( benchname )) {
HXLINE(  25)			if ((benchname == HX_("intArithmetic",79,ad,b6,eb))) {
HXLINE(  26)				::Main_obj::_hx___intArithmetic(wamrup,execution);
            			}
            			else {
HXLINE(  27)				if ((benchname == HX_("doubleArithmetic",1b,8a,0d,54))) {
HXLINE(  28)					::Main_obj::_hx___doubleArithmetic(wamrup,execution);
            				}
            				else {
HXLINE(  29)					if ((benchname == HX_("trig",dc,9c,03,4d))) {
HXLINE(  30)						::Main_obj::_hx___trig(wamrup,execution);
            					}
            					else {
HXLINE(  32)						::haxe::Log_obj::trace(HX_("error module not found ",a7,23,ac,07),hx::SourceInfo(HX_("Main.hx",05,5c,7e,08),32,HX_("Main",59,64,2f,33),HX_("main",39,38,56,48)));
            					}
            				}
            			}
            		}
            		else {
HXLINE(  34)			::Main_obj::_hx___intArithmetic(wamrup,execution);
HXLINE(  35)			::Main_obj::_hx___doubleArithmetic(wamrup,execution);
HXLINE(  36)			::Main_obj::_hx___trig(wamrup,execution);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))

void Main_obj::_hx___intArithmetic(int wamrup,int execution){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_41___intArithmetic)
HXLINE(  42)		int i = 0;
HXLINE(  43)		::haxe::Log_obj::trace(HX_("--++beginwarmup",c9,4d,c4,4a),hx::SourceInfo(HX_("Main.hx",05,5c,7e,08),43,HX_("Main",59,64,2f,33),HX_("__intArithmetic",59,e6,68,73)));
HXLINE(  44)		while((i < wamrup)){
HXLINE(  45)			::Main_obj::bench->intArithmetic(::Main_obj::intMax);
HXLINE(  46)			i = (i + 1);
            		}
HXLINE(  48)		i = 0;
HXLINE(  49)		::haxe::Log_obj::trace(HX_("++--endwarmup",fb,e8,fd,fb),hx::SourceInfo(HX_("Main.hx",05,5c,7e,08),49,HX_("Main",59,64,2f,33),HX_("__intArithmetic",59,e6,68,73)));
HXLINE(  50)		while((i < execution)){
HXLINE(  51)			::Main_obj::bench->intArithmetic(::Main_obj::intMax);
HXLINE(  52)			i = (i + 1);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Main_obj,_hx___intArithmetic,(void))

void Main_obj::_hx___doubleArithmetic(int wamrup,int execution){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_56___doubleArithmetic)
HXLINE(  57)		int i = 0;
HXLINE(  58)		::haxe::Log_obj::trace(HX_("--++beginwarmup",c9,4d,c4,4a),hx::SourceInfo(HX_("Main.hx",05,5c,7e,08),58,HX_("Main",59,64,2f,33),HX_("__doubleArithmetic",3b,1d,9e,bf)));
HXLINE(  59)		while((i < wamrup)){
HXLINE(  60)			::Main_obj::bench->doubleArithmetic(::Main_obj::floatMin,::Main_obj::floatMax);
HXLINE(  61)			i = (i + 1);
            		}
HXLINE(  63)		i = 0;
HXLINE(  64)		::haxe::Log_obj::trace(HX_("++--endwarmup",fb,e8,fd,fb),hx::SourceInfo(HX_("Main.hx",05,5c,7e,08),64,HX_("Main",59,64,2f,33),HX_("__doubleArithmetic",3b,1d,9e,bf)));
HXLINE(  65)		while((i < execution)){
HXLINE(  66)			::Main_obj::bench->doubleArithmetic(::Main_obj::floatMin,::Main_obj::floatMax);
HXLINE(  67)			i = (i + 1);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Main_obj,_hx___doubleArithmetic,(void))

void Main_obj::_hx___trig(int wamrup,int execution){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_71___trig)
HXLINE(  72)		int i = 0;
HXLINE(  73)		::haxe::Log_obj::trace(HX_("--++beginwarmup",c9,4d,c4,4a),hx::SourceInfo(HX_("Main.hx",05,5c,7e,08),73,HX_("Main",59,64,2f,33),HX_("__trig",fc,ff,fb,fb)));
HXLINE(  74)		while((i < wamrup)){
HXLINE(  75)			::Main_obj::bench->trig(::Main_obj::trigMax);
HXLINE(  76)			i = (i + 1);
            		}
HXLINE(  78)		i = 0;
HXLINE(  79)		::haxe::Log_obj::trace(HX_("++--endwarmup",fb,e8,fd,fb),hx::SourceInfo(HX_("Main.hx",05,5c,7e,08),79,HX_("Main",59,64,2f,33),HX_("__trig",fc,ff,fb,fb)));
HXLINE(  80)		while((i < execution)){
HXLINE(  81)			::Main_obj::bench->trig(::Main_obj::trigMax);
HXLINE(  82)			i = (i + 1);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Main_obj,_hx___trig,(void))


Main_obj::Main_obj()
{
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bench") ) { outValue = ( bench ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"intMax") ) { outValue = ( intMax ); return true; }
		if (HX_FIELD_EQ(inName,"__trig") ) { outValue = _hx___trig_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"trigMax") ) { outValue = ( trigMax ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"floatMin") ) { outValue = ( floatMin ); return true; }
		if (HX_FIELD_EQ(inName,"floatMax") ) { outValue = ( floatMax ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__intArithmetic") ) { outValue = _hx___intArithmetic_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__doubleArithmetic") ) { outValue = _hx___doubleArithmetic_dyn(); return true; }
	}
	return false;
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bench") ) { bench=ioValue.Cast<  ::Bencher >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"intMax") ) { intMax=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"trigMax") ) { trigMax=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"floatMin") ) { floatMin=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"floatMax") ) { floatMax=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Main_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::Bencher */ ,(void *) &Main_obj::bench,HX_("bench",b0,34,5b,b0)},
	{hx::fsInt,(void *) &Main_obj::intMax,HX_("intMax",f5,34,74,9e)},
	{hx::fsInt,(void *) &Main_obj::floatMin,HX_("floatMin",56,6d,8a,dd)},
	{hx::fsInt,(void *) &Main_obj::floatMax,HX_("floatMax",68,66,8a,dd)},
	{hx::fsInt,(void *) &Main_obj::trigMax,HX_("trigMax",28,97,cb,25)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::bench,"bench");
	HX_MARK_MEMBER_NAME(Main_obj::intMax,"intMax");
	HX_MARK_MEMBER_NAME(Main_obj::floatMin,"floatMin");
	HX_MARK_MEMBER_NAME(Main_obj::floatMax,"floatMax");
	HX_MARK_MEMBER_NAME(Main_obj::trigMax,"trigMax");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::bench,"bench");
	HX_VISIT_MEMBER_NAME(Main_obj::intMax,"intMax");
	HX_VISIT_MEMBER_NAME(Main_obj::floatMin,"floatMin");
	HX_VISIT_MEMBER_NAME(Main_obj::floatMax,"floatMax");
	HX_VISIT_MEMBER_NAME(Main_obj::trigMax,"trigMax");
};

#endif

hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("bench",b0,34,5b,b0),
	HX_("intMax",f5,34,74,9e),
	HX_("floatMin",56,6d,8a,dd),
	HX_("floatMax",68,66,8a,dd),
	HX_("trigMax",28,97,cb,25),
	HX_("main",39,38,56,48),
	HX_("__intArithmetic",59,e6,68,73),
	HX_("__doubleArithmetic",3b,1d,9e,bf),
	HX_("__trig",fc,ff,fb,fb),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Main_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_8_boot)
HXDLIN(   8)		intMax = 50000000;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_9_boot)
HXDLIN(   9)		floatMin = -25000000;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_10_boot)
HXDLIN(  10)		floatMax = 25000000;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_11_boot)
HXDLIN(  11)		trigMax = 50000;
            	}
}

