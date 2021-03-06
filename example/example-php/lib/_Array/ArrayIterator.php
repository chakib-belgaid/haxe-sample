<?php
/**
 * Generated by Haxe 4.0.0-preview.5
 */

namespace _Array;

use \php\_Boot\HxClosure;
use \php\Boot;

class ArrayIterator {
	/**
	 * @var \Array_hx
	 */
	public $arr;
	/**
	 * @var int
	 */
	public $idx;

	/**
	 * @param \Array_hx $arr
	 * 
	 * @return void
	 */
	public function __construct ($arr) {
		#/usr/local/share/haxe/std/php/_std/Array.hx:233: characters 3-17
		$this->arr = $arr;
		#/usr/local/share/haxe/std/php/_std/Array.hx:234: characters 3-10
		$this->idx = 0;
	}

	/**
	 * @param string $method
	 * 
	 * @return HxClosure
	 */
	public function __get ($method) {
		#/usr/local/share/haxe/std/php/_std/Array.hx:248: lines 248-251
		if ($method === "hasNext" || $method === "next") {
			#/usr/local/share/haxe/std/php/_std/Array.hx:249: characters 28-54
			$target = $this;
			if (is_string($target)) {
				return Boot::getStaticClosure($target, $method);
			} else {
				return Boot::getInstanceClosure($target, $method);
			}
		} else {
			#/usr/local/share/haxe/std/php/_std/Array.hx:250: characters 12-16
			return null;
		}
	}

	/**
	 * @return bool
	 */
	public function hasNext () {
		#/usr/local/share/haxe/std/php/_std/Array.hx:238: characters 3-26
		return $this->idx < $this->arr->length;
	}

	/**
	 * @return mixed
	 */
	public function next () {
		#/usr/local/share/haxe/std/php/_std/Array.hx:242: characters 3-20
		return ($this->arr->arr[$this->idx++] ?? null);
	}
}

Boot::registerClass(ArrayIterator::class, '_Array.ArrayIterator');
