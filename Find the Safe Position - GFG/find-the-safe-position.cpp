// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
  int gen(int n,int k)
  {
      if(n == 0)return 1;
      return (gen(n-1,k)+k)%n;
  }
    int safePos(int n, int k) {
        // code here
        return gen(n,k)+1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}  // } Driver Code Ends