class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        if (points.size() <= 2) {
            return points.size();
        }
        int result = 0;
        for (int i=0; i<points.size(); ++i) {
            int same_points = 1;
            unordered_map<string, int> um;
            int local = 0;
            for (int j=i+1; j<points.size(); ++j) {
                int dx = points[i][0]-points[j][0];
                int dy = points[i][1]-points[j][1];
                if (dx == 0 && dy == 0) {
                    same_points++;
                    continue;
                } else if (dx == 0) {
                    dy=1;
                } else if (dy == 0) {
                    dx=1;
                } else {
                    if (dx < 0) {
                        dx *= -1;
                        dy *= -1;
                    }
                    int gcd = Gcd(dx, dy);
                    dx /= gcd;
                    dy /= gcd;
                }
                string slope = std::to_string(dx)+"/"+std::to_string(dy);
                local = std::max(local, ++um[slope]);
            }
            result = std::max(result, local+same_points);
        }
        return result;
    }
    
    int Gcd(int a, int b) {
        return b==0?a:Gcd(b, a%b);
    }
};
