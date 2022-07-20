#include <iostream>
#include <vector>
// Switch DEBUG to false if you don't want to print the factors
#define DEBUG true

using namespace std;

vector <int> factors(int x) {
    // We will store all factors in `result`
    vector <int> result;
    int i = 1;
    // This will loop from 1 to int(sqrt(x))
    while(i*i <= x) {
        // Check if i divides x without leaving a remainder
        if(x % i == 0) {
            result.push_back(i);
            // Handle the case explained in the 4th
            if(x/i != i) {
            	cout<<"x = "<<x<<" i = "<<i<<"\n";
                result.push_back(x/i);
            }
        }
        i++;
    }
    // Print in case of debug mode
        for(int i=0; i<result.size(); i++) {
            cout << result[i] << ' ';
        }
        cout << endl;
    // Return the list of factors of x
    return result;
}

int main() {
    factors(45);
    return 0;
}
