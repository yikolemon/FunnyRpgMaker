/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075b67a */

void FUN_14075b67a(void)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  int iVar6;
  ulonglong unaff_RBX;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 unaff_EBP;
  int iVar9;
  ulonglong uVar10;
  ulonglong uStack_28;
  ulonglong uVar5;
  
  uVar2 = unaff_RBX >> 0x20;
  iVar4 = *(int *)(uVar2 + 0x26a8);
  if (iVar4 == *(int *)(uVar2 + 0x26ac)) {
    if (iVar4 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar4 / 2 + iVar4;
    }
    iVar9 = iVar4 + 1;
    if (iVar4 + 1 < iVar6) {
      iVar9 = iVar6;
    }
    uStack_28 = (ulonglong)(uint)(iVar9 * 0x24);
    uVar3 = FUN_1407520ca();
    uVar7 = (ulonglong)((int)&uStack_28 + 4);
    uVar10 = (ulonglong)uVar3;
    uVar1 = *(uint *)(uVar2 + 0x26b0);
    if (uVar1 != 0) {
      *(ulonglong *)(uVar7 - 8) = (ulonglong)(uint)(*(int *)(uVar2 + 0x26a8) * 0x24);
      *(ulonglong *)(uVar7 - 0x10) = (ulonglong)uVar1;
      *(ulonglong *)(uVar7 - 0x18) = uVar10;
      *(undefined8 *)(uVar7 - 0x20) = 0x14075b6ed;
      FUN_1408b31a0();
      uVar8 = (ulonglong)((int)(uVar7 - 0x18) + 0xc);
      *(undefined8 *)(uVar8 - 8) = *(undefined8 *)(uVar2 + 0x26b0);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar8 - 0x10) = &UNK_14075b6fb;
      FUN_14075219b();
    }
    *(uint *)(uVar2 + 0x26b0) = uVar3;
    *(int *)(uVar2 + 0x26ac) = iVar9;
    iVar4 = *(int *)(uVar2 + 0x26a8);
  }
  else {
    uVar10 = (ulonglong)*(uint *)(uVar2 + 0x26b0);
  }
  uVar5 = (ulonglong)(uint)(iVar4 * 9);
  *(undefined4 *)(uVar10 + uVar5 * 4) = 2;
  *(undefined8 *)(uVar10 + 4 + uVar5 * 4) = 0;
  *(undefined4 *)(uVar10 + 0xc + uVar5 * 4) = 0;
  *(undefined4 *)(uVar10 + 0x10 + uVar5 * 4) = 0xffffffff;
  *(undefined4 *)(uVar10 + 0x14 + uVar5 * 4) = 0x3f000000;
  *(undefined1 *)(uVar10 + 0x18 + uVar5 * 4) = 0;
  *(undefined4 *)(uVar10 + 0x1c + uVar5 * 4) = 0;
  *(undefined4 *)(uVar10 + 0x20 + uVar5 * 4) = unaff_EBP;
  *(int *)(uVar2 + 0x26a8) = *(int *)(uVar2 + 0x26a8) + 1;
  return;
}

