/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180045bee */

void FUN_180045bee(undefined8 param_1,undefined8 param_2,char param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"false";
  if (param_3 != '\0') {
    pwVar1 = L"true";
  }
  FUN_180045c0b(param_1,param_2,pwVar1);
  return;
}

