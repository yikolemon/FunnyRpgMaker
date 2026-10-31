/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140765b41 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140765b41(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uStack_28;
  
  uVar5 = (undefined4)((ulonglong)unaff_RBX >> 0x20);
  uVar6 = (ulonglong)_DAT_150b0329b;
  uVar1 = *(undefined4 *)((ulonglong)*(uint *)(uVar6 + 0x14cc) + 8);
  uVar2 = *(uint *)(uVar6 + 0x1f98);
  if (uVar2 == *(uint *)(uVar6 + 0x1f9c)) {
    if (uVar2 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = (int)uVar2 / 2 + uVar2;
    }
    iVar10 = uVar2 + 1;
    if ((int)(uVar2 + 1) < iVar4) {
      iVar10 = iVar4;
    }
    uStack_28 = (ulonglong)(uint)(iVar10 * 8);
    uVar3 = FUN_1407520ca();
    uVar7 = (ulonglong)((int)&uStack_28 + 4);
    uVar9 = (ulonglong)uVar3;
    uVar2 = *(uint *)(uVar6 + 0x1fa0);
    if (uVar2 != 0) {
      *(ulonglong *)(uVar7 - 8) = (ulonglong)(uint)(*(int *)(uVar6 + 0x1f98) << 3);
      *(ulonglong *)(uVar7 - 0x10) = (ulonglong)uVar2;
      *(ulonglong *)(uVar7 - 0x18) = uVar9;
      *(undefined8 *)(uVar7 - 0x20) = 0x140765bb9;
      FUN_1408b31a0();
      uVar8 = (ulonglong)((int)(uVar7 - 0x18) + 0xc);
      *(undefined8 *)(uVar8 - 8) = *(undefined8 *)(uVar6 + 0x1fa0);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar8 - 0x10) = &UNK_140765bc7;
      FUN_14075219b();
    }
    *(uint *)(uVar6 + 0x1fa0) = uVar3;
    *(int *)(uVar6 + 0x1f9c) = iVar10;
    uVar2 = *(uint *)(uVar6 + 0x1f98);
    uVar5 = *(undefined4 *)(uVar7 + 0x14);
  }
  else {
    uVar9 = (ulonglong)*(uint *)(uVar6 + 0x1fa0);
  }
  *(undefined4 *)(uVar9 + 4 + (ulonglong)uVar2 * 8) = uVar1;
  *(undefined4 *)(uVar9 + (ulonglong)uVar2 * 8) = uVar5;
  *(int *)(uVar6 + 0x1f98) = *(int *)(uVar6 + 0x1f98) + 1;
  *(undefined4 *)(uVar6 + 0x1e3c) = uVar5;
  return;
}

