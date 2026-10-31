/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180139992 */

void FUN_180139992(undefined8 param_1,undefined8 param_2,char *param_3,undefined4 param_4)

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
  FUN_180139005(param_1,param_2,FUN_1801399fe,param_3,iVar2,param_4);
  return;
}

