/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012b524 */

void __fastcall FUN_1012b524(int param_1,int *param_2)

{
  while( true ) {
    if (0 < *(int *)(param_1 + 0x24)) {
      if (param_2[1] == 0) {
        param_2[1] = param_1;
      }
      param_2[2] = param_2[2] + 1;
    }
    if ((*(byte *)(param_1 + 0x11) & 8) != 0) {
      *param_2 = param_1;
    }
    if ((1 < param_2[2]) && (*param_2 != 0)) break;
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_1012b524();
    }
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      return;
    }
  }
  return;
}

