#include <nuttx/config.h>
#include <stdio.h>
#include <arch/board/board.h>
#include <arch/chip/pin.h>

#define LED0      97
#define LED1      98
#define LED2      99
#define LED3      100

#define USED_PIN  4

int gpio_init() {
  int success = 0;
  int ok[USED_PIN];

  // Pin, mode, Input, drive, pull
  ok[0] = board_gpio_config(LED0, 0, false, false, 0);
  ok[1] = board_gpio_config(LED1, 0, false, false, 0);
  ok[2] = board_gpio_config(LED2, 0, false, false, 0);
  ok[3] = board_gpio_config(LED3, 0, false, false, 0);

  for (int i = 0; i < USED_PIN; i++) {
    success += ok[i];
  }

  return (success == 0) ? 1 : 0;
}

int main(int argc, FAR char *argv[]) {
  printf("Hello, My app!!\n");

  int s = gpio_init();

  while (s) {
    board_gpio_write(LED0, 1);
    board_gpio_write(LED1, 1);
    board_gpio_write(LED2, 1);
    board_gpio_write(LED3, 1);
  }
  return 0;
}

