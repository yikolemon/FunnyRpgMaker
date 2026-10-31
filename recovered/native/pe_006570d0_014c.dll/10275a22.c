/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10275a22 */

void FUN_10275a22(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_10;
  int *local_c;
  char local_5;
  
  local_10 = 0;
  local_5 = FUN_1025c500(param_3);
  if (param_2 == 1) {
    local_c = &DAT_103255e0 + param_4;
    if (local_5 == '\0') {
      iVar2 = *(int *)(L"UTF-16LEUNICODE" + param_4 * 2 + 0xe);
    }
    else {
      iVar2 = *(int *)(&DAT_10325610 + param_4 * 4);
    }
    iVar1 = __crt_time_elapsed_leap_years<>(param_3);
    iVar3 = (iVar1 + iVar2 + 1 + param_3 * 0x16d + -0x63ca) % 7;
    iVar1 = (param_5 * 7 - iVar3) + iVar2 + 1 + param_6;
    iVar2 = iVar1 + -7;
    if (param_6 < iVar3) {
      iVar2 = iVar1;
    }
    piVar4 = (int *)(&DAT_10325614 + param_4 * 4);
    if (local_5 == '\0') {
      piVar4 = local_c;
    }
    if ((param_5 == 5) && (*piVar4 < iVar2)) {
      iVar2 = iVar2 + -7;
    }
  }
  else {
    if (local_5 == '\0') {
      iVar2 = *(int *)(L"UTF-16LEUNICODE" + param_4 * 2 + 0xe);
    }
    else {
      iVar2 = *(int *)(&DAT_10325610 + param_4 * 4);
    }
    iVar2 = iVar2 + param_7;
  }
  param_11 = param_11 + ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000;
  if (param_1 == 0) {
    DAT_1039b660 = param_3;
    DAT_1039b664 = iVar2;
    DAT_1039b668 = param_11;
  }
  else {
    DAT_1039b670 = iVar2;
    DAT_1039b674 = param_11;
    iVar2 = FUN_1027537c(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    DAT_1039b674 = DAT_1039b674 + local_10 * 1000;
    DAT_1039b66c = param_3;
    if (DAT_1039b674 < 0) {
      DAT_1039b674 = DAT_1039b674 + 86400000;
      DAT_1039b670 = DAT_1039b670 + -1;
    }
    else if (86399999 < DAT_1039b674) {
      DAT_1039b674 = DAT_1039b674 + -86400000;
      DAT_1039b670 = DAT_1039b670 + 1;
    }
  }
  return;
}

