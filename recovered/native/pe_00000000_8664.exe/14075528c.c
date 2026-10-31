/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075528c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075528c(void)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar7 = (ulonglong)((int)&stack0xffffffffffffffe0 - 0x10);
  uVar13 = *(uint *)(uVar7 + 0x24);
  *(ulonglong *)(uVar7 - 8) = (ulonglong)uVar13;
  *(undefined8 *)(uVar7 - 0x10) = 0x14075529d;
  puVar4 = (uint *)FUN_140754f67();
  puVar8 = (undefined8 *)(ulonglong)((int)(uVar7 - 8) + 4);
  if ((*puVar4 & 0xffff) == 0x802) {
    uVar2 = *(uint *)(puVar8 + 5);
    uVar10 = (ulonglong)_DAT_150af2a02;
    uVar6 = (ulonglong)(*puVar4 >> 0x10);
    uVar1 = *(undefined8 *)(uVar10 + 0xcc0 + uVar6);
    uVar14 = (undefined4)uVar1;
    uVar15 = (undefined4)((ulonglong)uVar1 >> 0x20);
    iVar3 = *(int *)(uVar10 + 0x1f80);
    if (iVar3 == *(int *)(uVar10 + 0x1f84)) {
      *puVar8 = uVar1;
      puVar8[1] = 0;
      if (iVar3 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar3 / 2 + iVar3;
      }
      iVar12 = iVar3 + 1;
      if (iVar3 + 1 < iVar5) {
        iVar12 = iVar5;
      }
      puVar8[-1] = (ulonglong)(uint)(iVar12 * 0xc);
      puVar8[-2] = 0x14075531c;
      uVar2 = FUN_1407520ca();
      puVar9 = (undefined4 *)(ulonglong)((int)(puVar8 + -1) + 4);
      uVar11 = (ulonglong)uVar2;
      uVar13 = *(uint *)(uVar10 + 0x1f88);
      if (uVar13 != 0) {
        *(ulonglong *)(puVar9 + -2) = (ulonglong)(uint)(*(int *)(uVar10 + 0x1f80) * 0xc);
        *(ulonglong *)(puVar9 + -4) = (ulonglong)uVar13;
        *(ulonglong *)(puVar9 + -6) = uVar11;
        *(undefined8 *)(puVar9 + -8) = 0x14075533f;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(puVar9 + -6) + 0xc) - 8) =
             *(undefined8 *)(uVar10 + 0x1f88);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(puVar9 + -6) + 0xc) - 0x10) = &UNK_14075534d;
        FUN_14075219b();
      }
      *(uint *)(uVar10 + 0x1f88) = uVar2;
      *(int *)(uVar10 + 0x1f84) = iVar12;
      iVar3 = *(int *)(uVar10 + 0x1f80);
      uVar13 = puVar9[9];
      uVar2 = puVar9[10];
      uVar14 = *puVar9;
      uVar15 = puVar9[1];
    }
    else {
      uVar11 = (ulonglong)*(uint *)(uVar10 + 0x1f88);
    }
    *(uint *)(uVar11 + (ulonglong)(uint)(iVar3 * 3) * 4) = uVar13;
    *(ulonglong *)(uVar11 + 4 + (ulonglong)(uint)(iVar3 * 3) * 4) = CONCAT44(uVar15,uVar14);
    *(int *)(uVar10 + 0x1f80) = *(int *)(uVar10 + 0x1f80) + 1;
    *(undefined8 *)(uVar10 + 0xcc0 + uVar6) = *(undefined8 *)(ulonglong)uVar2;
  }
  else {
    puVar8[-1] = 0x1034b2db;
    puVar8[-2] = 0x1407552f2;
    FUN_140754dc5();
  }
  return;
}

