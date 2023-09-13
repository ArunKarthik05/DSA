string findLargest(int N, int S) {
   if(S==0 && N>1) return "-1";
        string res = "";
        while(N>0) {
            if(S>9) {
                res+='9';
                S-=9;
            }
            else if(S>0) {
                res+=to_string(S);
                S=0;
            }
            else res+='0';
            N--;
        }
        if(S>0) return "-1";
        return res;
    }
