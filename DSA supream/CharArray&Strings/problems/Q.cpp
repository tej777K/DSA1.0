#include<iostream>
#include<string>
using namespace std;

int substring(string s)
{
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        for(int j=i;j<s.length();j++)
        {
          string  sub = s.substr(i , j-i+1);
          int k=0,l=sub.length()-1;
            while (k<=l)
            {
                if(sub[k] == sub[l])
                {
                      k++;
                l--;
                count++;
                }
                else{
                    k++;
                    l--;
                }
              
            }
        }
    
    }
    return count;
}

int main()
{
    string s="noon";
   int palindromeCount = substring(s);
    cout << palindromeCount;   
    return 0;
}