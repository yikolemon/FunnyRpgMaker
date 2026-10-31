/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140754f73 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140754f73(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint unaff_EBX;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong auStack_30 [2];
  
  auStack_30[0] = (ulonglong)unaff_EBX;
  puVar4 = (uint *)FUN_140754f67();
  puVar7 = (undefined4 *)(ulonglong)((int)auStack_30 + 4);
  if ((*puVar4 & 0xffff) == 0x801) {
    uVar12 = puVar7[7];
    uVar9 = (ulonglong)_DAT_150af26e9;
    uVar6 = (ulonglong)(*puVar4 >> 0x10);
    uVar13 = *(undefined4 *)(uVar9 + 0xcc0 + uVar6);
    iVar3 = *(int *)(uVar9 + 0x1f80);
    if (iVar3 == *(int *)(uVar9 + 0x1f84)) {
      *puVar7 = uVar13;
      if (iVar3 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar3 / 2 + iVar3;
      }
      iVar11 = iVar3 + 1;
      if (iVar3 + 1 < iVar5) {
        iVar11 = iVar5;
      }
      *(ulonglong *)(puVar7 + -2) = (ulonglong)(uint)(iVar11 * 0xc);
      *(undefined8 *)(puVar7 + -4) = 0x140755004;
      uVar2 = FUN_1407520ca();
      puVar8 = (undefined4 *)(ulonglong)((int)(puVar7 + -2) + 4);
      uVar10 = (ulonglong)uVar2;
      uVar1 = *(uint *)(uVar9 + 0x1f88);
      if (uVar1 != 0) {
        *(ulonglong *)(puVar8 + -2) = (ulonglong)(uint)(*(int *)(uVar9 + 0x1f80) * 0xc);
        *(ulonglong *)(puVar8 + -4) = (ulonglong)uVar1;
        *(ulonglong *)(puVar8 + -6) = uVar10;
        *(undefined8 *)(puVar8 + -8) = 0x140755027;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(puVar8 + -6) + 0xc) - 8) = *(undefined8 *)(uVar9 + 0x1f88)
        ;
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(puVar8 + -6) + 0xc) - 0x10) = &UNK_140755035;
        FUN_14075219b();
      }
      *(uint *)(uVar9 + 0x1f88) = uVar2;
      *(int *)(uVar9 + 0x1f84) = iVar11;
      iVar3 = *(int *)(uVar9 + 0x1f80);
      unaff_EBX = puVar8[6];
      uVar12 = puVar8[7];
      uVar13 = *puVar8;
    }
    else {
      uVar10 = (ulonglong)*(uint *)(uVar9 + 0x1f88);
    }
    *(uint *)(uVar10 + (ulonglong)(uint)(iVar3 * 3) * 4) = unaff_EBX;
    *(undefined4 *)(uVar10 + 4 + (ulonglong)(uint)(iVar3 * 3) * 4) = uVar13;
    *(int *)(uVar9 + 0x1f80) = *(int *)(uVar9 + 0x1f80) + 1;
    *(undefined4 *)(uVar9 + 0xcc0 + uVar6) = uVar12;
  }
  else {
    *(undefined8 *)(puVar7 + -2) = 0x1034b2db;
    *(undefined8 *)(puVar7 + -4) = 0x140754fda;
    FUN_140754dc5();
  }
  return;
}

