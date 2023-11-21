#include <stdio.h>
#define RELAY_SET_ON(relay_id, relay_state)  relay_state |= (1 << relay_id)
#define RELAY_SET_OFF(relay_id, relay_state)  relay_state &= ~(1 << relay_id)

int main(void)
{
	int relay_id, relay_state;

	printf("Please enter the id of the relay: ");
	scanf("%d", &relay_id);
	printf("Please enter the state (0 for OFF, 1 for ON): ");
	scanf("%d", &relay_state);

	RELAY_SET_ON(relay_id, relay_state);

	printf("The relay %d is ON. Updated state: %d\n", relay_id, (relay_state) ? 1 : 0);

	RELAY_SET_OFF(relay_id, relay_state);

	printf("The relay %d is OFF. Updated state: %d\n", relay_id, (relay_state & (1 << relay_id)));

	getchar();
	getchar();

	return 0;
}

/* Lab 3.5
Các tiền xử lí #define, #ifdef, #ifndef, #if, #else, #elif, #endif,... không được lưu
trong bản thân chương trình hoặc tệp nguồn. Thay vào đó, chúng được xử lý bởi trình
biên dịch C trước khi chương trình được biên dịch thành mã máy. Vậy nên, các tiền xử
lý directives không được lưu trữ trong mã máy cuối cùng hoặc trong tệp thực thi.
Chúng chỉ tồn tại trong quá trình tiền xử lý và giúp xác định cách mà trình biên dịch
xử lý mã nguồn trước khi nó được biên dịch thành mã máy.
 */
