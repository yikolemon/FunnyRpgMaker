/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ac1b0 */

longlong FUN_1401ac1b0(longlong param_1)

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
  longlong alStack_60 [2];
  undefined1 auStack_50 [24];
  
  lVar8 = FUN_1401aae30();
  uVar2 = *(undefined8 *)(lVar8 + 0x28);
  lVar8 = FUN_1401aae30();
  uVar3 = *(undefined8 *)(lVar8 + 0x20);
  piVar4 = *(int **)(param_1 + 0x50);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  alStack_60[0] = *(longlong *)(param_1 + 0x48);
  alStack_60[1] = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  __except_validate_context_record(uVar9);
  lVar8 = FUN_1401aae30();
  *(int **)(lVar8 + 0x20) = piVar4;
  lVar8 = FUN_1401aae30();
  *(undefined8 *)(lVar8 + 0x28) = uVar9;
  lVar8 = FUN_1401aae30();
  uVar9 = _CreateFrameInfo(auStack_50,*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0x28));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1401aae30();
  }
  lVar8 = FUN_1401bf420(uVar5,uVar6,0x100);
  if ((lVar8 < 2) && (lVar8 = alStack_60[lVar8], lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1401a0758();
  }
  FUN_1401bf450(lVar8,uVar6);
  FUN_14018ffb0(uVar9);
  if ((((*piVar4 == -0x1f928c9d) && (piVar4[6] == 4)) && (piVar4[8] + 0xe66cfae0U < 3)) &&
     (iVar7 = FUN_1401903f0(*(undefined8 *)(piVar4 + 10)), iVar7 != 0)) {
    __DestructExceptionObject(piVar4,1);
  }
  lVar10 = FUN_1401aae30();
  *(undefined8 *)(lVar10 + 0x20) = uVar3;
  lVar10 = FUN_1401aae30();
  *(undefined8 *)(lVar10 + 0x28) = uVar2;
  lVar10 = FUN_1401aae30();
  *(undefined4 *)(lVar10 + 0x78) = uVar1;
  lVar10 = FUN_1401aae30();
  *(undefined4 *)(lVar10 + 0x78) = 0xfffffffe;
  return lVar8;
}

