import java.io.*;
import java.util.*;
import java.math.*;


//lc 556
public class nextGreaterElement3
{
    public static void main(String [] args) throws Exception
    {
        Scanner scn = new Scanner(System.in);
        int num = Integer.parseInt(scn.nextLine());

        int result = nextGreater(num);
        System.out.println(result);
    }

    public static int nextGreater(int n)
    {
        String s=Integer.toString(n);
        char [] ca = s.toCharArray();
        
        int i = s.length() - 2, ptr;
        while(i >= 0 && ca[i] >= ca[i+1])
        {
            i--;
        }
        if(i == -1)return -1;
        ptr = i;
        i = s.length()-1;
        //swapping the just greater digit with the dip(where ptr is there)
        while(i > ptr)
        {
            if(ca[i] > ca[ptr])
            {
                char tmp = ca[i];
                ca[i] = ca[ptr];
                ca[ptr] = tmp;
                break;
            }
            i--;
        }
        //reversing the digits after swapping the dip point with just greater digit in right
        ptr++; i = s.length()-1;
        while(ptr < i)
        {
            char tmp = ca[ptr];
            ca[ptr] = ca[i];
            ca[i] = tmp;
            ptr++;
            i--;

            /*
            https://leetcode.com/problems/next-greater-element-iii/discuss/1660492/JAVA-4ms-Solution
            try
            {
                return Integer.parseInt(greaterStr);//greaterStr ->string
            }
            catch(NumberFormatException ex)
            {
                return -1;
            }*/

        }
        /*i=0;
        String str = "";
        while(i< s.length())
        {
            str += ca[i];
            i++;
        }*/
      
      
      
        String ss = new String(ca);
        BigInteger l = new BigInteger(ss);
        BigInteger bi = BigInteger.valueOf(Integer.MAX_VALUE);
      
        if(l.compareTo(bi) == 1)return -1;
        return l.intValue();
        //return result;
    }
}

