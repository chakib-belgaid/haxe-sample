// Generated by Haxe 4.0.0-preview.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Bencher
#include <Bencher.h>
#endif

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::haxe::Log_obj::__register();
::Main_obj::__register();
::Sys_obj::__register();
::Std_obj::__register();
::Bencher_obj::__register();
::haxe::Log_obj::__boot();
::Main_obj::__boot();
}

