// first solution using observation
class Solution
{
public:
    bool isHappy(int n)
    {
        bool ok = false;
        while (true)
        {
            long sum = 0;
            while (n)
            {
                int lstDigit = n % 10;
                sum += lstDigit * lstDigit;
                n /= 10;
            }
            if (sum >= 1 && sum <= 9)
            { // reach to our valid range
                if (sum == 1 || sum == 7)
                {
                    ok = true;
                    break;
                }
                else
                {
                    break;
                }
            }
            else
            {
                n = sum;
            }
        }
        return ok;
    }
};

// second solution brute force

class Solution
{
public:
    long dgtSum(long n)
    {
        long ret = 0;
        while (n)
        {
            ret += (n % 10) * (n % 10);
            n /= 10;
        }
        return ret;
    }

    bool isHappy(int n)
    {
        unordered_map<int, int> vis;
        bool ok = true;
        vis[n] = 1;
        while (n != 1)
        {
            n = dgtSum(n);
            if (vis[n])
            {
                ok = false;
                break;
            }
            vis[n] = 1;
        }
        return ok;
    }
};
