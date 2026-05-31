// for every team find total points (3 point for win and 1 for draw) and goal difference(scored-conceded)
// then print team name with max point,its points,goal diff

// rules for tie
// if max point are same choose on basis of goal diff,
// if that also same then higher goal scoring
// if that also same then the team which comes first in order.

#include <stdio.h>

struct team{
    char name[100];
    int won;
    int draw;
    int lost;
    int goals_scored;
    int goals_conceded;
};

int main()
{
    int n;
    scanf("%d",&n);

    struct team s[n];

    for(int i=0;i<n;i++){
        scanf("%s",s[i].name);
        scanf("%d",&s[i].won);
        scanf("%d",&s[i].draw);
        scanf("%d",&s[i].lost);
        scanf("%d",&s[i].goals_scored);
        scanf("%d",&s[i].goals_conceded);
    }

    int maxpt=0;
    int gd=0;
    int maxg=s[0].goals_scored;
    int ind=0;

    for(int i=0;i<n;i++){
        int temppt = (3*s[i].won)+s[i].draw;
        int tempgd = s[i].goals_scored-s[i].goals_conceded;
        if(temppt>maxpt){
            maxpt=temppt;
            ind=i;
            gd=tempgd;
            maxg=s[i].goals_scored;
        }
        else if (temppt==maxpt)
        {
            if(tempgd>gd){
                gd=tempgd;
                ind=i;
                maxg=s[i].goals_scored;
            }
            else if(tempgd==gd){
                int tempmaxg=s[i].goals_scored;
                if(tempmaxg>maxg){
                    maxg=s[i].goals_scored;
                    ind=i;
                }
            }
        }
        
    }
    printf("%s\n%d\n%d",s[ind].name,maxpt,gd);

    return 0;
}