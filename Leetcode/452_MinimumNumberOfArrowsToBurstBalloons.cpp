class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int start = points[0][0];
        int end = points[0][1];
        int mn=1;
        for(int i=1; i<points.size(); i++){
            if(points[i][0] <= end && points[i][0] >= start) {
                start = points[i][0];
                end = min(end, points[i][1]);
            }
            else{
                mn++;
                start = points[i][0];
                end = points[i][1];
            }
        }
        return mn;
    }
};
