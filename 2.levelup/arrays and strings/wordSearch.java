import java.io.*;
import java.util.*;

//LC 79
public class wordSearch
{
    public static void main(String [] args)
    {
        Scanner scn = new Scanner(System.in);
        int m = Integer.parseInt(scn.nextLine());
        int n = Integer.parseInt(scn.nextLine());
        char [][] board = new char [m][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                board[i][j] = scn.nextLine().charAt(0); 
            }
        }
        String word = scn.nextLine();

        System.out.println(exist(board, word));
    }

    public static boolean exist(char[][] board, String word) 
    {
        int n = board.length, m = board[0].length;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(board[i][j] == word.charAt(0))
                {
                    boolean res = explore(board, i, j, 0, word);
                    if(res) return true;
                }
            }
        }
        return false;
    }

    public static boolean explore(char[][] board, int row, int col, int si, String word)
    {
        if(si == word.length()) return true;
        if(row>=board.length || col>=board[0].length ||row < 0 || col < 0) return false;
        
        if(word.charAt(si) != board[row][col]) return false;

        char ch = board[row][col];
        board[row][col] = '@';
        if(explore(board, row-1, col, si+1, word))
        {
            //board[row][col] = ch;//this line doesn't matter bc we're already returning here
            return true;
        }
        if(explore(board, row, col+1, si+1, word))
        {
            //board[row][col] = ch;
            return true;
        }
        if(explore(board, row+1, col, si+1, word))
        {
            //board[row][col] = ch;
            return true;
        }
        if(explore(board, row, col-1, si+1, word))
        {
            //board[row][col] = ch;
            return true;
        }
        
        
        board[row][col] = ch;
        return false;
    }
}
