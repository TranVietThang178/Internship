#include <stdio.h>
#define LED_SET_ON(led_id, led_state)  led_state |= (1 << led_id)
#define LED_SET_OFF(led_id, led_state)  led_state &= ~(1 << led_id)

int main(void) {
    int led_id, led_state;

    printf("Please enter the id of the LED: ");
    scanf("%d", &led_id);

    printf("Please enter the state (0 for OFF, 1 for ON): ");
    scanf("%d", &led_state);

    LED_SET_ON(led_id, led_state);
    printf("LED %d is ON. Updated state: %d\n", led_id, (led_state & (1 << led_id)) ? 1 : 0);

    LED_SET_OFF(led_id, led_state);
    printf("LED %d is OFF. Updated state: %d\n", led_id, (led_state & (1 << led_id)) ? 1 : 0);

    getchar();
    getchar();

    return 0;
}
