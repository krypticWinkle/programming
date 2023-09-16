import java.util.Scanner;


//https://leetcode.com/problems/trapping-rain-water/ H
//https://leetcode.com/problems/paint-house-ii/ H


//LC 238
public class productOfArrayExceptItself 
{
    public static void main(String[] args) 
    {
        Scanner scn = new Scanner(System.in);
        int sz = Integer.parseInt(scn.nextLine());
        int [] nums = new int[sz];
        for(int i=0; i<sz; i++)
        {
            nums[i] = Integer.parseInt(scn.nextLine());
        }

        int [] ans = productExceptSelf(nums);

        for(int i=0; i<ans.length; i++)
        {
            System.out.print(ans[i] + " ");
        }

    }
    public static int[] productExceptSelf(int[] nums) 
    {
        int zcount = 0;//zero count
        for(int i=0; i<nums.length; i++)
        {
            if(nums[i] == 0)zcount++;
        }
        int [] ans = new int [nums.length];
        
        if(zcount == 0)
        {
            int pr = 1;
            for(int i=0; i<nums.length; i++)
            {
                pr *= nums[i];
            }
            for(int i=0; i<nums.length; i++)
            {
                ans[i] = pr/nums[i];
            }
        }
        else if(zcount == 1)
        {
            int pr = 1;
            for(int i=0; i<nums.length; i++)
            {
                if(nums[i] != 0)
                    pr *= nums[i];
            }
            
            for(int i=0; i<nums.length; i++)
            {
                if(nums[i] != 0)
                    ans[i] = 0;
                else
                {
                    ans[i] = pr;
                }
            }
        }
        else if(zcount > 1)
        {
            for(int i=0; i<nums.length; i++)
            {
                ans[i] = 0;
            }
        }
        return ans;
    }
}
