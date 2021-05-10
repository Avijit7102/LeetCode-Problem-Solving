#include<iostream>
#include<string>

using namespace std;
bool detectCapitalUse(string word) {
        int a = 0, b = 0, c = 0, flag = 0;
        if(isupper(word[0]))
           {
               for(int i = 0; i < word.length(); i++)
                {
                    if(isupper(word[i]))
                    {
                        a++;
                    }
                }

                if(a == word.length())
                {
                    //return true;
                    flag = 1;
                }
           }
           else
           {
               for(int i = 0; i < word.length(); i++)
               {
                   if(islower(word[i]))
                   {
                       c++;
                   }
               }
               if(c == word.length())
               {
                   //return true;
                   flag = 1;
               }
           }

           if(isupper(word[0]))
           {
               cout << "hit in" << endl;
               for(int i = 1; i < word.length(); i++)
               {
                   if(islower(word[i]))
                   {
                       b++;
                   }
               }

               if(b == word.length()-1)
               {
                   //return true;
                   flag = 1;
               }

           }


           if(flag == 1)
           {
               return true;
           }
           else
           {
               return false;
           }


}
int main()
{
    string s;
    getline(cin, s);

    int l = s.length();
    cout << "length: " << l << endl;

    for(int i = 0; i < s.length(); i++)
    {
        cout << s[i] << endl;
    }
    cout << endl;
    cout << detectCapitalUse(s);
    //bool ss = detectCapitalUse(s);
    //cout <<"result: "<< ss << endl;
}
