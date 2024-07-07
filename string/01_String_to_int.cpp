/*
Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer.

The algorithm for myAtoi(string s) is as follows:

Whitespace: Ignore any leading whitespace (" ").
Signedness: Determine the sign by checking if the next character is '-' or '+', assuming positivity is neither present.
Conversion: Read the integer by skipping leading zeros until a non-digit character is encountered or the end of the string is reached. If no digits were read, then the result is 0.
Rounding: If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then round the integer to remain in the range. Specifically, integers less than -231 should be rounded to -231, and integers greater than 231 - 1 should be rounded to 231 - 1.
Return the integer as the final result.

 

Example 1:

Input: s = "42"

Output: 42

Explanation:

The underlined characters are what is read in and the caret is the current reader position.
Step 1: "42" (no characters read because there is no leading whitespace)
         ^
Step 2: "42" (no characters read because there is neither a '-' nor '+')
         ^
Step 3: "42" ("42" is read in)
           ^
Example 2:

Input: s = " -042"

Output: -42

Explanation:

Step 1: "   -042" (leading whitespace is read and ignored)
            ^
Step 2: "   -042" ('-' is read, so the result should be negative)
             ^
Step 3: "   -042" ("042" is read in, leading zeros ignored in the result)
               ^
Example 3:

Input: s = "1337c0d3"

Output: 1337

Explanation:

Step 1: "1337c0d3" (no characters read because there is no leading whitespace)
         ^
Step 2: "1337c0d3" (no characters read because there is neither a '-' nor '+')
         ^
Step 3: "1337c0d3" ("1337" is read in; reading stops because the next character is a non-digit)
             ^
Example 4:

Input: s = "0-1"

Output: 0

Explanation:

Step 1: "0-1" (no characters read because there is no leading whitespace)
         ^
Step 2: "0-1" (no characters read because there is neither a '-' nor '+')
         ^
Step 3: "0-1" ("0" is read in; reading stops because the next character is a non-digit)
          ^
Example 5:

Input: s = "words and 987"

Output: 0

Explanation:

Reading stops at the first non-digit character 'w'.

 

Constraints:

0 <= s.length <= 200
s consists of English letters (lower-case and upper-case), digits (0-9), ' ', '+', '-', and '.'.

*/

#include<iostream>
using namespace std;

int stringToInt(string s){

	int i=0;
	bool isNegtive = false;
	string validNum = "";
	long long result =0;

	// remove white spaces
	while(i < s.size()){
		if(s[i] == ' ') i++;
		else break;
	}

	// check give num is valid string
	if(!((s[i] >='0' && s[i] <= '9') || s[i]=='+' || s[i] == '-')){
		return 0;
	}

	if(s[i] == '-'){
		isNegtive = true;
		i++;	
	}
	else if(s[i] == '+'){
		i++;     
	}

	// ignore leading zeros
	while(i < s.size() && s[i] == '0'){
		i++;
	}
	 
	while(i < s.size()){
		if(s[i] >= '0' && s[i] <= '9'){
			validNum = validNum + s[i];
		}
		else
			break;
		i++;
	}
	//cout<<reverseStringNum <<endl;
	for(int i=0; i < validNum.size() ; i++){
		 if(isNegtive && -( result * 10 + (validNum[i] - '0')) <= INT_MIN )
         	   return INT_MIN;
       		 else if((result * 10 + (validNum[i] - '0'))>INT_MAX)
         		   return INT_MAX;
		result = result * 10 + (validNum[i] - '0');
	}
	 
	// check int size overflow
	if(isNegtive){
		result = -result;
		return result < INT_MIN ? INT_MIN : result;
	}
	
	
	return result > INT_MAX ? INT_MAX : result;
}

int main(){
	string s = "-2147483648";

	cout << stringToInt(s);
	 
}
