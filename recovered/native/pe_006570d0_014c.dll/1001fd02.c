/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001fd02 */

void __thiscall FUN_1001fd02(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1] + param_2;
  if ((uint)param_1[1] < (uint)-param_2 && param_2 < 0) {
    *param_1 = *param_1 + (uVar1 >> 5) * 4 + -0x20000000;
  }
  else {
    *param_1 = *param_1 + (uVar1 >> 3 & 0xfffffffc);
  }
  param_1[1] = uVar1 & 0x1f;
  return;
}

