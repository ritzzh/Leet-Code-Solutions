class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0;
        int max = 0;
        for (int x : tokens) {
            if (x > max) {
                max = x;
            }
        }

        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] < power) {
                power -= tokens[i];
                score++;
                tokens[i] = 0;
            }
            if (tokens[i] == max) {
                score--;
                power += tokens[i];
                tokens[i] = 0;
                i = 0;
            }
        }

        return score;
    }
};
