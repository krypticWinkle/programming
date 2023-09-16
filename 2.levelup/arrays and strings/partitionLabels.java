import java.io.*;
import java.util.*;
import java.lang.*;
import java.text.ParseException;
//
public class partitionLabels 
{
    public static void main(String [] args)
    {
        Scanner scn = new Scanner(System.in);
        String s = scn.nextLine();

        List<Integer> list = partitionLabel(s);
        for(int i=0; i<list.size(); i++)
        {
            System.out.print(list.get(i) + " ");
        }
    }

    public static List<Integer> partitionLabel(String s)
    {
        List<Integer> list=new ArrayList<Integer>();
        HashMap<Character, Integer> hm = new HashMap<>();
        int prev = -1, maxi = 0;
        for(int i=0; i<s.length(); i++)
        {
            if(hm.containsKey(s.charAt(i)))
            {
                hm.put(s.charAt(i), i);
            }
            else
            {
                hm.put(s.charAt(i), i);
            }
        }
        
        for(int i=0; i<s.length(); i++)
        {
            if(i <= maxi)
            {
                maxi = Math.max(maxi, hm.get(s.charAt(i)));
            }
            else
            {
                list.add(maxi-prev);
                prev = maxi;
                maxi = hm.get(s.charAt(i));
            }

            if(i == s.length()-1)
            {
                list.add(maxi-prev);
            }
        }

        return list;
    }
}
