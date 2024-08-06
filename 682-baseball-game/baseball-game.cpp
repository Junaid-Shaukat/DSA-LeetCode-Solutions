class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> scores;  
                int totalSum = 0;  

        for (const string& op : ops) {
            if (op == "C") {
                
                if (!scores.empty()) {
                    totalSum -= scores.top();
                    scores.pop();
                }
            } else if (op == "D") {
               
                if (!scores.empty()) {
                    int lastScore = scores.top();
                    int newScore = 2 * lastScore;
                    scores.push(newScore);
                    totalSum += newScore;
                }
            } else if (op == "+") {
             
                if (scores.size() >= 2) {
                    int first = scores.top();
                    scores.pop();
                    int second = scores.top();
                    scores.push(first); 
                                        int newScore = first + second;
                    scores.push(newScore);
                    totalSum += newScore;
                }
            } else {
                
                int score = stoi(op);
                scores.push(score);
                totalSum += score;
            }
        }

        return totalSum;
    }
};
