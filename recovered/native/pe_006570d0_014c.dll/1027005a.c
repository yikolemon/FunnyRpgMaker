/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027005a */

wchar_t * FUN_1027005a(int param_1,int param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *_Locale;
  undefined4 local_8;
  
  if (param_2 == 0) {
    pwVar1 = __wsetlocale(param_1,(wchar_t *)0x0);
  }
  else {
    pwVar1 = (wchar_t *)0x0;
    iVar2 = FUN_102827c9(&local_8,0,0,param_2,0x7fffffff);
    if ((iVar2 != 0) && ((iVar2 == 0x16 || (iVar2 == 0x22)))) {
LAB_102700ea:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    _Locale = (wchar_t *)FUN_10275d90(local_8,2);
    if (_Locale != (wchar_t *)0x0) {
      iVar2 = FUN_102827c9(0,_Locale,local_8,param_2,0xffffffff);
      if (iVar2 == 0) {
        pwVar1 = __wsetlocale(param_1,_Locale);
      }
      else if ((iVar2 == 0x16) || (iVar2 == 0x22)) goto LAB_102700ea;
    }
    FUN_10274120(_Locale);
  }
  return pwVar1;
}

