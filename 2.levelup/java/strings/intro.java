import java.util.*;

public class intro
{
    public static void main (String[] args)
    {
        Scanner scn = new Scanner(System.in);
        String s = "hello";
        String t = scn.nextLine();//It'll read 2 strings in 2 lines
       //String t = scn.next(); It'll read 2 strings in 1 line as 1 if we enter by using spacebar (like: abc def)
        System.out.println(s + " " + t);
        System.out.println(t.length());

        char ch = t.charAt(5);
        System.out.println(ch);

        String ab = "abc def ghi jkl mno";
        String [] parts = ab.split(" ");

        for(int i=0; i<parts.length; i++)
        {
            System.out.print(parts[i] + " ");
        }

    }
}



