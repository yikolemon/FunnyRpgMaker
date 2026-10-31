/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140036c32 */

void FUN_140036c32(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  
  if (0 < *(int *)(param_2 + 0x40)) {
    _Str = (char *)FUN_14001a21c(*(undefined8 *)(param_2 + 0x38));
    sVar1 = strlen(_Str);
    FUN_140019fc2(param_4,_Str,_Str + sVar1);
    return;
  }
  return;
}

