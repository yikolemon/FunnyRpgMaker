/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10133e42 */

void FUN_10133e42(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

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
      sVar1 = _strlen(_Str);
      _Str = _Str + sVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (*_Str != '\0');
  }
  FUN_10133528(param_1,param_2,&LAB_10133e8a,param_3,iVar2,param_4);
  return;
}

