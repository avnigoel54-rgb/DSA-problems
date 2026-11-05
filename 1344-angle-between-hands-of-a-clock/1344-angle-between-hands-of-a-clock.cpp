class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hr=(hour%12)*30;
        double minn=minutes*6;
        hr+=minutes*0.5;
        return min(abs(hr-minn),360 - abs(hr-minn));
    }
};