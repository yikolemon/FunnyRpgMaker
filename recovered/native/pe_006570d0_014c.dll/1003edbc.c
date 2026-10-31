/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003edbc */

void FUN_1003edbc(undefined4 param_1,int param_2)

{
  char *_Str;
  size_t sVar1;
  
  _Str = (&PTR_s_January_1028f360)[*(int *)(param_2 + 0x10)];
  sVar1 = _strlen(_Str);
  FUN_1001909c(_Str,_Str + sVar1);
  return;
}

