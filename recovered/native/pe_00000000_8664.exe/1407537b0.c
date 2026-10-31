/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407537b0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1407537b0(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong unaff_RBX;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  ulonglong uStack_30;
  undefined1 auStack_28 [8];
  
  puVar6 = auStack_28;
  piVar10 = (int *)(param_1 & 0xffffffff);
  iVar11 = (int)(unaff_RBX >> 0x20);
  if (iVar11 == 0) {
    uStack_30 = unaff_RBX & 0xffffffff;
    iVar11 = FUN_1408c85c0();
    puVar6 = (undefined1 *)(ulonglong)((int)&uStack_30 + 4);
  }
  else {
    iVar11 = iVar11 - (int)unaff_RBX;
  }
  iVar1 = piVar10[1];
  iVar9 = *piVar10 + (uint)(*piVar10 == 0);
  uVar2 = iVar11 + iVar9;
  if ((int)uVar2 < iVar1) {
LAB_1407537f0:
    if ((int)uVar2 <= iVar1) goto LAB_14075384c;
    if (iVar1 == 0) {
      uVar4 = 8;
    }
    else {
      uVar4 = iVar1 / 2 + iVar1;
    }
    uVar5 = (ulonglong)uVar4;
    if ((int)uVar4 <= (int)uVar2) {
      uVar5 = (ulonglong)uVar2;
    }
  }
  else {
    uVar4 = iVar1 * 2;
    if (iVar1 * 2 < (int)uVar2) {
      uVar4 = uVar2;
    }
    uVar5 = (ulonglong)uVar4;
    if ((int)uVar4 <= iVar1) goto LAB_1407537f0;
  }
  *(ulonglong *)(puVar6 + -8) = uVar5;
  *(undefined8 *)(puVar6 + -0x10) = 0x14075381a;
  uVar3 = FUN_1407520ca();
  uVar7 = (ulonglong)((int)(puVar6 + -8) + 4);
  uVar2 = piVar10[2];
  if (uVar2 != 0) {
    *(undefined8 *)(uVar7 - 8) = *(undefined8 *)piVar10;
    *(ulonglong *)(uVar7 - 0x10) = (ulonglong)uVar2;
    *(undefined8 *)(uVar7 - 0x18) = uVar3;
    *(int *)(uVar7 - 0xc) = (int)uVar3;
    *(undefined8 *)(uVar7 - 0x20) = 0x140753831;
    FUN_1408b31a0();
    uVar8 = (ulonglong)((int)(uVar7 - 0x18) + 0xc);
    *(undefined8 *)(uVar8 - 8) = *(undefined8 *)(piVar10 + 2);
                    /* WARNING: Subroutine does not return */
    *(undefined **)(uVar8 - 0x10) = &UNK_14075383c;
    FUN_14075219b();
  }
  piVar10[2] = (int)uVar3;
  piVar10[1] = (int)uVar5;
LAB_14075384c:
  *piVar10 = iVar11 + iVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

