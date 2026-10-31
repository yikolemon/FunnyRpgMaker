/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10004c42 */

void __thiscall FUN_10004c42(undefined4 *param_1,uint param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1[4];
  if ((uint)param_1[4] <= param_2 && iVar1 != 0) {
    FUN_10004c70(iVar1,param_3);
    return;
  }
  param_1[4] = param_2;
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  *(undefined2 *)((int)param_1 + param_2 * 2) = 0;
  return;
}

