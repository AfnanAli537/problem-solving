class Solution {
public:
int value(char c){
   int val;
        char symbols[] =    {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int values[]  =     {  1,   5,  10,  50, 100, 500,1000};
     for (int j = 0; j < 7; j++) {
        if (symbols[j] == c)
           val=values[j] ;
           }
           return val;
}
    int romanToInt(string s) { 
        int total=0;
     for(int i=0;i<s.size();i++){
        int cur,next;
       cur=value(s[i]);
       next=value(s[i+1]);
       if(cur>=next){
        total+=cur;
       }
       else{
         total-=cur;
       }
    }
         return total;
     }
    
};