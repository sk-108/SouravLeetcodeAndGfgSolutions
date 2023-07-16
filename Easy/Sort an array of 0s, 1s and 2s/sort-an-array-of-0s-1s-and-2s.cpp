//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int i=0;
        int j = n-1;
        int c = 0;
        while(c<=j)
        {
            if(a[c] == 1)
            {
                c++;
            }
            else if(a[c] == 0)
            {
                swap(a[c],a[i]);
                i++;
                c++;
            }
            else{
                swap(a[c],a[j]);
                j--;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends