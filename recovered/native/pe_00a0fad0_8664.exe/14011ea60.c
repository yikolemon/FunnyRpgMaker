/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011ea60 */

longlong FUN_14011ea60(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong local_60 [2];
  undefined1 local_50 [24];
  
  lVar8 = FUN_14011d6e0();
  uVar2 = *(undefined8 *)(lVar8 + 0x28);
  lVar8 = FUN_14011d6e0();
  uVar3 = *(undefined8 *)(lVar8 + 0x20);
  piVar4 = *(int **)(param_1 + 0x50);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  local_60[0] = *(longlong *)(param_1 + 0x48);
  local_60[1] = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  __except_validate_context_record(uVar9);
  lVar8 = FUN_14011d6e0();
  *(int **)(lVar8 + 0x20) = piVar4;
  lVar8 = FUN_14011d6e0();
  *(undefined8 *)(lVar8 + 0x28) = uVar9;
  lVar8 = FUN_14011d6e0();
  uVar9 = _CreateFrameInfo(local_50,*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0x28));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_14011d6e0();
  }
  lVar8 = FUN_14012f870(uVar5,uVar6,0x100);
  if ((lVar8 < 2) && (lVar8 = local_60[lVar8], lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_140115938();
  }
  FUN_14012f8a0(lVar8,uVar6);
  FUN_140107180(uVar9);
  if ((((*piVar4 == -0x1f928c9d) && (piVar4[6] == 4)) && (piVar4[8] + 0xe66cfae0U < 3)) &&
     (iVar7 = FUN_140107c30(*(undefined8 *)(piVar4 + 10)), iVar7 != 0)) {
    __DestructExceptionObject(piVar4,1);
  }
  lVar10 = FUN_14011d6e0();
  *(undefined8 *)(lVar10 + 0x20) = uVar3;
  lVar10 = FUN_14011d6e0();
  *(undefined8 *)(lVar10 + 0x28) = uVar2;
  lVar10 = FUN_14011d6e0();
  *(undefined4 *)(lVar10 + 0x78) = uVar1;
  lVar10 = FUN_14011d6e0();
  *(undefined4 *)(lVar10 + 0x78) = 0xfffffffe;
  return lVar8;
}

