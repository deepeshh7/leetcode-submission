class Solution {
private:
    unordered_map<string, string> longToShort;
    unordered_map<string, string> shortToLong;
    int id = 0;

public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        if (longToShort.count(longUrl)) {
            return longToShort[longUrl];
        }

        string shortUrl = "http://tinyurl.com/" + to_string(id++);

        longToShort[longUrl] = shortUrl;
        shortToLong[shortUrl] = longUrl;

        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return shortToLong[shortUrl];
    }
};