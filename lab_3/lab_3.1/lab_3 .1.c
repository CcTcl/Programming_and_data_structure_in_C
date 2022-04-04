#include <stdio.h>
#include<string.h>

typedef struct stu{
    char name[20];
    int chi, mth, eng, phy, chem, total;
}Student;

typedef struct{
	char name[20];
	int score;
}Result;

void InputInfo(Student* stu, int n){
	int i;
	for(i=0; i<n; i++){
		printf("Input student%d name:\n", i+1);
		fflush(stdin);
		gets(stu[i].name);

		printf("Input student%d Chinese score:\n", i+1);
		fflush(stdin);
		scanf("%d", &stu[i].chi);

		printf("Input student%d Math score:\n", i+1);
		fflush(stdin);
		scanf("%d", &stu[i].mth);

		printf("Input student%d English score:\n", i+1);
		fflush(stdin);
		scanf("%d", &stu[i].eng);

		printf("Input student%d Physics score:\n", i+1);
		fflush(stdin);
		scanf("%d", &stu[i].phy);

		printf("Input student%d Chenistry score:\n", i+1);
		fflush(stdin);
		scanf("%d", &stu[i].chem);
	}
	for(i=0;i<n;i++){
		stu[i].total = stu[i].chi + stu[i].mth + stu[i].eng + stu[i].phy + stu[i].chem;
	}
}

void minMax(Student* stu, Result* res, int t, int n){
	int j, min, max;
	char name[20];
	if(t==1){
		res[0].score = stu[0].chi;
		res[1].score = stu[0].chi;
		strcpy(res[0].name, stu[0].name);
		strcpy(res[1].name, stu[0].name);
		for(j=0;j<n;j++){
			if(stu[j].chi < res[0].score){
				res[0].score = stu[j].chi;
				strcpy(res[0].name, stu[j].name);
			}
			if(stu[j].chi > res[1].score){
				res[1].score = stu[j].chi;
				strcpy(res[1].name, stu[j].name);
			}
		}
	}
	else if(t==2){
		res[0].score = stu[0].mth;
		res[1].score = stu[0].mth;
		strcpy(res[0].name, stu[0].name);
		strcpy(res[1].name, stu[0].name);
		for(j=0;j<n;j++){
			if(stu[j].mth < res[0].score){
				res[0].score = stu[j].mth;
				strcpy(res[0].name, stu[j].name);
			}
			if(stu[j].mth > res[1].score){
				res[1].score = stu[j].mth;
				strcpy(res[1].name, stu[j].name);
			}
		}
	}
	else if(t==3){
		res[0].score = stu[0].eng;
		res[1].score = stu[0].eng;
		strcpy(res[0].name, stu[0].name);
		strcpy(res[1].name, stu[0].name);
		for(j=0;j<n;j++){
			if(stu[j].eng < res[0].score){
				res[0].score = stu[j].eng;
				strcpy(res[0].name, stu[j].name);
			}
			if(stu[j].eng > res[1].score){
				res[1].score = stu[j].eng;
				strcpy(res[1].name, stu[j].name);
			}
		}
	}
	else if(t==4){
		res[0].score = stu[0].phy;
		res[1].score = stu[0].phy;
		strcpy(res[0].name, stu[0].name);
		strcpy(res[1].name, stu[0].name);
		for(j=0;j<n;j++){
			if(stu[j].phy < res[0].score){
				res[0].score = stu[j].phy;
				strcpy(res[0].name, stu[j].name);
			}
			if(stu[j].chi > res[1].score){
				res[1].score = stu[j].phy;
				strcpy(res[1].name, stu[j].name);
			}
		}
	}
	else if(t==5){
		res[0].score = stu[0].chem;
		res[1].score = stu[0].chem;
		strcpy(res[0].name, stu[0].name);
		strcpy(res[1].name, stu[0].name);
		for(j=0;j<n;j++){
			if(stu[j].chem < res[0].score){
				res[0].score = stu[j].chem;
				strcpy(res[0].name, stu[j].name);
			}
			if(stu[j].chem > res[1].score){
				res[1].score = stu[j].chem;
				strcpy(res[1].name, stu[j].name);
			}
		}
	}
	else if(t==6){
		res[0].score = stu[0].total;
		res[1].score = stu[0].total;
		strcpy(res[0].name, stu[0].name);
		strcpy(res[1].name, stu[0].name);
		for(j=0;j<n;j++){
			if(stu[j].total < res[0].score){
				res[0].score = stu[j].total;
				strcpy(res[0].name, stu[j].name);
			}
			if(stu[j].total > res[1].score){
				res[1].score = stu[j].total;
				strcpy(res[1].name, stu[j].name);
			}
		}
	}
}

int main(){
	int n, i;
	char subject[10];
	do{
       printf("How many students?\n");
       fflush(stdin);
	   scanf("%d", &n);
    }while(n <= 0);

	Student stu[n];

	InputInfo(stu, n);

	for(i=1;i<=6;i++){
		switch(i){
			case 1:
				strcpy(subject, "Chinese  ");
				break;
			case 2:
				strcpy(subject, "Math     ");
				break;
			case 3:
				strcpy(subject, "English  ");
				break;
			case 4:
				strcpy(subject, "Physics  ");
				break;
			case 5:
				strcpy(subject, "Chemistry");
				break;
			case 6:
				strcpy(subject, "Total    ");
				break;
		}
		Result res[2];
		minMax(stu, res, i, n);
		printf("%s\tmax:%d\t%s\tmin:%d\t%s\n", subject, res[1].score, res[1].name, res[0].score, res[0].name);
	}

	return 0;

}
