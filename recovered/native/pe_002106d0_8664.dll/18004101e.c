/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004101e */

void FUN_18004101e(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  
  if (0 < *(int *)(param_2 + 0x40)) {
    _Str = *(char **)(param_2 + 0x38);
    sVar1 = strlen(_Str);
    FUN_180018bde(param_4,_Str,_Str + sVar1);
    return;
  }
  return;
}

