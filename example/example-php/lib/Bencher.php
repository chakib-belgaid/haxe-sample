<?php
/**
 * Generated by Haxe 4.0.0-preview.5
 */

use \php\Boot;

class Bencher {
	/**
	 * @return void
	 */
	public function __construct () {
	}

	/**
	 * @param int $floatMin
	 * @param int $floatMax
	 * 
	 * @return void
	 */
	public function doubleArithmetic ($floatMin, $floatMax) {
		#Main.hx:116: characters 3-34
		$floatResult = $floatMin;
		#Main.hx:118: characters 15-49
		$myIterator_min = $floatMin;
		$myIterator_max = $floatMax;
		#Main.hx:119: lines 119-128
		while ($myIterator_min < $myIterator_max) {
			$i = $myIterator_min++;
			#Main.hx:120: characters 5-16
			$floatResult -= $i;
			#Main.hx:121: characters 5-6
			++$i;
			#Main.hx:122: characters 5-16
			$floatResult += $i;
			#Main.hx:123: characters 5-6
			++$i;
			#Main.hx:124: characters 5-16
			$floatResult *= $i;
			#Main.hx:125: characters 5-6
			++$i;
			#Main.hx:126: characters 5-16
			$floatResult /= $i;
			#Main.hx:127: characters 5-6
			++$i;
		}
	}

	/**
	 * @param int $intMax
	 * 
	 * @return void
	 */
	public function intArithmetic ($intMax) {
		#Main.hx:98: characters 3-23
		$intResult = 1;
		#Main.hx:100: characters 15-40
		$myIterator_min = 0;
		$myIterator_max = $intMax;
		#Main.hx:101: lines 101-110
		while ($myIterator_min < $myIterator_max) {
			$i = $myIterator_min++;
			#Main.hx:102: characters 5-14
			$intResult -= $i;
			#Main.hx:103: characters 5-6
			++$i;
			#Main.hx:104: characters 5-14
			$intResult += $i;
			#Main.hx:105: characters 5-6
			++$i;
			#Main.hx:106: characters 5-14
			$intResult *= $i;
			#Main.hx:107: characters 5-6
			++$i;
			#Main.hx:108: characters 5-14
			$intResult = (int)(($intResult / $i));
			#Main.hx:109: characters 5-6
			++$i;
		}
	}

	/**
	 * @param int $trigMax
	 * 
	 * @return void
	 */
	public function trig ($trigMax) {
		#Main.hx:135: characters 5-27
		$sine = 0.0;
		#Main.hx:136: characters 5-29
		$cosine = 0.0;
		#Main.hx:137: characters 5-30
		$tangent = 0.0;
		#Main.hx:138: characters 5-32
		$logarithm = 0.0;
		#Main.hx:139: characters 5-33
		$squareRoot = 0.0;
		#Main.hx:140: characters 5-20
		$i = 1;
		#Main.hx:141: lines 141-148
		while ($i < $trigMax) {
			#Main.hx:142: characters 9-27
			$sine = sin($i);
			#Main.hx:143: characters 9-29
			$cosine = cos($i);
			#Main.hx:144: characters 9-30
			$tangent = tan($i);
			#Main.hx:145: characters 9-32
			$logarithm = log($i);
			#Main.hx:146: characters 9-34
			$squareRoot = sqrt($i);
			#Main.hx:147: characters 9-18
			++$i;
		}
	}
}

Boot::registerClass(Bencher::class, 'Bencher');
