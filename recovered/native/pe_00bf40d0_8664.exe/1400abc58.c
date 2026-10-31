/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400abc58 */

ulonglong FUN_1400abc58(undefined8 *param_1)

{
  byte bVar1;
  LPWSTR pWVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  __acrt_ptd *p_Var6;
  undefined *puVar7;
  
  if (param_1 == (undefined8 *)0x0) {
    p_Var6 = FUN_140095e5c();
    *(undefined4 *)p_Var6 = 0x16;
    FUN_1400a0ea0();
  }
  else if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) &&
          ((*(uint *)((longlong)param_1 + 0x14) >> 0xc & 1) == 0)) {
    if ((*(uint *)((longlong)param_1 + 0x14) >> 1 & 1) == 0) {
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 1;
      UNLOCK();
      if ((*(uint *)((longlong)param_1 + 0x14) & 0x4c0) == 0) {
        __acrt_stdio_allocate_buffer_nolock(param_1);
      }
      pWVar2 = (LPWSTR)param_1[1];
      uVar5 = *(uint *)(param_1 + 4);
      *param_1 = pWVar2;
      uVar3 = FUN_1400a5bb4((longlong)param_1);
      iVar4 = FUN_1400ac3b0(uVar3,pWVar2,uVar5);
      *(int *)(param_1 + 2) = iVar4;
      if (1 < iVar4 + 1U) {
        if ((*(uint *)((longlong)param_1 + 0x14) & 6) == 0) {
          iVar4 = FUN_1400a5bb4((longlong)param_1);
          if ((iVar4 == -1) || (iVar4 = FUN_1400a5bb4((longlong)param_1), iVar4 == -2)) {
            puVar7 = &DAT_14013bf10;
          }
          else {
            iVar4 = FUN_1400a5bb4((longlong)param_1);
            uVar5 = FUN_1400a5bb4((longlong)param_1);
            puVar7 = (undefined *)
                     ((&DAT_1401433a0)[(longlong)iVar4 >> 6] + (ulonglong)(uVar5 & 0x3f) * 0x48);
          }
          if ((puVar7[0x38] & 0x82) == 0x82) {
            LOCK();
            *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x20;
            UNLOCK();
          }
        }
        if (((*(int *)(param_1 + 4) == 0x200) &&
            ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) &&
           ((*(uint *)((longlong)param_1 + 0x14) >> 8 & 1) == 0)) {
          *(undefined4 *)(param_1 + 4) = 0x1000;
        }
        *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
        bVar1 = *(byte *)*param_1;
        *param_1 = (byte *)*param_1 + 1;
        return (ulonglong)bVar1;
      }
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) =
           *(uint *)((longlong)param_1 + 0x14) | (-(uint)(iVar4 != 0) & 8) + 8;
      UNLOCK();
      *(undefined4 *)(param_1 + 2) = 0;
    }
    else {
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x10;
      UNLOCK();
    }
  }
  return 0xffffffff;
}

