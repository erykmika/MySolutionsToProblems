#include <vector>

/*
	Lisa just got a new math workbook. A workbook contains exercise problems, grouped into chapters. Lisa believes a problem to
	be special if its index (within a chapter) is the same as the page number where it's located. The format of Lisa's book is as 
	follows:

	- There are n chapters in Lisa's workbook, numbered from 1 to n. The chapter has arr[i] problems, numbered from 1 to arr[i].
	- Each page can hold up to k problems. Only a chapter's last page of exercises may contain fewer than k problems.
	- Each new chapter starts on a new page, so a page will never contain problems from more than one chapter.
	- The page number indexing starts at 1.

	Given the details for Lisa's workbook, can you count its number of special problems?
*/

/*
 * Complete the 'workbook' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY arr
 
 */

int workbook(int n, int k, vector<int> arr) {
    int special = 0, pages = 0;
    // Iterate over the chapters
    for(int i=0; i<arr.size(); i++){
        // Iterate over the pages
        pages++;
        int problem_per_page = 0;
        int problem_index = 1;
        for(int j=1; j<=arr[i]; j++)
        {
            problem_per_page++;
            if(problem_index == pages) 
                special++;
            if(problem_per_page == k && j!=arr[i])
            {
                pages++;
                problem_per_page = 0;
            }
            problem_index++;
        } 
    }
    return special;
}