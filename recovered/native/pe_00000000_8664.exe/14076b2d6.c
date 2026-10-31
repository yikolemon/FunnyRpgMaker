/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076b2d6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076b2d6(void)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  longlong unaff_RBX;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong auStack_40 [4];
  uint uVar10;
  
  puVar5 = &stack0xffffffffffffffe0;
  uVar10 = (uint)((ulonglong)unaff_RBX >> 0x20);
  pcVar3 = (char *)(ulonglong)_DAT_14cc988b1039d74c;
  *pcVar3 = *pcVar3 + (char)_DAT_14cc988b1039d74c;
  if (*(uint *)(pcVar3 + 0x150c) == uVar10) {
    auStack_40[3] = 0;
    auStack_40[2] = 0;
    auStack_40[1] = 0xd;
    auStack_40[0] = (ulonglong)uVar10;
    FUN_14076ad2a();
    puVar5 = (undefined1 *)(ulonglong)((int)auStack_40 + 0x10);
  }
  uVar1 = *(uint *)(unaff_RBX + 0x138);
  if (uVar1 == *(uint *)(unaff_RBX + 0x13c)) {
    if (uVar1 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = (int)uVar1 / 2 + uVar1;
    }
    iVar8 = uVar1 + 1;
    if ((int)(uVar1 + 1) < iVar4) {
      iVar8 = iVar4;
    }
    *(ulonglong *)(puVar5 + -8) = (ulonglong)(uint)(iVar8 * 4);
    *(undefined8 *)(puVar5 + -0x10) = 0x14076b341;
    uVar2 = FUN_1407520ca();
    uVar6 = (ulonglong)((int)(puVar5 + -8) + 4);
    uVar9 = (ulonglong)uVar2;
    uVar1 = *(uint *)(unaff_RBX + 0x140);
    if (uVar1 != 0) {
      *(ulonglong *)(uVar6 - 8) = (ulonglong)(uint)(*(int *)(unaff_RBX + 0x138) << 2);
      *(ulonglong *)(uVar6 - 0x10) = (ulonglong)uVar1;
      *(ulonglong *)(uVar6 - 0x18) = uVar9;
      *(undefined8 *)(uVar6 - 0x20) = 0x14076b361;
      FUN_1408b31a0();
      uVar7 = (ulonglong)((int)(uVar6 - 0x18) + 0xc);
      *(undefined8 *)(uVar7 - 8) = *(undefined8 *)(unaff_RBX + 0x140);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar7 - 0x10) = &UNK_14076b36f;
      FUN_14075219b();
    }
    *(uint *)(unaff_RBX + 0x140) = uVar2;
    *(int *)(unaff_RBX + 0x13c) = iVar8;
    uVar1 = *(uint *)(unaff_RBX + 0x138);
  }
  else {
    uVar9 = (ulonglong)*(uint *)(unaff_RBX + 0x140);
  }
  *(uint *)(uVar9 + (ulonglong)uVar1 * 4) = uVar10;
  *(int *)(unaff_RBX + 0x138) = *(int *)(unaff_RBX + 0x138) + 1;
  return;
}

