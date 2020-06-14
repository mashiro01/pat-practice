#include <iostream>

using namespace std;

void get_in(int *score,int *true_rank,int m);
int **init_stu(int n,int m);
void true_or_not(int **stu,int *true_rank,int *rank,int m,int n);

int main() {
    ios::sync_with_stdio(false);
    int n,m;
    cin >> n >> m;

    int *score = (int *)malloc(sizeof(int)*m);
    int *true_rank = (int *)malloc(sizeof(int)*m);

    get_in(score,true_rank,m);

    int **stu = init_stu(n,m);
    true_or_not(stu,true_rank,score,m,n);

    return 0;
}

void get_in(int *score,int *true_rank,int m) {
    for(int i = 0;i < m;i++) {
        cin >> score[i];
    }

    for(int i = 0;i < m;i++) {
        cin >> true_rank[i];
    }
}

int **init_stu(int n,int m) {
    int **stu = new int *[n];
    for(int i = 0;i < n;i++) {
        stu[i] = new int[m];
    }

    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            cin >> stu[i][j];
        }
    }

    return stu;
}

void true_or_not(int **stu,int *true_rank,int *rank,int m,int n) {
    int *fin_score = new int[n];
    for(int i = 0;i < n;i++) {
        fin_score[i] = 0;
    }

    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            if(stu[i][j] == true_rank[j]) {
                fin_score[i] += rank[j];
            } else {
                fin_score[i] += 0;
            }
        }
    }

    for(int i = 0;i < n;i++) {
        cout << fin_score[i] << std::endl;
    }
}
