class Solution {
public:
    bool isAnagram(string s, string t) {
        // Step 1: Length check (Correct in your version)
        if(s.length() != t.length()){
            return false;
        }

        int count[26] = {0};

        // Step 2: Increment counts for string s
        for(int i = 0; i < s.length(); i++){
            count[s[i] - 'a']++;
        }

        // Step 3: Decrement counts for string t and validate
        for(int i = 0; i < t.length(); i++){
            count[t[i] - 'a']--;
            
            // If count goes below 0, t has more of this char than s
            if(count[t[i] - 'a'] < 0){
                return false;
            }
        }

        return true;
    }
};