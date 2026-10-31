/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180292cd4 */

void FUN_180292cd4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,int param_9,int param_10,int param_11)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = (longlong)param_4;
  cVar1 = __crt_time_is_leap_year<>(param_3);
  if (param_2 == 1) {
    if (cVar1 == '\0') {
      iVar5 = *(int *)(L"UTF-16LEUNICODE" + lVar2 * 2 + 0xe);
    }
    else {
      iVar5 = *(int *)(&DAT_18035386c + lVar2 * 4);
    }
    iVar3 = param_3 + -1;
    iVar4 = (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) + iVar5 + 1 +
             ((param_3 + 299) / 400 - iVar3 / 100) + param_3 * 0x16d + -0x63db) % 7;
    iVar3 = (param_5 * 7 - iVar4) + iVar5 + 1 + param_6;
    iVar5 = iVar3 + -7;
    if (param_6 < iVar4) {
      iVar5 = iVar3;
    }
    if (cVar1 == '\0') {
      iVar3 = *(int *)(&DAT_180353838 + lVar2 * 4);
    }
    else {
      iVar3 = (&DAT_180353870)[lVar2];
    }
    if ((param_5 == 5) && (iVar3 < iVar5)) {
      iVar5 = iVar5 + -7;
    }
  }
  else {
    if (cVar1 == '\0') {
      iVar5 = *(int *)(L"UTF-16LEUNICODE" + lVar2 * 2 + 0xe);
    }
    else {
      iVar5 = *(int *)(&DAT_18035386c + lVar2 * 4);
    }
    iVar5 = iVar5 + param_7;
  }
  param_11 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
  iVar3 = param_3;
  if (param_1 != 0) {
    DAT_1804161c4 = iVar5;
    DAT_1804161c8 = param_11;
    iVar5 = FUN_180292524();
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar5 = DAT_1804161b4;
    iVar3 = DAT_1804161b0;
    param_11 = DAT_1804161b8;
    DAT_1804161c0 = param_3;
    if (DAT_1804161c8 < 0) {
      DAT_1804161c8 = DAT_1804161c8 + 86400000;
      DAT_1804161c4 = DAT_1804161c4 + -1;
    }
    else if (86399999 < DAT_1804161c8) {
      DAT_1804161c8 = DAT_1804161c8 + -86400000;
      DAT_1804161c4 = DAT_1804161c4 + 1;
    }
  }
  DAT_1804161b8 = param_11;
  DAT_1804161b4 = iVar5;
  DAT_1804161b0 = iVar3;
  return;
}

