#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int n = nums.size();
        int count = 0;
        int index = 0;
        int i = 0;
        while (index < n)
        {
            if (nums[i] != val)
            {
                count++;
                index++;
                i = i + 1;
            }
            else
            {
                nums.erase(nums.begin() + i);
                index++;
            }
        }
        return count;
    }
};

int main()
{

    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    Solution sol;
    int result = sol.removeElement(nums, val);
    cout << "New length: " << result << endl;
    cout << "Remaining elements: ";
    for (int i = 0; i < result; ++i)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}

/*
    1- Khởi tạo n theo kích thước của vectơ.
    2- Số khởi tạo sẽ đếm các giá trị không bằng val. Intitalize chỉ mục để đảm bảo rằng trong khi lặp, chúng tôi không vượt quá độ dài của số.
    4- Sử dụng vòng lặp while cho đến khi chỉ số nhỏ hơn n.
    5- Nếu nums[i] không khớp với giá trị, số tăng, chỉ mục và chỉ mục i,
    6- Nếu nums[i] khớp với giá trị thì xóa phần tử và cập nhật chỉ mục
    7- Cuối cùng trả về số1- khởi tạo n theo kích thước của vectơ.
    2- Số khởi tạo sẽ đếm các giá trị không bằng val. Intitalize chỉ mục để đảm bảo rằng trong khi lặp, chúng tôi không vượt quá độ dài của số.
    4- Sử dụng vòng lặp while cho đến khi chỉ số nhỏ hơn n.
    5- Nếu nums[i] không khớp với giá trị, số tăng, chỉ mục và chỉ mục i,
    6- Nếu nums[i] khớp với giá trị thì xóa phần tử và cập nhật chỉ mục
    7- Ở lần đếm trả lại cuối cùng
*/