/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011e210 */

void FUN_14011e210(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  uVar3 = FUN_1401070c0();
  iVar2 = FUN_14011d920(param_1,param_2,param_3);
  lVar4 = FUN_14011d6e0();
  *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
  while ((iVar2 != -1 && (param_4 < iVar2))) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_140115938();
    }
    lVar4 = FUN_1401070c0();
    lVar5 = (longlong)iVar2 * 8;
    iVar2 = *(int *)(*(int *)(param_3 + 8) + lVar5 + lVar4);
    iVar1 = *(int *)(param_3 + 8);
    iVar6 = iVar2;
    lVar4 = FUN_1401070c0();
    if (*(int *)(lVar4 + iVar1 + 4 + lVar5) != 0) {
      iVar1 = *(int *)(param_3 + 8);
      lVar4 = FUN_1401070c0();
      iVar1 = *(int *)(lVar4 + iVar1 + 4 + lVar5);
      lVar4 = FUN_1401070c0();
      if (lVar4 + iVar1 != 0) {
        FUN_14011d9b0(param_1,param_2,param_3,iVar2,iVar6);
        iVar1 = *(int *)(param_3 + 8);
        lVar4 = FUN_1401070c0();
        if (*(int *)(lVar4 + iVar1 + 4 + lVar5) == 0) {
          lVar4 = 0;
        }
        else {
          iVar1 = *(int *)(param_3 + 8);
          lVar4 = FUN_1401070c0();
          iVar1 = *(int *)(lVar4 + iVar1 + 4 + lVar5);
          lVar4 = FUN_1401070c0();
          lVar4 = lVar4 + iVar1;
        }
        _CallSettingFrame(lVar4,param_1,0x103);
        FUN_1401070e0(uVar3);
      }
    }
  }
  lVar4 = FUN_14011d6e0();
  if (0 < *(int *)(lVar4 + 0x30)) {
    lVar4 = FUN_14011d6e0();
    *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
  }
  if ((iVar2 != -1) && (param_4 < iVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_140115938();
  }
  FUN_14011d9b0(param_1,param_2,param_3,iVar2);
  return;
}

