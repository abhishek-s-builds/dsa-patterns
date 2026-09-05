// LeetCode Question No. 844 - Backspace String Compare
// Approach: String Simulation
// Time Complexity: O(n + m)
// Space Complexity: O(n + m)

class Solution { 
public:     
    bool backspaceCompare(string s, string t)      
    {         
        string p = "";         
        string q = "";         
        
        for(int i = 0; i < s.size(); i++)         
        {             
            if(s[i] != '#')             
            {                 
                p = p + s[i];             
            }             
            else             
            {                 
                if(!p.empty())                 
                {                   
                    p.pop_back();                 
                }             
            }         
        }         
        
        for(int i = 0; i < t.size(); i++)         
        {             
            if(t[i] != '#')             
            {                 
                q = q + t[i];             
            }             
            else             
            {                 
                if(!q.empty())                 
                {                   
                    q.pop_back();                 
                }             
            }         
        }         
        
        if(p == q)         
        {             
            return true;         
        }         
        else         
        {             
            return false;         
        }     
    } 
};
