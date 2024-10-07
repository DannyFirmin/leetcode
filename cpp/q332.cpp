//
// Created by Danny Feng on 10/2/24.
//
class Solution {
private:
// unordered_map<ORIGIN AIRPORT, map<ARRIVAL AIRPORT, FLIGHT COUNT>> targets
    unordered_map<string, map<string, int>> targets;
    bool backtracking(int ticketNum, vector<string>& result) {
        if (result.size() == ticketNum + 1) {
            return true;
        }
        for (pair<const string, int>& target : targets[result[result.size() - 1]]) {
            if (target.second > 0 ) { // if we have been to the airport
                result.push_back(target.first);
                target.second--;
                if (backtracking(ticketNum, result)) return true;
                result.pop_back();
                target.second++;
            }
        }
        return false;
    }
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        targets.clear();
        vector<string> result;
        for (const vector<string>& vec : tickets) {
            targets[vec[0]][vec[1]]++; // mapping relationship
        }
        result.push_back("JFK"); // origin airport
        backtracking(tickets.size(), result);
        return result;
    }
};