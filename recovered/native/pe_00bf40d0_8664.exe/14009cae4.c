/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009cae4 */

uint FUN_14009cae4(uint param_1,longlong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;
  undefined *puVar5;
  undefined *puVar6;
  
  if ((*(uint *)((longlong)param_2 + 0x14) >> 0xc & 1) == 0) {
    uVar3 = FUN_1400a5bb4((longlong)param_2);
    puVar5 = &DAT_14013bf10;
    if (uVar3 + 2 < 2) {
      puVar6 = &DAT_14013bf10;
    }
    else {
      puVar6 = (undefined *)
               ((&DAT_1401433a0)[(longlong)(int)uVar3 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
    }
    if (puVar6[0x39] == '\0') {
      if (1 < uVar3 + 2) {
        puVar5 = (undefined *)
                 ((&DAT_1401433a0)[(longlong)(int)uVar3 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_14009cb90;
    }
    p_Var4 = FUN_140095e5c();
    *(undefined4 *)p_Var4 = 0x16;
    FUN_1400a0ea0();
  }
  else {
LAB_14009cb90:
    if ((param_1 != 0xffffffff) &&
       (((*(uint *)((longlong)param_2 + 0x14) & 1) != 0 ||
        (((byte)*(undefined4 *)((longlong)param_2 + 0x14) & 6) == 6)))) {
      if (param_2[1] == 0) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      if (*param_2 == param_2[1]) {
        if ((int)param_2[2] != 0) {
          return 0xffffffff;
        }
        *param_2 = *param_2 + 1;
      }
      lVar2 = *param_2;
      pcVar1 = (char *)(lVar2 + -1);
      *param_2 = (longlong)pcVar1;
      if ((*(uint *)((longlong)param_2 + 0x14) >> 0xc & 1) == 0) {
        *pcVar1 = (char)param_1;
      }
      else if (*pcVar1 != (char)param_1) {
        *param_2 = lVar2;
        return 0xffffffff;
      }
      *(int *)(param_2 + 2) = (int)param_2[2] + 1;
      LOCK();
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffff7;
      UNLOCK();
      LOCK();
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 1;
      UNLOCK();
      return param_1 & 0xff;
    }
  }
  return 0xffffffff;
}

