/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076964d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076964d(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  ulonglong uVar5;
  char unaff_BPL;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uStack_28;
  uint uVar9;
  
  uVar9 = (uint)((ulonglong)unaff_RBX >> 0x20);
  uVar8 = (ulonglong)_DAT_150b06da7;
  uVar1 = *(uint *)(uVar8 + 0x1e40) | uVar9;
  if (unaff_BPL == '\0') {
    uVar1 = ~uVar9 & *(uint *)(uVar8 + 0x1e40);
  }
  uVar9 = *(uint *)(uVar8 + 0x1fa4);
  *(uint *)(uVar8 + 0x1e40) = uVar1;
  if (uVar9 == *(uint *)(uVar8 + 0x1fa8)) {
    if (uVar9 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = (int)uVar9 / 2 + uVar9;
    }
    iVar6 = uVar9 + 1;
    if ((int)(uVar9 + 1) < iVar3) {
      iVar6 = iVar3;
    }
    uStack_28 = (ulonglong)(uint)(iVar6 * 4);
    uVar2 = FUN_1407520ca();
    uVar4 = (ulonglong)((int)&uStack_28 + 4);
    uVar7 = (ulonglong)uVar2;
    uVar9 = *(uint *)(uVar8 + 0x1fac);
    if (uVar9 != 0) {
      *(ulonglong *)(uVar4 - 8) = (ulonglong)(uint)(*(int *)(uVar8 + 0x1fa4) << 2);
      *(ulonglong *)(uVar4 - 0x10) = (ulonglong)uVar9;
      *(ulonglong *)(uVar4 - 0x18) = uVar7;
      *(undefined8 *)(uVar4 - 0x20) = 0x1407696d8;
      FUN_1408b31a0();
      uVar5 = (ulonglong)((int)(uVar4 - 0x18) + 0xc);
      *(undefined8 *)(uVar5 - 8) = *(undefined8 *)(uVar8 + 0x1fac);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar5 - 0x10) = &UNK_1407696e6;
      FUN_14075219b();
    }
    *(uint *)(uVar8 + 0x1fac) = uVar2;
    *(int *)(uVar8 + 0x1fa8) = iVar6;
    uVar9 = *(uint *)(uVar8 + 0x1fa4);
  }
  else {
    uVar7 = (ulonglong)*(uint *)(uVar8 + 0x1fac);
  }
  *(uint *)(uVar7 + (ulonglong)uVar9 * 4) = uVar1;
  *(int *)(uVar8 + 0x1fa4) = *(int *)(uVar8 + 0x1fa4) + 1;
  return;
}

