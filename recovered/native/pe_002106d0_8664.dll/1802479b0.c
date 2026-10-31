/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802479b0 */

void FUN_1802479b0(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined *local_40;
  undefined **ppuStack_38;
  
  if (param_3 == (undefined8 *)0x0) {
    LOCK();
    DAT_180404588 = DAT_180404588 + 1;
    UNLOCK();
    local_40 = &DAT_180404590;
    ppuStack_38 = &PTR_vftable_180404580;
    FUN_1802477a0(param_1,&local_40,0,param_4,1);
    ppuVar5 = ppuStack_38;
    if (ppuStack_38 != (undefined **)0x0) {
      LOCK();
      ppuVar1 = ppuStack_38 + 1;
      iVar3 = *(int *)ppuVar1;
      *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)PTR__guard_dispatch_icall_18038bc80)(ppuStack_38);
        LOCK();
        piVar2 = (int *)((longlong)ppuVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(ppuVar5);
          return;
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_3 + 1) = 1;
    *(undefined4 *)((longlong)param_3 + 0xc) = 1;
    *param_3 = _anon_6E02EFE5::_ExceptionPtr_normal::vftable;
    param_3[0x15] = 0;
    *(undefined4 *)(param_3 + 2) = *param_2;
    *(uint *)((longlong)param_3 + 0x14) = param_2[1] | 1;
    param_3[3] = 0;
    param_3[4] = 0;
    uVar4 = param_2[6];
    *(uint *)(param_3 + 5) = uVar4;
    if (0xf < uVar4) {
      uVar4 = 0xf;
    }
    FUN_1802a82f0(param_3 + 6,param_2 + 8,(ulonglong)uVar4 * 8,param_4,0);
    FUN_1802a89a0(param_3 + (ulonglong)uVar4 + 6,0,(ulonglong)(0xf - uVar4) << 3);
    *param_1 = (longlong)(param_3 + 2);
    param_1[1] = (longlong)param_3;
  }
  return;
}

