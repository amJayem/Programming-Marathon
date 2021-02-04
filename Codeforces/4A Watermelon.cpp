/** Problem link: https://codeforces.com/problemset/problem/4/A **/

#include<cstdio>
void jayem();
int main()
{
    jayem();
	return 0;
}

void jayem(){
    int w;

    scanf("%d",&w);
    if (w > 2 && w % 2 == 0)
    {
        printf("YES\n");
    }

    else{
        printf("NO\n");
    }
}
