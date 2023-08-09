class Solution {
public:
     int findcount(string s,char c)
    {
        int counter=0;
     for(int i=0;i<s.length();i++)
     {
         if(s[i]==c)
         {
             counter++;
         }
     }
     return counter;
    }
    bool isAnagram(string s, string t) {
        if(s.length()==t.length())
        {
           for(int i=0;i<s.length();i++)
           {
               if(findcount(s,s[i])!=(findcount(t,s[i])))
               {
                   return false;
               }
           } 
           return true; 
        }
        else return false;
    return true;    
    }
   
};
