class Solution {
public:
    bool closeStrings(string word1, string word2)
    {
      map<char,int>m1;
      map<char,int>m2;

      if(word1.length()!=word2.length())
            return false;
      else
      {
          for(int i=0;i<word1.length();i++){
              if(m1.find(word1[i]) != m1.end()){
                  m1[word1[i]]++;
              }
              else{
                  m1.insert({word1[i],1});
              }
               if(m2.find(word2[i]) != m2.end()){
                  m2[word2[i]]++;
              }
              else{
                  m2.insert({word2[i],1});
              }
          }
      }
          vector<int>freq1;
          vector<int>freq2;

          for(auto x:m1){
              freq1.push_back(x.second);
          }
          for(auto x:m2){
              freq2.push_back(x.second);
          }
          sort(freq1.begin(),freq1.end());
          sort(freq2.begin(),freq2.end());  
        
         vector<int>char1;
         vector<int>char2;

         for(auto x:m1){
             char1.push_back(x.first);
         }
         for(auto x:m2){
             char2.push_back(x.first);
         }

         if(freq1==freq2 && char1==char2)
            return true;
        else
            return false;
    }
};
