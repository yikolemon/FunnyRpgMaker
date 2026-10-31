/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006c3e2 */

void __thiscall FUN_1006c3e2(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  param_1[4] = *param_2;
  param_1[5] = param_2[9];
  param_1[7] = 6;
  if ((*(byte *)((int)param_2 + 1) & 4) == 0) {
    uVar1 = param_2[8];
    param_1[3] = param_2[7];
    param_1[2] = uVar1;
    uVar1 = param_2[5];
    param_1[1] = param_2[6];
    *param_1 = uVar1;
    param_1[7] = 0x2e;
  }
  return;
}

