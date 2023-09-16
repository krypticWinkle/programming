import java.util.Scanner;
import java.util.*;


// Moore's Vooting Algorithm LC 169
public class majorityElement1 
{
    public static void main(String [] args)
    {
        Scanner scn = new Scanner(System.in);
        int size = Integer.parseInt(scn.nextLine());

        int [] nums = new int[size];
        for(int i=0; i<size; i++)
        {
            nums[i] = Integer.parseInt(scn.nextLine());
        }
        
        System.out.println(majorityElement(nums));
    }

    public static int majorityElement(int[] nums) 
    {
        int val = nums[0], count = 1;
        
        for(int i=1; i<nums.length; i++)
        {
            if(count == 0)
            {
                val = nums[i];
                count = 1;
            }
            else if(val == nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return val;
    }
}
