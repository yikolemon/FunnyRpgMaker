/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009cc64 */

ulonglong FUN_14009cc64(WCHAR param_1,ulonglong *param_2)

{
  WCHAR *pWVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  
  uVar5 = 0xffff;
  if (param_1 != L'\xffff') {
    if (((*(uint *)((longlong)param_2 + 0x14) & 1) != 0) ||
       (((*(uint *)((longlong)param_2 + 0x14) >> 2 & 1) != 0 &&
        ((*(uint *)((longlong)param_2 + 0x14) >> 1 & 1) == 0)))) {
      if (param_2[1] == 0) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      if ((*(uint *)((longlong)param_2 + 0x14) >> 0xc & 1) == 0) {
        iVar2 = FUN_1400a5bb4((longlong)param_2);
        if ((iVar2 == -1) || (iVar2 = FUN_1400a5bb4((longlong)param_2), iVar2 == -2)) {
          puVar4 = &DAT_14013bf10;
        }
        else {
          iVar2 = FUN_1400a5bb4((longlong)param_2);
          uVar3 = FUN_1400a5bb4((longlong)param_2);
          puVar4 = (undefined *)
                   ((ulonglong)(uVar3 & 0x3f) * 0x48 + (&DAT_1401433a0)[(longlong)iVar2 >> 6]);
        }
        if ((char)puVar4[0x38] < '\0') {
          uVar5 = FUN_14009cda4(param_1,param_2);
          return uVar5;
        }
      }
      if (*param_2 < param_2[1] + 2) {
        if ((int)param_2[2] != 0) {
          return 0xffff;
        }
        if ((uint)param_2[4] < 2) {
          return 0xffff;
        }
        *param_2 = param_2[1] + 2;
      }
      uVar5 = *param_2;
      pWVar1 = (WCHAR *)(uVar5 - 2);
      *param_2 = (ulonglong)pWVar1;
      if ((*(uint *)((longlong)param_2 + 0x14) >> 0xc & 1) == 0) {
        *pWVar1 = param_1;
      }
      else if (*pWVar1 != param_1) {
        *param_2 = uVar5;
        return 0xffff;
      }
      *(int *)(param_2 + 2) = (int)param_2[2] + 2;
      LOCK();
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffff7;
      UNLOCK();
      LOCK();
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 1;
      UNLOCK();
      uVar5 = (ulonglong)(ushort)param_1;
    }
  }
  return uVar5;
}

