#include <iostream>
#include <vector>
using namespace std;
long long MPFast(const vector<long>&nums)
{
    int n = nums.size();
     long f=0; long s=0;
    for(int i=0;i<n;++i) {
        if(nums[i]>f)
        {
            s=f;
            f=nums[i];
        } else if(nums[i]>s)
        {
            s=nums[i];
        }
    }

    return (f*s);
}

int main() {
    int n;
    cin >> n;
    vector<long> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout<<MPFast(nums)<< "\n";
    return 0;
}



/*class Solution
{
public:
	long MaxProduct(vector<int> &nums)
	{
		long first = 0, second = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] > first)
			{
				second = first;
				first = nums[i];
			}
			else if (nums[i] > second)
			{
				second = nums[i];
			}
		}
		return first*second;
	}
};




int main() {
	vector<int> vec;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		vec.push_back(x);
	}

	Solution s;
	cout << s.MaxProduct(vec) << endl;

	return 0;
}
*/
