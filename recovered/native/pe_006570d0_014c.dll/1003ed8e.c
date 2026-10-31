/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003ed8e */

void FUN_1003ed8e(undefined4 param_1,int param_2)

{
  char *_Str;
  size_t sVar1;
  
  _Str = (&PTR_DAT_1028f330)[*(int *)(param_2 + 0x10)];
  sVar1 = _strlen(_Str);
  FUN_1001909c(_Str,_Str + sVar1);
  return;
}

