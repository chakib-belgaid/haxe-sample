// Generated by Haxe 4.0.0-preview.5
package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Bencher extends haxe.lang.HxObject
{
	public Bencher(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Bencher()
	{
		//line 13 "/data/Main.hx"
		haxe.root.Bencher.__hx_ctor__Bencher(this);
	}
	
	
	protected static void __hx_ctor__Bencher(haxe.root.Bencher __hx_this)
	{
	}
	
	
	public void intArithmetic(int intMax)
	{
		//line 17 "/data/Main.hx"
		int intResult = 1;
		//line 19 "/data/Main.hx"
		int myIterator_min = 0;
		//line 19 "/data/Main.hx"
		int myIterator_max = intMax;
		//line 20 "/data/Main.hx"
		while (( myIterator_min < myIterator_max ))
		{
			//line 20 "/data/Main.hx"
			int i = myIterator_min++;
			//line 21 "/data/Main.hx"
			intResult -= i;
			//line 22 "/data/Main.hx"
			 ++ i;
			//line 23 "/data/Main.hx"
			intResult += i;
			//line 24 "/data/Main.hx"
			 ++ i;
			//line 25 "/data/Main.hx"
			intResult *= i;
			//line 26 "/data/Main.hx"
			 ++ i;
			//line 27 "/data/Main.hx"
			intResult = ((int) (( intResult / i )) );
			//line 28 "/data/Main.hx"
			 ++ i;
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 12 "/data/Main.hx"
		{
			//line 12 "/data/Main.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "/data/Main.hx"
			switch (field.hashCode())
			{
				case -232206855:
				{
					//line 12 "/data/Main.hx"
					if (field.equals("intArithmetic")) 
					{
						//line 12 "/data/Main.hx"
						__temp_executeDef1 = false;
						//line 12 "/data/Main.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "intArithmetic")) );
					}
					
					//line 12 "/data/Main.hx"
					break;
				}
				
				
			}
			
			//line 12 "/data/Main.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "/data/Main.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 12 "/data/Main.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, java.lang.Object[] dynargs)
	{
		//line 12 "/data/Main.hx"
		{
			//line 12 "/data/Main.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "/data/Main.hx"
			switch (field.hashCode())
			{
				case -232206855:
				{
					//line 12 "/data/Main.hx"
					if (field.equals("intArithmetic")) 
					{
						//line 12 "/data/Main.hx"
						__temp_executeDef1 = false;
						//line 12 "/data/Main.hx"
						this.intArithmetic(((int) (haxe.lang.Runtime.toInt(dynargs[0])) ));
					}
					
					//line 12 "/data/Main.hx"
					break;
				}
				
				
			}
			
			//line 12 "/data/Main.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "/data/Main.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 12 "/data/Main.hx"
		return null;
	}
	
	
}


