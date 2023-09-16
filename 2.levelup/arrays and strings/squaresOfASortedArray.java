import java.util.Scanner;
import java.util.*;
//https://leetcode.com/problems/trapping-rain-water/ - H

public class squaresOfASortedArray  
{

    // ~~~~~~~~~~~~~~~~~~~~~User Section~~~~~~~~~~~~~~~~~~~~~
    public static int[] sortedSquares(int[] nums) 
    {
        for(int i=0; i<nums.length; i++)
        {
            nums[i] = nums[i] * nums[i];
        }
        int i, j=Integer.MAX_VALUE;
        for(i=1; i<nums.length; i++)
        {
            if(nums[i] > nums[i-1])
            {
                j = i;

                break;
            }
        }
        for(int k=0; k<nums.length/2; k++)
        {
            int tmp = nums[k];
            nums[k] = nums[i-1];
            nums[i-1] = tmp;
            i--;
        }
        if(j > nums.length)
        {
            return nums;
        }
        int idx = j; i=0;
        while(i < j)
        {
            if(nums[i] > nums[j])
            {
                int tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
            }
            i++;
        }
        return nums;
    }

    // ~~~~~~~~~~~~~~~~~~~Input Management~~~~~~~~~~~~~~~~~~~

    public static void main(String[] args) 
    {
        // String str;
        // str = null;
        // System.out.println(str);

        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] nums = new int[n];
        
        for(int i = 0; i < n; i++) 
            nums[i] = scn.nextInt();
        
        int[] res = sortedSquares(nums);

        for(int i = 0; i < n; i++) 
        {
            System.out.print(res[i] + " ");
        }
    }
}
