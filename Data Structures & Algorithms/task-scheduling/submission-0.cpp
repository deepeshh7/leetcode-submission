class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);

        for(char task:tasks)
        {
            freq[task-'A']++;
        }

        int maxFreq=0;
        for(int i : freq)
        {
            maxFreq=max(maxFreq,i);
        }

        int countMax=0;
        for (int f : freq) 
        {
            if (f == maxFreq) 
            {
                countMax++;
            }
        }

        int answer = (maxFreq - 1) * (n + 1) + countMax;

        return max(answer, (int)tasks.size());
    }
};
