/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003241e */

void FUN_14003241e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  undefined1 local_48 [40];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140030a1c(local_48,2,param_1 + 8);
  _Str = (char *)FUN_1400324a6(param_3);
  sVar1 = strlen(_Str);
  FUN_140019fc2(param_4,_Str,_Str + sVar1);
  FUN_140030a90(local_48);
  return;
}

