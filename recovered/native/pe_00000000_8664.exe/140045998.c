/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140045998 */

void FUN_140045998(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *param_1 = param_2;
  param_1[1] = uVar1;
  return;
}

