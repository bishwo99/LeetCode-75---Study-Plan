#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
	cin >> str1 >> str2;
	if(str1+str2 != str2+str1)
	cout <<"";
	cout<< str2.substr(0,std::gcd(str1.length(),str2.length()));
}