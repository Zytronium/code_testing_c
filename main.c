#include <stdio.h>
/**
 * Used in a switch case to act as "in" does in Kotlin.
 * Determines if n is inside a range from min to max (including min and max).
 * Does NOT return 1 or 0 like a boolean, and should NOT be used as a boolean.
 * Instead, returns n if true, so that the switch case is true.
 *
 * @param n provided number to be checked
 * @param min start of integer range
 * @param max end of integer range
 * @return n if it is between min & max;
 * 0 if n is not 0;
 * 1 if n is 0.
 */
int value_in_range(int n, int min, int max)
{
	if (n >= min && n <= max)
		return n;
	if (n != 0)
		return 1;
	return 0;
}

 /**
  * This decodes an array of binary digits into an integer. Size can be no longer than
  * [sizeOf(int i = 0);] bits of data, or it may encounter an int overflow and fails.
  * @param bin sequence of 1s and 0s as an int array.
  * @param size size of the int array of binary digits. (how many digits)
  * @return decoded integer value.
  */
int bin_to_int(int *bin, int size)
{

}

 /**
  * Main entry point. Function for testing & experimenting with code.
  *
  * @return always 0 (success).
  */
int main(void)
{
	int a = 5;
	int b = 34;
	int c = -3;
	char acter = 'd';
	char coal = 34;
	int conditions[4] = {(a - c == 8 || coal - acter != c) * 8, (a - c == b / 5) * 4, (a - b == -29) * 2, !(coal - b)};
	int condSum = (conditions[0] + conditions[1] + conditions[2] + conditions[3]);

	/*switch (b - a)
	{
	case value_in_range(b - a, 22, 31):
		printf("b - a is between 22 and 31.\n");
		break;

	}*/

	/*switch (condSum)
	{
	case 0:
		printf("all are false\n");
		break;

	case 15:
		printf("conditions 1, 2, 3, and 4 are true\n");
		break;

	case 14:
		printf("conditions 1, 2, and 3 are true\n");
		break;

	case 13:
		printf("conditions 1, 2, and 4 are true\n");
		break;

	case 12:
		printf("conditions 1 and 2 are true\n");
		break;

	case 11:
		printf("conditions 1, 3, and 4 are true\n"); // this will be the output
		break;

	case 10:
		printf("conditions 1 and 3 are true\n");
		break;

	case 9:
		printf("conditions 1 and 4 are true\n");
		break;

	case 8:
		printf("condition 1 is true\n");
		break;

	case 7:
		printf("conditions 2, 3, and 4 are true\n");
		break;

	case 6:
		printf("conditions 2 and 3 are true\n");
		break;

	case 5:
		printf("conditions 2 and 4 are true\n");
		break;

	case 4:
		printf("condition 2 is true\n");
		break;

	case 3:
		printf("conditions 3 and 4 are true\n");
		break;

	case 2:
		printf("condition 3 is true\n");
		break;

	case 1:
		printf("condition 4 is true\n");
		break;

	default:
		printf("more than one condition is true.\n");
		break;
	}*/
	return (0);
}
