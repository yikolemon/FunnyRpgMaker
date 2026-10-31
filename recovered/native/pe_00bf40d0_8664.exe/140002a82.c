/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140002a82 */

void FUN_140002a82(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  
  uVar1 = param_2 - param_1[2];
  if ((ulonglong)param_1[2] <= param_2 && uVar1 != 0) {
    FUN_140002aa8(param_1,uVar1,param_3);
    return;
  }
  param_1[2] = param_2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  *(undefined2 *)((longlong)param_1 + param_2 * 2) = 0;
  return;
}

