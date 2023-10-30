#include <stdio.h>

int main() {
  int n = 0;
  int s[100], d[100];

  // 读取输入
  while(scanf("%d %d", &s[n], &d[n]) != EOF) {
    n++;
  }

  // 按出发时间排序 (使用冒泡排序)
  for(int i=0; i<n-1; i++) {
    for(int j=0; j<n-i-1; j++) {
      if(s[j] > s[j+1]) {
        // 交换s[j]和s[j+1] 同时交换d[j]和d[j+1]
        int temp = s[j];
        s[j] = s[j+1];
        s[j+1] = temp;
        temp = d[j];
        d[j] = d[j+1];
        d[j+1] = temp;
      }
    }
  }

  // 计算最少车辆数，只有时间不重叠的班次才能重复使用车辆
  int num = 1;
  int lastTime = d[0];

  for(int i=1; i<n; i++) {
    if(s[i] >= lastTime) {
      lastTime = d[i];
    } else {
      num++;
    }
  }

  // 输出最少车辆数
  printf("%d\n", num);

  // 输出时间表
  int timeTable[100][2];
  int driver = 0;

  int currentTime = -1;

  for(int i=0; i<n; i++) {
    if(s[i] >= currentTime) {
      timeTable[driver][0] = s[i];
      timeTable[driver][1] = d[i];
      driver++;
      currentTime = d[i];  // 更新当前时间为当前班次结束时间
    }
  }

  for(int i=0; i<driver; i++) {
    printf("Driver %d's schedule is %d %d\n", i+1, timeTable[i][0], timeTable[i][1]);
  }

  return 0;
}
