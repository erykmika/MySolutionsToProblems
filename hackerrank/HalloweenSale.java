/*
	Usually, all games are sold at the same price, dollars. However, they are planning to
	have the seasonal Halloween Sale next month in which you can buy games at a cheaper price.
	Specifically, the first game will cost dollars, and every subsequent game will cost dollars
	less than the previous one. This continues until the cost becomes less than or equal to dollars,
	after which every game will cost dollars. How many games can you buy during the Halloween Sale?

	howManyGames has the following parameters:

    int p: the price of the first game
    int d: the discount from the previous game price
    int m: the minimum cost of a game
    int s: the starting budget
*/

class HalloweenSale {

    /*
     * Complete the 'howManyGames' function below.
     *
	 *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER p
     *  2. INTEGER d
     *  3. INTEGER m
     *  4. INTEGER s
     */

    public static int howManyGames(int p, int d, int m, int s) {
		int currentPrice = p, numberOfGames = 0;
		while(currentPrice > m && s > 0)
		{
			s -= currentPrice;
			if(s >= 0) numberOfGames++;
			currentPrice -= d;
			if(currentPrice <= m) break;
		}
		while(s > 0)
		{
			s -= m;
			if(s>=0) numberOfGames++;
		}
			return numberOfGames;
		}

}
