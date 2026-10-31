/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400abdc4 */

undefined2 thunk_FUN_1400abdcc(undefined8 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  LPWSTR pWVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  __acrt_ptd *p_Var7;
  undefined *puVar8;
  undefined2 uVar9;
  undefined2 *puVar10;
  undefined1 uVar11;
  
  if (param_1 == (undefined8 *)0x0) {
    p_Var7 = FUN_140095e5c();
    *(undefined4 *)p_Var7 = 0x16;
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
      iVar2 = *(int *)(param_1 + 2);
      if (iVar2 == 1) {
        uVar11 = *(undefined1 *)*param_1;
      }
      else {
        uVar11 = 0;
      }
      pWVar3 = (LPWSTR)param_1[1];
      uVar6 = *(uint *)(param_1 + 4);
      *param_1 = pWVar3;
      uVar4 = FUN_1400a5bb4((longlong)param_1);
      iVar5 = FUN_1400ac3b0(uVar4,pWVar3,uVar6);
      *(int *)(param_1 + 2) = iVar5;
      if (2 < iVar5 + 1U) {
        if ((*(uint *)((longlong)param_1 + 0x14) & 6) == 0) {
          iVar5 = FUN_1400a5bb4((longlong)param_1);
          if ((iVar5 == -1) || (iVar5 = FUN_1400a5bb4((longlong)param_1), iVar5 == -2)) {
            puVar8 = &DAT_14013bf10;
          }
          else {
            iVar5 = FUN_1400a5bb4((longlong)param_1);
            uVar6 = FUN_1400a5bb4((longlong)param_1);
            puVar8 = (undefined *)
                     ((&DAT_1401433a0)[(longlong)iVar5 >> 6] + (ulonglong)(uVar6 & 0x3f) * 0x48);
          }
          if ((puVar8[0x38] & 0x82) == 0x82) {
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
        puVar10 = (undefined2 *)*param_1;
        if (iVar2 == 1) {
          uVar1 = *(undefined1 *)puVar10;
          *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
          uVar9 = CONCAT11(uVar1,uVar11);
          puVar10 = (undefined2 *)((longlong)puVar10 + 1);
        }
        else {
          uVar9 = *puVar10;
          *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -2;
          puVar10 = puVar10 + 1;
        }
        *param_1 = puVar10;
        return uVar9;
      }
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) =
           *(uint *)((longlong)param_1 + 0x14) | (-(uint)(iVar5 != 0) & 8) + 8;
      UNLOCK();
      *(undefined4 *)(param_1 + 2) = 0;
    }
    else {
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x10;
      UNLOCK();
    }
  }
  return 0xffff;
}

