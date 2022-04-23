class Solution {
public:

    // Encodes a URL to a shortened URL.
    map<string,string>m;
    int count = 0;
    string encode(string longUrl) {
        string ans = "";
        count++;
        string t = to_string(count);
        ans = "http://tinyurl.com/";
        ans += t;
        m[ans] = longUrl;
        return ans;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return m[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));