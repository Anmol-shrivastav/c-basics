class Solution {
public:
    long long int myAtoi(string s) {
        char sign = '+';
        string str = "";
        int flag = 0;
        
        for(int i=0; i<s.length(); i++){
           if(s[i] == '-' || s[i] == '+'){
               if(flag == 1){
                   break;
               }
               flag = 1;
               sign = s[i];
           } else if(s[i] >= '0' && s[i] <= '9'){
               if(flag == 0){
                   flag = 1;
                   sign = '+';
               }
               str+=s[i];
           }
            
            else if(s[i] == ' ' && flag == 0){
                continue;
            } else if((s[i] == '-' || s[i] == '+') && flag == 0){
                continue;
            } else {
                break;
            }
        }
        int i;
        for(i=0; i<str.length(); i++){
            if(str[i] >= '1' && str[i] <= '9')
                break;
        }
        string newstr = str.substr(i,str.length());
        long long int ans = convertToInt(newstr);
        if(ans == 2147483648){
            if(sign == '-'){
                return -1 * 2147483648;
            }else {
                return 2147483647;
            }
        } else {
            if(sign == '-'){
                return -1 * ans;
            } else {
                return ans;
            }
        }
    }
    long long int convertToInt(string num){
        if(num.length() == 0)
            return 0;
        if(num.length() > 10)
            return 2147483648;
        long long int p = 1;
        long long int ei = num.length()-1;
        long long int res = 0; 
        while(ei >= 0){
            res = res + (num[ei] - '0') * p;
            ei--;
            if(res > 2147483648)
                return 2147483648;
            p*=10;
        }
        return res;
    }
};
