#include<iostream>
#include<string>

using namespace std;
int main()

{
char character ;
string word ;
int count = 0;
cout << "Enter a word: " ;
cin >> word;
cout << "Which repeated character would you like to count : " ;
cin >> character;
for(int i=0; i<word.length(); i++)
{
if(word[i] == character)
{
count++;
}
}
cout << "The character " << character << " repeated " << count << " times " << endl;
return 0;
}
