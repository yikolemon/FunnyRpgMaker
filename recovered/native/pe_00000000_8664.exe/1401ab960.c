/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ab960 */

void FUN_1401ab960(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  uVar3 = FUN_14018fef0();
  iVar2 = FUN_1401ab070(param_1,param_2,param_3);
  lVar4 = FUN_1401aae30();
  *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
  while ((iVar2 != -1 && (param_4 < iVar2))) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_1401a0758();
    }
    lVar4 = FUN_14018fef0();
    lVar5 = (longlong)iVar2 * 8;
    iVar2 = *(int *)(*(int *)(param_3 + 8) + lVar5 + lVar4);
    iVar1 = *(int *)(param_3 + 8);
    iVar6 = iVar2;
    lVar4 = FUN_14018fef0();
    if (*(int *)(lVar4 + iVar1 + 4 + lVar5) != 0) {
      iVar1 = *(int *)(param_3 + 8);
      lVar4 = FUN_14018fef0();
      iVar1 = *(int *)(lVar4 + iVar1 + 4 + lVar5);
      lVar4 = FUN_14018fef0();
      if (lVar4 + iVar1 != 0) {
        FUN_1401ab100(param_1,param_2,param_3,iVar2,iVar6);
        iVar1 = *(int *)(param_3 + 8);
        lVar4 = FUN_14018fef0();
        if (*(int *)(lVar4 + iVar1 + 4 + lVar5) == 0) {
          lVar4 = 0;
        }
        else {
          iVar1 = *(int *)(param_3 + 8);
          lVar4 = FUN_14018fef0();
          iVar1 = *(int *)(lVar4 + iVar1 + 4 + lVar5);
          lVar4 = FUN_14018fef0();
          lVar4 = lVar4 + iVar1;
        }
        _CallSettingFrame(lVar4,param_1,0x103);
        FUN_14018ff10(uVar3);
      }
    }
  }
  lVar4 = FUN_1401aae30();
  if (0 < *(int *)(lVar4 + 0x30)) {
    lVar4 = FUN_1401aae30();
    *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
  }
  if ((iVar2 != -1) && (param_4 < iVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_1401a0758();
  }
  FUN_1401ab100(param_1,param_2,param_3,iVar2);
  return;
}

