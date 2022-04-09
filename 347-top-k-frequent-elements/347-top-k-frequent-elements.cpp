class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<int>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>rmp;
        for(auto it=m.begin();it!=m.end();it++)
        {
            rmp.push(make_pair(it->second,it->first));
            if(rmp.size()>k)rmp.pop();
        }
       while(!rmp.empty())   {
           // if(k==0)break;
            pair<int,int>p = rmp.top();
            ans.push_back(p.second);
            rmp.pop();
            // k--;
        }
        return ans;
    }
};