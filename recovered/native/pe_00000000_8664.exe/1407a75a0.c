/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a75a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a75a0(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  
  puVar11 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xc);
  uVar8 = *(uint *)(puVar11 + 0x28);
  uVar2 = *(uint *)(puVar11 + 0x20);
  uVar12 = (ulonglong)uVar2;
  iVar4 = *(int *)(uVar12 + 0x28);
  if (*(int *)(uVar12 + 0x28) == -1) {
    iVar4 = _DAT_4804408b1039d74c;
  }
  *(int *)(puVar11 + 8) = iVar4;
  puVar11[3] = *(undefined1 *)((ulonglong)uVar8 + 0x104);
  uVar10 = *(undefined4 *)((ulonglong)uVar8 + 0xb8);
  iVar4 = *(int *)(uVar12 + 4);
  if (iVar4 == *(int *)(uVar12 + 8)) {
    uVar6 = (ulonglong)uVar2;
    *(undefined4 *)(puVar11 + 4) = uVar10;
    if (iVar4 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar4 / 2 + iVar4;
    }
    iVar9 = iVar4 + 1;
    if (iVar4 + 1 < iVar7) {
      iVar9 = iVar7;
    }
    *(ulonglong *)(puVar11 + -8) = (ulonglong)(uint)(iVar9 * 0x30);
    *(undefined8 *)(puVar11 + -0x10) = 0x1407a7613;
    uVar5 = FUN_1407520ca();
    puVar11 = (undefined1 *)(ulonglong)((int)(puVar11 + -8) + 4);
    uVar12 = (ulonglong)uVar5;
    uVar8 = *(uint *)(uVar6 + 0xc);
    if (uVar8 != 0) {
      *(ulonglong *)(puVar11 + -8) = (ulonglong)(uint)(*(int *)(uVar6 + 4) * 0x30);
      *(ulonglong *)(puVar11 + -0x10) = (ulonglong)uVar8;
      *(ulonglong *)(puVar11 + -0x18) = uVar12;
      *(undefined8 *)(puVar11 + -0x20) = 0x1407a7632;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(puVar11 + -0x18) + 0xc) - 8) = *(undefined8 *)(uVar6 + 0xc);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(puVar11 + -0x18) + 0xc) - 0x10) = &UNK_1407a763d;
      FUN_14075219b();
    }
    *(uint *)(uVar6 + 0xc) = uVar5;
    *(int *)(uVar6 + 8) = iVar9;
    iVar4 = *(int *)(uVar6 + 4);
    uVar8 = *(uint *)(puVar11 + 0x28);
    uVar10 = *(undefined4 *)(puVar11 + 4);
  }
  else {
    uVar12 = (ulonglong)*(uint *)(uVar12 + 0xc);
  }
  uVar5 = *(uint *)(puVar11 + 0x24) | 0x100000;
  if (puVar11[3] != '\0') {
    uVar5 = *(uint *)(puVar11 + 0x24);
  }
  uVar6 = (ulonglong)(uint)(iVar4 * 0x30);
  *(undefined4 *)(uVar12 + uVar6) = uVar10;
  *(uint *)(uVar12 + 4 + uVar6) = uVar5;
  *(uint *)(uVar12 + 8 + uVar6) = uVar8;
  *(undefined4 *)(uVar12 + 0xc + uVar6) = *(undefined4 *)(puVar11 + 8);
  *(undefined4 *)(uVar12 + 0x10 + uVar6) = 0xffffffff;
  *(undefined8 *)(uVar12 + 0x14 + uVar6) = 0;
  uVar3 = uRam0000000150a60d00;
  puVar1 = (undefined8 *)(uVar12 + 0x1c + uVar6);
  *puVar1 = _DAT_150a60cf8;
  puVar1[1] = uVar3;
  *(undefined4 *)(uVar12 + 0x2c + uVar6) = 0;
  *(int *)((ulonglong)uVar2 + 4) = *(int *)((ulonglong)uVar2 + 4) + 1;
  return;
}

