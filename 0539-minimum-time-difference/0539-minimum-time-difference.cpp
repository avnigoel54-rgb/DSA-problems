class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> time;
        for(string s:timePoints){
            int h=stoi(s.substr(0,2));
            int m=stoi(s.substr(3,2));
            time.push_back(h*60+m);
        }
        sort(time.begin(),time.end());
        int mn=INT_MAX;
        for(int i=1;i<time.size();i++){
            int d=time[i]-time[i-1];
            mn=min(mn,d);
        }
        mn=min(mn, 1440 - time.back() + time[0]);
        return mn;
    }
};