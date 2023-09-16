/*
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]

*/

import java.io.*;
import java.util.*;

import javax.lang.model.util.ElementScanner14;
public class majorityElement2
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


        int val1 = nums[0], val2=nums[0];
        int count1=1, count2=0;
        for(int i=1; i<size; i++)
        {
            if(nums[i] == val1)
            {
                count1++;
            }
            else if(nums[i] == val2)
            {
                count2++;
            }
            else
            {
                if(count1 == 0)
                {
                    val1 = nums[i];
                    count1 = 1;
                }
                else if(count2 == 0)
                {
                    val2 = nums[i];
                    count2 = 1;
                }
                else
                {
                    count1--; count2--;
                }
            }
        }
        List <Integer> list = new ArrayList<Integer>();
        count1 = count2 = 0;
        for(int i=0; i<size; i++)
        {
            if(nums[i] == val1)
                count1++;
            else if(nums[i] == val2)
                count2++;
        }
        if(count1 > size/3)
        {
            list.add(val1);
        }
        if(count2 > size/3)
        {
            list.add(val2);
        }
        //return list;
        /*1st partition
        int val1 = nums[0], count1 = 1;
        for(int i=0; i<size/3; i++)
        {
            if(count1 == 0)
            {
                val1 = nums[i];
            }
            else if(nums[i] == val1)
            {
                count1++;
            }
            else
            {
                count1--;
            }
        }

        //2nd partition
        int val2 = nums[size/3], count2 = 1;
        for(int i=(size/3)+1; i<2*(size/3); i++)
        {
            if(count2 == 0)
            {
                val2 = nums[i];
            }
            else if(nums[i] == val2)
            {
                count2++;
            }
            else
            {
                count2--;
            }
        }
        //3rd partition
        int val3 = nums[2*(size/3)], count3 = 1;
        for(int i=(2*(size/3))+1; i<size; i++)
        {
            if(count3 == 0)
            {
                val3 = nums[i];
            }
            else if(nums[i] == val3)
            {
                count3++;
            }
            else
            {
                count3--;
            }
        }
        
        if(val1 == val2 && val1 == val3)
        {
            List <Integer> list = new ArrayList<Integer>();
            list.add(val1);

            //return list;
        }
        if(val1 == val2 || val1 == val3)
        {
            List <Integer> list = new ArrayList<Integer>();
            list.add(val1);

            if(val1 == val2)
                list.add(val3);
            else if(val1 == val3)
            list.add(val2);

            //return list;
        }

        int c1=0, c2=0, c3=0;
        for(int i=0; i<size; i++)
        {
            if(nums[i] == val1)
                c1++;
            
            else if(nums[i] == val2)
                c2++;

            else if(nums[i] == val3)
                c3++;
        }

        List <Integer> list = new ArrayList<Integer>();

        if(c1 > size/3)
            list.add(val1);
        if(c2 > size/3)
            list.add(val2);
        if(c3 > size/3)
            list.add(val3);

        //return list;*/
    
    }
}

