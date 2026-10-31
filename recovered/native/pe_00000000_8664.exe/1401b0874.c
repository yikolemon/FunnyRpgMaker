/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b0874 */

void FUN_1401b0874(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
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
      iVar5 = *(int *)(&DAT_140eb80f4 + lVar2 * 4);
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
      iVar3 = *(int *)(&DAT_140eb80c0 + lVar2 * 4);
    }
    else {
      iVar3 = (&DAT_140eb80f8)[lVar2];
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
      iVar5 = *(int *)(&DAT_140eb80f4 + lVar2 * 4);
    }
    iVar5 = iVar5 + param_7;
  }
  param_11 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
  iVar3 = param_3;
  if (param_1 != 0) {
    DAT_140f29964 = iVar5;
    DAT_140f29968 = param_11;
    iVar5 = FUN_1401b00c4();
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar5 = DAT_140f29954;
    iVar3 = DAT_140f29950;
    param_11 = DAT_140f29958;
    DAT_140f29960 = param_3;
    if (DAT_140f29968 < 0) {
      DAT_140f29968 = DAT_140f29968 + 86400000;
      DAT_140f29964 = DAT_140f29964 + -1;
    }
    else if (86399999 < DAT_140f29968) {
      DAT_140f29968 = DAT_140f29968 + -86400000;
      DAT_140f29964 = DAT_140f29964 + 1;
    }
  }
  DAT_140f29958 = param_11;
  DAT_140f29954 = iVar5;
  DAT_140f29950 = iVar3;
  return;
}

