<pre>
Chef has just started watching Game of Thrones, and he wants to first calculate the exact time (in minutes) that it'll take him to complete the series.

The series has S seasons, and the ith season has Ei episodes, each of which are Li,1,Li,2,…,Li,Ei minutes long. Note that these Li,j include the duration of the beginning intro song in each episode. The streaming service that he uses, allows Chef to skip the intro song. The intro song changes slightly each season, and so he wants to watch the intro song in the first episode of each season, but he'll skip it in all other episodes of that season (yes, we know, a sacrilege!). You know that the intro song lasts for Qi minutes in the ith season.

Find the total time in minutes, that he has to watch.

Input:
First line will contain a single integer, T, denoting the number of testcases. Then the testcases follow.
The first line of each testcase will contain a single integer S, denoting the total number of seasons.
The second line contains S space separated integers, Q1,Q2,…,QS, where Qi denotes the duration of the intro song in the ith season.
The ith of the next S lines contains Ei+1 space separated integers, where the first integer is Ei, denoting the number of episodes in the ith season. That is followed by the duration of each of the Ei episodes, Li,1,Li,2,…,Li,Ei.
Output:
For each testcase, output the answer in a single line.

Constraints
1≤T≤5
1≤S≤105
2≤Li,j≤105
1≤Ei
Sum of all Ei in a single testcase is at most 105
1≤Qi<Li,j, for all valid j.
Sample Input 1:
1
2
1 2
1 2
2 3 4
Sample Output 1:
7
Explanation:
1 in the beginning denotes there is only 1 test case.

Testcase 1:

There are 2 seasons. The intro song in each of the first season episodes lasts for 1 minute, and the intro song in the second season episodes lasts for 2 minutes each.

For the first season, since there is only 1 episode, Chef will be watching it completely - 2 minutes.

For the second season, Chef will be watching the first episode completely (3 minutes) and will skip the intro song of the second episode (4−2=2 minutes).

So, the total time spent is 2+(3+(4−2))=7 minutes.

Sample Input 2:
2
1
10
5 11 11 11 11 11
5
10 10 10 10 10
1 11
1 11
1 11
1 11
1 11
Sample Output 2:
15
55
</pre>