
//Reverse a Number

//leetcode problem function begin

int reverse(int x)
{
	int result = 0;
	
	while(x != 0)
	{
		if( result > INT_MAX || result < INT_MIN) return 0;
		
		result = (result * 10) + (x % 10);
		
		x = x % 10;
		
	}
	
	return result;
}

//leetcode problem function end


