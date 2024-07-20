import java.util.Scanner;
public class Palindrome 
{
    public static void main(String[] args) 
{
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String original = scanner.nextLine();
        String cleaned = original.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        boolean isPalindrome = true;
        int length = cleaned.length();
        for (int i = 0; i < length / 2; i++) 
      {
            if (cleaned.charAt(i) != cleaned.charAt(length - 1 - i)) 
           {
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome) 
       {
            System.out.println("\"" + original + "\" is a palindrome.");
        } else 
        {
            System.out.println("\"" + original + "\" is not a palindrome.");
        }

        scanner.close();
    }
}
