/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140069cf4 */

void FUN_140069cf4(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_1[1] + param_2;
  if ((ulonglong)param_1[1] < (ulonglong)-param_2 && param_2 < 0) {
    *param_1 = (uVar1 >> 5) * 4 + *param_1 + -0x2000000000000000;
  }
  else {
    *param_1 = *param_1 + (uVar1 >> 3 & 0xfffffffffffffffc);
  }
  param_1[1] = (ulonglong)((uint)uVar1 & 0x1f);
  return;
}

