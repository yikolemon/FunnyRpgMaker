/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022d2e0 */

void __thiscall FUN_1022d2e0(undefined4 *param_1,undefined4 *param_2)

{
  if ((uint)param_2[5] < 0x10) {
    FUN_1025b2d0(param_1,param_2,param_2[4] + 1);
  }
  else {
    *param_1 = *param_2;
  }
  param_1[5] = param_2[5];
  param_1[4] = param_2[4];
  param_2[4] = 0;
  param_2[5] = 0xf;
  *(undefined1 *)param_2 = 0;
  return;
}

