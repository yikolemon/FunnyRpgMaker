/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000ca70 */

void FUN_14000ca70(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"false";
  if (param_3 != '\0') {
    pwVar1 = L"true";
  }
  FUN_14000ca8d(param_1,param_2,pwVar1);
  return;
}

