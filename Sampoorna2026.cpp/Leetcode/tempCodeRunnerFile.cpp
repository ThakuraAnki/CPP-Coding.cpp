
    int n=a.size();
    int m=b.size();

    reverse(a.begin(),a.end());
    
    int cnt=0;
    string ans="";
    for (int i = 0; i < n; i++){
        if(b.find(a[i])!=string::npos){
            ans+=a[i];
            cnt++;
        }else{
            if(!ans.empty()){
            ans+=a[i];
            }
        }

        if(cnt==m){
            break;
        }
        
    }
    reverse(ans.begin(),ans.end());    
    cout<<ans<<endl;
