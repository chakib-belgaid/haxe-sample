<?php
/**
 * Generated by Haxe 4.0.0-preview.5
 */

namespace php\_Boot;

use \php\Boot;

/**
 * Anonymous objects implementation
 */
class HxAnon extends \StdClass {
	/**
	 * @param mixed $fields
	 * 
	 * @return void
	 */
	public function __construct ($fields = null) {
		#/usr/local/share/haxe/std/php/Boot.hx:864: lines 864-869
		$_gthis = $this;
		#/usr/local/share/haxe/std/php/Boot.hx:865: characters 3-10
		;
		#/usr/local/share/haxe/std/php/Boot.hx:866: lines 866-868
		if ($fields !== null) {
			#/usr/local/share/haxe/std/php/Boot.hx:867: characters 4-84
			foreach ($fields as $key => $value) {
				#/usr/local/share/haxe/std/php/Boot.hx:867: characters 65-69
				$tmp = $_gthis;
				#/usr/local/share/haxe/std/php/Boot.hx:867: characters 49-83
				$tmp->{$key} = $value;
			}
		}
	}

	/**
	 * @param string $name
	 * @param mixed $args
	 * 
	 * @return mixed
	 */
	public function __call ($name, $args) {
		#/usr/local/share/haxe/std/php/Boot.hx:878: characters 29-33
		$tmp = $this;
		#/usr/local/share/haxe/std/php/Boot.hx:878: characters 3-41
		$method = $tmp->{$name};
		#/usr/local/share/haxe/std/php/Boot.hx:879: characters 3-25
		;
		#/usr/local/share/haxe/std/php/Boot.hx:880: characters 3-36
		return $method(...$args);
	}

	/**
	 * @param string $name
	 * 
	 * @return mixed
	 */
	public function __get ($name) {
		#/usr/local/share/haxe/std/php/Boot.hx:873: characters 3-14
		return null;
	}
}

Boot::registerClass(HxAnon::class, 'php._Boot.HxAnon');