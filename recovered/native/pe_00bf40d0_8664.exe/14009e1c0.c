/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009e1c0 */

void FUN_14009e1c0(longlong *param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  PVOID pvVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = FUN_14008d650();
  iVar2 = FUN_14009d8d0(param_1,param_2,param_3);
  pvVar4 = FUN_14009d690();
  *(int *)((longlong)pvVar4 + 0x30) = *(int *)((longlong)pvVar4 + 0x30) + 1;
  while ((iVar2 != -1 && (param_4 < iVar2))) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_140096cf8();
    }
    lVar5 = FUN_14008d650();
    lVar6 = (longlong)iVar2 * 8;
    iVar2 = *(int *)(*(int *)(param_3 + 8) + lVar6 + lVar5);
    iVar1 = *(int *)(param_3 + 8);
    lVar5 = FUN_14008d650();
    if (*(int *)(lVar5 + iVar1 + 4 + lVar6) != 0) {
      iVar1 = *(int *)(param_3 + 8);
      lVar5 = FUN_14008d650();
      iVar1 = *(int *)(lVar5 + iVar1 + 4 + lVar6);
      lVar5 = FUN_14008d650();
      if (lVar5 + iVar1 != 0) {
        FUN_14009d960(param_1,param_2,param_3,iVar2);
        iVar1 = *(int *)(param_3 + 8);
        lVar5 = FUN_14008d650();
        if (*(int *)(lVar5 + iVar1 + 4 + lVar6) != 0) {
          FUN_14008d650();
          FUN_14008d650();
        }
        _CallSettingFrame();
        FUN_14008d670(uVar3);
      }
    }
  }
  pvVar4 = FUN_14009d690();
  if (0 < *(int *)((longlong)pvVar4 + 0x30)) {
    pvVar4 = FUN_14009d690();
    *(int *)((longlong)pvVar4 + 0x30) = *(int *)((longlong)pvVar4 + 0x30) + -1;
  }
  if ((iVar2 != -1) && (param_4 < iVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_140096cf8();
  }
  FUN_14009d960(param_1,param_2,param_3,iVar2);
  return;
}

