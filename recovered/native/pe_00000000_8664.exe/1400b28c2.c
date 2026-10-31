/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b28c2 */

void FUN_1400b28c2(undefined8 param_1,undefined8 param_2,char *param_3,undefined4 param_4)

{
  size_t sVar1;
  char *_Str;
  int iVar2;
  
  if (*param_3 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    _Str = param_3;
    do {
      sVar1 = strlen(_Str);
      _Str = _Str + sVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (*_Str != '\0');
  }
  FUN_1400b1f35(param_1,param_2,FUN_1400b292e,param_3,iVar2,param_4);
  return;
}

