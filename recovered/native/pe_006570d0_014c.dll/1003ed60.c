/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003ed60 */

void FUN_1003ed60(undefined4 param_1,int param_2)

{
  char *_Str;
  size_t sVar1;
  
  _Str = (&PTR_s_Sunday_1028f314)[*(int *)(param_2 + 0x18)];
  sVar1 = _strlen(_Str);
  FUN_1001909c(_Str,_Str + sVar1);
  return;
}

