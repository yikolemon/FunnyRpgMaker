/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10076c34 */

void __thiscall FUN_10076c34(undefined1 *param_1,int *param_2)

{
  FUN_10077948();
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((int *)(param_1 + 0x1c) != param_2) {
    FUN_1007798c(*param_2,param_2[1] - *param_2);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
  *param_1 = 1;
  return;
}

