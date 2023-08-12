//HEADER TO INCLUDE ALL STL FUCNTIONS
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	/*GETLINE FUN IS USED TO STORE A STRING WHERE AS CIN IS USED FOR A CHAR
	YOU CANNOT ITERATE THRU STR IF CIN IS USED*/
	getline(cin,str);
	vector<string> words;
	//ANOTHER STRING TO TEMP ADD WORDS FROM MAIN STRING
	string s1="";
	for(int i=0;i<str.length();i++)
	{
		//IF SPACE IS FOUND THE CHARECTERS ADDED TO S1 WILL BE PUSHED TO VECTOR
		if(str[i]==' ')
		{
			words.push_back(s1);
			s1="";
		}
		//ADD CHARECTERS TO S1 FROM MAIN STRING UNTILL SPACE IS FOUND
		else
		s1+=str[i];
	}
	//USED TO PUSH THE LAST WORD REMAINING AFTER FINAL SPACE
		words.push_back(s1);
		//FOR LOOP TO PRINT IN REV ORDER
	for(int i=words.size()-1;i>=0;i--)
	{
		cout<<words[i]<<" ";
	}
}
