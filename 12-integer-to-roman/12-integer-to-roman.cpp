class Solution {
public:
    string intToRoman(int num) {
        
        
   int arr[13] = {1000, 900 , 500 , 400,  100 , 90 , 50 ,  40 , 10 , 9 , 5, 4 , 1};
   string val [] = {"M", "CM", "D", "CD" , "C" , "XC", "L", "XL" , "X", "IX", "V" , "IV" , "I"};
  
     string s = "";
         for( int i = 0 ; i<13 ; i++)
         {
              while(num >= arr[i]){
                   s += val[i];
                   num -= arr[i];
             }
         }
         return s ;
         
    }
};