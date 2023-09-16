import java.util.Scanner;


//LC 11
public class containerWithMostWater 
{
    public static void main (String [] args) throws Exception
    {
        Scanner scn = new Scanner(System.in);
        
        int size = Integer.parseInt(scn.nextLine());
        int [] walls = new int [size];
        for(int i=0; i<size; i++)
        {
            walls[i] = Integer.parseInt(scn.nextLine());
        }
        int maxi = 0;
        // B R U T E - F O R C E 
        // for(int i=0; i<size; i++)
        // {
        //     int k=1;
        //     for(int j=i+1; j<size; j++)
        //     {
        //         maxi = Math.max(maxi, Math.min(walls[i], walls[j]) * k);
        //         k++;
        //     }
        // }
        
        int i=0, j = walls.length - 1;
        while(i < j)
        {
            maxi = Math.max(maxi, Math.min(walls[i], walls[j]) * (j-i));
            if(walls[i] > walls[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        System.out.println(maxi);
        
    }
}
