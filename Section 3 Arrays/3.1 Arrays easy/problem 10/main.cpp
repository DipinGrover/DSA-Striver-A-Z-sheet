// approach 1 brute
int n = nums.size();
int ans = -1;
for(int range = 0;range<=n;range++)
{
    bool is_present = false;
    for(int i = 0;i<n;i++)
    {
        if(nums[i]==range)
        {
            is_present = true;
        }
    }
    if(is_present == false)
    {
        ans = range;
    }
}
return ans;

// approach 2 using hash array
int n = nums.size();
vector<int> hash_array(n+1,0);

for(int i = 0;i<n;i++)
{
    hash_array[nums[i]]++;
}

int ans = -1;
for(int i =0;i<=n;i++)
{
    if(hash_array[i]==0)
    {
        ans = i;
    }
}
return ans;

// approach 3 using xor
int n = nums.size();
int xor_1 = 0;
int xor_2 = 0;
for(int i = 0;i<n;i++)
{
    xor_1 = xor_1 ^ nums[i];
    xor_2 = xor_2 ^ i;
}
xor_2 = xor_2 ^ n;
return xor_1 ^ xor_2;


// approach 4 using summation approach
int n = nums.size();
int sum_1,sum_2 = 0;
for(int i = 0;i<n;i++)
{
    sum_1 = sum_1 + nums[i];
    sum_2 = sum_2 + i;
}
sum_2 = sum_2 + n;
return sum_2-sum_1;
