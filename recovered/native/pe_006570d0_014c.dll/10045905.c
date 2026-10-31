/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10045905 */

undefined4 FUN_10045905(undefined4 param_1,undefined4 param_2,char param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"false";
  if (param_3 != '\0') {
    pwVar1 = L"true";
  }
  FUN_1004592e(param_1,param_2,pwVar1);
  return param_1;
}

