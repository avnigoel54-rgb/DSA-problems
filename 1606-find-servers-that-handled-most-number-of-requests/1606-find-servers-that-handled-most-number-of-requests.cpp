class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        int n=load.size();
        vector<int> finish(k,0);
        vector<int> cnt(k,0);
        for(int i=0;i<n;i++){
            int a=arrival[i];
            if(finish[i % k]<=a){
                finish[i%k] = arrival[i] + load[i];
                cnt[i%k]++;
            }
            else{
                bool abc = false;
                for(int j=(i%k)+1;j<k;j++){
                    if(finish[j]<=a){
                        finish[j] = arrival[i] + load[i];
                        cnt[j]++;
                        abc = true;
                        break;
                    }
                }
                if(!abc){
                    for(int j=0;j<(i%k);j++){
                        if(finish[j]<=a){
                            finish[j] = arrival[i] + load[i];
                            cnt[j]++;
                            abc = true;
                            break;
                        }
                    }
                }
            }
        }
        int mx=0;
        for(int i:cnt){
            mx=max(mx,i);
        }
        vector<int> ans;
        for(int i=0;i<k;i++){
            if(cnt[i]==mx) ans.push_back(i);
        }
        return ans;
    }
};