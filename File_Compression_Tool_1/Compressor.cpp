#include <iostream>      // Input/output (cout, cin)
#include <fstream>       // File handling (opening, reading, writing)
#include <string>        // String operations
#include <vector>        // Dynamic arrays for triples
#include <algorithm>     // max(), min() functions
#include <iomanip>       // For formatting output
#include <climits>       // INT_MAX, etc.
using namespace std;
const int WINDOW_SIZE = 4096;      // 4KB sliding window
const int LOOKAHEAD_SIZE = 256;    // 256-byte lookahead
const int OFFSET_BITS = 12;        // 12 bits for offset (4096 positions)
const int LENGTH_BITS = 8;         // 8 bits for length (256 max)
void even(vector<int> &nums){
    vector<int>even_nums;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0){
            even_nums.push_back(nums[i]);
        }
    }
    if(even_nums.empty()){
        cout<<"No even number found."<<endl;
    }
    else{
    for(int i=0;i<even_nums.size();i++){
        cout<<even_nums[i]<<" ";
    }}
    
   
}

int main(){
    //the main classes i have to make are: 
    int v=0;
vector<int>nums;
while(true){
    int n;
    cout<<"Enter a number (or -1 to stop): ";
    cin>>n;
    if(n==-1){
        break;
    }

    nums.push_back(n);
}
even(nums);
    return 0;
}