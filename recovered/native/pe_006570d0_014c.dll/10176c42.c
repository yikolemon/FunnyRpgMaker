/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10176c42 */

void __fastcall FUN_10176c42(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x46d8);
    do {
      if (puVar1[-3] != 0) {
        thunk_FUN_10274120(puVar1[-3]);
        puVar1[-3] = 0;
        puVar1[-4] = 0;
      }
      if (puVar1[-2] != 0) {
        thunk_FUN_10274120(puVar1[-2]);
        puVar1[-2] = 0;
        *puVar1 = 0;
      }
      if (puVar1[-1] != 0) {
        thunk_FUN_10274120(puVar1[-1]);
        puVar1[-1] = 0;
      }
      puVar1 = puVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

