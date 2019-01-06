#include <string>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <queue>
using namespace std;
int originMap[20][20] = {0};       // save origin map
struct NODE {
    int x, y, steps, hp;
};
struct NODE now, fr;
int moves[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int visit[20][20] = {0};
queue<NODE> bfsQueue;

int main() {
    int n, m;
    int startX, startY;
    bool missionUndo = true;

    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%d", &originMap[i][j]);
            if (originMap[i][j] == 2) {
                startX = i;
                startY = j;
            }
        }
    }
    bfsQueue.push((NODE){startX, startY, 0, 6});
    visit[startX][startY] = 6;

    while (!bfsQueue.empty() && missionUndo) {
        now = bfsQueue.front();
        bfsQueue.pop();
        if (now.hp == 1) {
            continue;
        }
        for (int i = 0; i < 4 && missionUndo; i++) {
            if (originMap[now.x + moves[i][0]][now.y + moves[i][1]]) {
                if (visit[now.x + moves[i][0]][now.y + moves[i][1]] < now.hp - 1) {
                    fr.x = now.x + moves[i][0];
                    fr.y = now.y + moves[i][1];
                    fr.steps = now.steps + 1;
                    fr.hp = originMap[fr.x][fr.y] == 4 ? 6 : now.hp - 1;
                    visit[fr.x][fr.y] = now.hp - 1;
                    if (originMap[fr.x][fr.y] == 3) {
                        missionUndo = false;
                    }
                    bfsQueue.push(fr);
                }
            }
        }
    }

    if (missionUndo) {
        printf("-1");
    } else {
        printf("%d", fr.steps);
    }

    return 0;
}