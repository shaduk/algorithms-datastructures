/* https://www.interviewbit.com/problems/add-one-to-number/ */
vector<int> Solution::plusOne(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int carry = 1, flag = 1;
    vector<int> ans, temp;
    
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] != 0)
        {
            flag = 0;
        }
        if(flag == 0)
        {
            temp.push_back(A[i]);
        }
    }

    for(int i = temp.size()-1; i >=0; i--)
    {
        int sum = temp[i] + carry;
        temp[i] = sum%10;
        carry = sum/10;
        if(carry == 0)
        break;
    }
    
    if(carry == 1)
    {
        ans.push_back(carry);
    }
    for(int i = 0; i <temp.size(); i++)
    {
     
        ans.push_back(temp[i]);

    }
    return ans;
}
