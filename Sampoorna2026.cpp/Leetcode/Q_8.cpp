class Solution {
public:
    string addn(string num1, string num2) {
        int p1=num1.size()-1;
        int p2=num2.size()-1;
        int c=0;
        string ans="";
        while(p1>=0 || p2>=0 || c>0){
            int d1=0;
            if(p1>=0) d1=num1[p1]-'0';
            int d2=0;
            if(p2>=0) d2=num2[p2]-'0';
            int s=d1+d2+c;
            ans.push_back(s%10+'0');
            c=s/10;
            p1--;p2--;
        }                                   
        reverse(ans.begin(),ans.end());
        return ans;
    }
    bool chk(int idx,string n1,string n2,string num){
        int n=num.size();   
        while(idx<n){
            string n3=addn(n1,n2);
            if(idx+n3.size()>n) return false;
            string temp=num.substr(idx,n3.size());
            if(temp!=n3) return false;
            n1=n2;
            n2=n3;
            idx+=n3.size();                     
        }
        return true;
    }

    bool isAdditiveNumber(string num) {
        int n=num.size();
        for(int l1=1;l1<=n/2;l1++){
            if(l1>1 && num[0]=='0')break;
            for(int l2=1;n-l1-l2-max(l1,l2)>=0;l2++){
                if(l2>1 && num[l1]=='0') break;
                string n1=num.substr(0,l1);
                string n2=num.substr(l1,l2);
                int idx=n1.size()+n2.size();
                if(chk(idx,n1,n2,num)) return true;   
            }
        }
        return false;

    }
};