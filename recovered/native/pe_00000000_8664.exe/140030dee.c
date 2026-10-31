/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140030dee */

void FUN_140030dee(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  undefined1 local_58 [40];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  _Str = (&PTR_s_Sunday_1401c81c0)[*(int *)(param_3 + 0x18)];
  sVar1 = strlen(_Str);
  FUN_140030a1c(local_58,sVar1,param_1 + 8,param_4);
  FUN_140019fc2(param_4,_Str,_Str + sVar1);
  FUN_140030a90(local_58);
  return;
}

