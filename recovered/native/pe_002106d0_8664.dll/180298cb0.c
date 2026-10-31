/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180298cb0 */

/* WARNING: Removing unreachable block (ram,0x000180298e93) */
/* WARNING: Removing unreachable block (ram,0x000180298e9e) */

void FUN_180298cb0(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 auStackY_b8 [32];
  
  uVar3 = DAT_180402640 ^ (ulonglong)auStackY_b8;
  uVar5 = param_1 - 0x76c;
  if (((((int)uVar5 < 0x46) || (0x44d < uVar5)) || (0xb < param_2 - 1U)) ||
     ((param_3 < 1 ||
      (((*(int *)(&DAT_180353838 + (longlong)param_2 * 4) -
         *(int *)(L"UTF-16LEUNICODE" + (longlong)param_2 * 2 + 0xe) < param_3 &&
        (((cVar1 = __crt_time_is_leap_year<>(uVar5), cVar1 == '\0' || (param_2 != 2)) ||
         (0x1d < param_3)))) || (((0x17 < param_4 || (0x3b < param_5)) || (0x3b < param_6)))))))) {
    puVar4 = (undefined4 *)FUN_18027e66c();
    *puVar4 = 0x16;
  }
  else {
    __crt_time_is_leap_year<>(uVar5);
    __tzset();
    iVar2 = FUN_1802924f4();
    if (((iVar2 != 0) || (iVar2 = FUN_180292524(), iVar2 != 0)) ||
       (iVar2 = FUN_180292554(), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(uVar3 ^ (ulonglong)auStackY_b8);
}

