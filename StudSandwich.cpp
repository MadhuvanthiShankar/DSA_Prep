#include <vector>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int circular_count = 0; 
        int square_count = 0;   
        
        
        for (int student : students) {
            if (student == 0)
                circular_count++;
            else
                square_count++;
        }
        
       
        for (int sandwich : sandwiches) {
            if (sandwich == 0) {
                if (circular_count == 0)
                    break; 
                circular_count--; 
            } else {
                if (square_count == 0)
                    break; 
                square_count--;
            }
        }
        
        
        return circular_count + square_count;
    }
};
