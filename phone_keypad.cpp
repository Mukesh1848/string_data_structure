class Solution {
    private:
    void solve(string digits,vector<string>&ans,string output,int index , string arr[]){
       
       // base case 
       if(index>=digits.length()){
           ans.push_back(output);
           return ;
       }
       
       int number = digits[index] -'0';
       string value = arr[number];

       for(int i=0;i<value.length();i++){
           output.push_back(value[i]);
           solve(digits, ans , output ,index+1 , arr);
           output.pop_back(); // backtracking
       }
    }

public:

    vector<string> letterCombinations(string digits) {
          vector<string>ans;

          if(digits.length()==0){
              return ans;
          }

        string output;
          int index=0;
          string arr[10] = {"","","abc","def","ghi","jkl","mno","pqrs",
          "tuv","wxyz"};
          solve(digits,ans,output,index ,arr);
          return ans;
    }
};
