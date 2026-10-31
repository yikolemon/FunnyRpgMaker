/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000396a */

void __thiscall FUN_1000396a(undefined4 *param_1,uint param_2,char param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1[4];
  if ((uint)param_1[4] <= param_2 && iVar1 != 0) {
    FUN_10003b26(iVar1,(int)param_3);
    return;
  }
  param_1[4] = param_2;
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  *(undefined1 *)((int)param_1 + param_2) = 0;
  return;
}

