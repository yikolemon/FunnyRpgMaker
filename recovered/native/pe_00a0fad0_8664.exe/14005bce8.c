/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005bce8 */

void FUN_14005bce8(undefined8 param_1,undefined8 param_2,char param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"false";
  if (param_3 != '\0') {
    pwVar1 = L"true";
  }
  FUN_14005bd05(param_1,param_2,pwVar1);
  return;
}

