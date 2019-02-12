<?php
/**
 * Generated by Haxe 4.0.0-preview.5
 */

namespace php\_Boot;

use \php\Boot;

/**
 * Base class for enum types
 */
class HxEnum {
	/**
	 * @var int
	 */
	public $index;
	/**
	 * @var mixed
	 */
	public $params;
	/**
	 * @var string
	 */
	public $tag;

	/**
	 * @param string $tag
	 * @param int $index
	 * @param mixed $arguments
	 * 
	 * @return void
	 */
	public function __construct ($tag, $index, $arguments = null) {
		#/usr/local/share/haxe/std/php/Boot.hx:652: characters 3-17
		$this->tag = $tag;
		#/usr/local/share/haxe/std/php/Boot.hx:653: characters 3-21
		$this->index = $index;
		#/usr/local/share/haxe/std/php/Boot.hx:654: characters 12-63
		$tmp = null;
		if ($arguments === null) {
			#/usr/local/share/haxe/std/php/Boot.hx:654: characters 33-50
			$this1 = [];
			#/usr/local/share/haxe/std/php/Boot.hx:654: characters 12-63
			$tmp = $this1;
		} else {
			$tmp = $arguments;
		}
		#/usr/local/share/haxe/std/php/Boot.hx:654: characters 3-63
		$this->params = $tmp;
	}

	/**
	 * PHP magic method to get string representation of this `Class`
	 * 
	 * @return string
	 */
	public function __toString () {
		#/usr/local/share/haxe/std/php/Boot.hx:669: characters 3-20
		$result = $this->tag;
		#/usr/local/share/haxe/std/php/Boot.hx:670: lines 670-673
		if (count($this->params) > 0) {
			#/usr/local/share/haxe/std/php/Boot.hx:671: characters 4-88
			$strings = array_map(function ($item) {
				#/usr/local/share/haxe/std/php/Boot.hx:671: characters 51-78
				return Boot::stringify($item);
			}, $this->params);
			#/usr/local/share/haxe/std/php/Boot.hx:672: characters 4-54
			$result = ($result??'null') . "(" . (implode(",", $strings)??'null') . ")";
		}
		#/usr/local/share/haxe/std/php/Boot.hx:674: characters 3-16
		return $result;
	}

	/**
	 * Get string representation of this `Class`
	 * 
	 * @return string
	 */
	public function toString () {
		#/usr/local/share/haxe/std/php/Boot.hx:661: characters 3-22
		return $this->__toString();
	}
}

Boot::registerClass(HxEnum::class, 'php._Boot.HxEnum');