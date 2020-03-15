import java.io.*;
import java.util.Scanner;

public class Example
{
	private static final boolean DBG = true;

	public static void main(String[] argv)
	{
		if(DBG)
		{
			try
			{
				FileInputStream instream = new FileInputStream("input.in");
				PrintStream outstream = new PrintStream("output.out");
				System.setIn(instream);
				System.setOut(outstream);
			}
			catch(Exception e)
			{
				System.err.println("Error Occurred");
			}
		}

		Scanner scanner = new Scanner(System.in);

		while(scanner.hasNext())
		{
			int input = scanner.nextInt();

			System.out.println(input);
		}
	}
}
