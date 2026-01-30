#include<bits/stdc++.h>
using namespace std;

void findHCF(int a, int b) {
    vector<int> arr1, arr2;

    // Corrected loop ranges
    for(int i = 1; i <= a; i++) if(a % i == 0) arr1.push_back(i);
    for(int i = 1; i <= b; i++) if(b % i == 0) arr2.push_back(i);

    int max_ans = 1;
    // Nested loop to find common elements
    for(int factorA : arr1) {
        for(int factorB : arr2) {
            if(factorA == factorB) {
                max_ans = max(max_ans, factorA);
            }
        }
    }
    cout << max_ans << " ";
}

int main(){
    int a=4;
    int b=8;
    findHCF(a,b);
}