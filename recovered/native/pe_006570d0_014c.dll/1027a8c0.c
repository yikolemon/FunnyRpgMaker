/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027a8c0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1027a8c0(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                 int param_7)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int local_40 [4];
  int local_30;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar6 = param_1 - 0x76c;
  if (((((int)uVar6 < 0x46) || (0x44d < uVar6)) || (0xb < param_2 - 1U)) ||
     (((cVar3 = FUN_1027a87a(uVar6,param_2 - 1U,param_3), cVar3 == '\0' || (0x17 < param_4)) ||
      ((0x3b < param_5 || (0x3b < param_6)))))) {
    puVar5 = (undefined4 *)FUN_10268ffd();
    *puVar5 = 0x16;
  }
  else {
    param_3 = *(int *)(L"UTF-16LEUNICODE" + param_2 * 2 + 0xe) + param_3;
    cVar3 = FUN_1025c500(uVar6);
    if ((cVar3 != '\0') && (2 < param_2)) {
      param_3 = param_3 + 1;
    }
    ___tzset();
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    iVar4 = FUN_10275350(local_40);
    if (((iVar4 != 0) || (iVar4 = FUN_1027537c(local_40 + 1), iVar4 != 0)) ||
       (iVar4 = FUN_102753a8(local_40 + 2), iVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar4 = __crt_time_elapsed_leap_years<>(uVar6);
    lVar2 = (longlong)iVar4 * 0x15180 + (longlong)param_3 * 0x15180 +
            (longlong)(int)uVar6 * 0x1e13380 + (longlong)(int)param_4 * 0xe10 +
            (longlong)(int)param_5 * 0x3c + (longlong)local_40[2] + (longlong)(int)param_6;
    uVar1 = (uint)lVar2;
    local_40[3] = uVar1 + 0x7c6beb00;
    local_30 = (int)((ulonglong)lVar2 >> 0x20) - (uint)(uVar1 < 0x83941500);
    if (param_7 != 1) {
      local_2c.tm_mon = param_2 + -1;
      local_2c.tm_hour = param_4;
      local_2c.tm_min = param_5;
      local_2c.tm_sec = param_6;
      local_2c.tm_year = uVar6;
      local_2c.tm_yday = param_3;
      if ((param_7 == -1) && (local_40[0] != 0)) {
        __isindst(&local_2c);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

