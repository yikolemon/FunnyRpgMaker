/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14049aee0 */

wchar_t * FUN_14049aee0(undefined8 *param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *_Locale;
  longlong lVar6;
  
  iVar4 = *(int *)*param_1;
  if (*(longlong *)param_1[1] == 0) {
    pwVar5 = _wsetlocale(iVar4,(wchar_t *)0x0);
  }
  else {
    iVar3 = FUN_1404b2b8c();
    if ((iVar3 == 0x16) || (iVar3 == 0x22)) {
LAB_14049b153:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    _Locale = (wchar_t *)_calloc_base(0,2);
    pwVar5 = (wchar_t *)0x0;
    if (_Locale == (wchar_t *)0x0) goto LAB_14049af67;
    iVar3 = FUN_1404b2b8c();
    if (iVar3 != 0) {
      if ((iVar3 == 0x16) || (pwVar5 = _Locale, iVar3 == 0x22)) goto LAB_14049b153;
      goto LAB_14049af67;
    }
    pwVar5 = _wsetlocale(iVar4,_Locale);
    FUN_1404a2310(_Locale);
  }
  if (pwVar5 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  lVar6 = FUN_1404a25a8();
  lVar1 = *(longlong *)(lVar6 + 0x90);
  iVar4 = FUN_1404b2f4c();
  if (iVar4 == 0) {
    pwVar5 = (wchar_t *)_malloc_base();
    if (pwVar5 == (wchar_t *)0x0) {
      return (wchar_t *)0x0;
    }
    iVar4 = FUN_1404b2f4c();
    if (iVar4 == 0) {
      piVar2 = *(int **)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1);
      if (piVar2 != (int *)0x0) {
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FUN_1404a2310(*(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1));
          *(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1) = 0;
        }
      }
      if (((DAT_140627c30 & *(uint *)(lVar6 + 0x3a8)) == 0) &&
         (piVar2 = *(int **)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1), piVar2 != (int *)0x0
         )) {
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FUN_1404a2310(*(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1));
          *(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1) = 0;
        }
      }
      *(undefined4 *)pwVar5 = *(undefined4 *)(lVar1 + 0x10);
      *(wchar_t **)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1) = pwVar5;
      *(wchar_t **)(((longlong)*(int *)*param_1 + 1) * 0x20 + lVar1) = pwVar5 + 2;
      return pwVar5 + 2;
    }
    if ((iVar4 != 0x16) && (iVar4 != 0x22)) {
LAB_14049af67:
      FUN_1404a2310(pwVar5);
      return (wchar_t *)0x0;
    }
  }
  else if ((iVar4 != 0x16) && (iVar4 != 0x22)) {
    return (wchar_t *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

