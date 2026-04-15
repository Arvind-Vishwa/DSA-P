// // Rat in Maze
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// void solve(vector<vector<int>>&m,vector<vector<bool>>&visited,int srcx,int srcy,int destx,int desty,string output,vector<string>&ans){
//     // base case
//     if(srcx == destx && srcy == desty){
//         ans.push_back(output);
//         return;
//     }
//     // 1 case hum solve karenge baaki recursion se
//     int newx=srcx-1;
//     int newy =srcy;
//     if(isSafe(newx,newy,m,visited,n)){

//     }
// }
// int main(){
//     vector<string>findPath(vector<vector<int>>&m,int n){
//         vector<string>ans;
//         vector<vector<bool>>visited(n,vector<bool>(n,0));
//         int srcx=0;
//         int srcy=0;
//         int destx=n-1;
//         int desty=n-1;
//         string output="";
//         visited[0][0]=true;
//         solve(m,visited,srcx,srcy,destx,desty,output,ans);

//     }
// }