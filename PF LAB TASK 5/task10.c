#include <stdio.h>
int main() {
    char traffic_light;
    int time;
    printf("Traffic light colour and time:\n");
    scanf("%c %d", &traffic_light, &time);
    if (traffic_light == 'R' && time < 22) {
        printf("STOP AND WAIT\n");

    } else if(traffic_light == 'R' && time >= 22) {
    printf("Stop, but night caution allowed\n");
} else if (traffic_light == 'Y'){
    printf("GET READY\n");
} else if (traffic_light == 'G') {
    printf("GO\n");
}else {
    printf("Invalid signal!\n");
}return 0;
}
