/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10173219 */

void __fastcall FUN_10173219(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 == 1) {
    if (-1 < param_3 + -1) {
      do {
        *(undefined1 *)(param_1 + -1 + param_3 * 2) = 0xff;
        *(undefined1 *)(param_1 + -2 + param_3 * 2) = *(undefined1 *)(param_2 + -1 + param_3);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else if (-1 < param_3 + -1) {
    puVar1 = (undefined1 *)(param_2 + param_3 * 3 + -1);
    do {
      *(undefined1 *)(param_1 + -1 + param_3 * 4) = 0xff;
      *(undefined1 *)(param_1 + -2 + param_3 * 4) = *puVar1;
      *(undefined1 *)(param_1 + -3 + param_3 * 4) = puVar1[-1];
      *(undefined1 *)(param_1 + -4 + param_3 * 4) = puVar1[-2];
      puVar1 = puVar1 + -3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

