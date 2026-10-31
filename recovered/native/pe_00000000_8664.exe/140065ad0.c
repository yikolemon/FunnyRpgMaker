/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140065ad0 */

void FUN_140065ad0(undefined8 param_1,undefined8 param_2,char param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"false";
  if (param_3 != '\0') {
    pwVar1 = L"true";
  }
  FUN_140065aed(param_1,param_2,pwVar1);
  return;
}

