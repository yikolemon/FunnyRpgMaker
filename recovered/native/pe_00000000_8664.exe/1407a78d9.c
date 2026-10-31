/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a78d9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1407a78d9(void)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined4 *puVar21;
  
  uVar17 = (ulonglong)((int)&stack0xffffffffffffffe0 - 0x34);
  uVar19 = (ulonglong)*(uint *)(uVar17 + 0x48);
  *(undefined8 *)(uVar17 - 8) = *(undefined8 *)(uVar19 + 0x74);
  *(ulonglong *)(uVar17 - 0x10) = uVar19;
  *(undefined8 *)(uVar17 - 0x18) = 0x1407a78f8;
  puVar11 = (undefined4 *)FUN_1407a7515();
  puVar18 = (undefined4 *)(ulonglong)((int)(uVar17 - 0x10) + 8);
  iVar10 = (int)puVar11;
  if ((iVar10 != 0) && ((puVar11[1] & 0x20) == 0)) {
    uVar20 = *(uint *)(uVar19 + 0xc);
    sVar1 = *(short *)(uVar19 + 0x78);
    iVar13 = (int)sVar1;
    iVar15 = ((int)(iVar10 - uVar20) >> 4) * -0x55555555 + iVar13;
    if ((-1 < iVar15) && (iVar15 < *(int *)(uVar19 + 4))) {
      uVar2 = *(uint *)((ulonglong)uVar20 + 4 + (ulonglong)(uint)(iVar15 * 0x30));
      if (((uVar2 & 0x20) == 0) && (((uVar2 ^ puVar11[1]) & 0xc0) == 0)) {
        uVar20 = uVar20 + iVar15 * 0x30;
        puVar21 = (undefined4 *)(ulonglong)uVar20;
        uVar12 = *(undefined8 *)(puVar11 + 10);
        *(undefined8 *)(puVar18 + 8) = *(undefined8 *)(puVar11 + 8);
        *(undefined8 *)(puVar18 + 10) = uVar12;
        uVar3 = *puVar11;
        uVar4 = puVar11[1];
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        uVar7 = puVar11[5];
        uVar8 = puVar11[6];
        uVar9 = puVar11[7];
        puVar18[4] = puVar11[4];
        puVar18[5] = uVar7;
        puVar18[6] = uVar8;
        puVar18[7] = uVar9;
        *puVar18 = uVar3;
        puVar18[1] = uVar4;
        puVar18[2] = uVar5;
        puVar18[3] = uVar6;
        puVar16 = (undefined4 *)(ulonglong)(iVar10 + 0x30);
        if (sVar1 < 1) {
          puVar16 = puVar21;
        }
        uVar14 = (ulonglong)(uVar20 + 0x30);
        if (0 < sVar1) {
          uVar14 = (ulonglong)puVar11 & 0xffffffff;
        }
        iVar10 = -iVar13;
        if (-iVar13 < 0) {
          iVar10 = iVar13;
        }
        *(ulonglong *)(puVar18 + -2) = (ulonglong)(uint)(iVar10 * 0x30);
        *(undefined4 **)(puVar18 + -4) = puVar16;
        *(ulonglong *)(puVar18 + -6) = uVar14;
        *(undefined8 *)(puVar18 + -8) = 0x1407a7993;
        FUN_1408b31a0();
        puVar18 = (undefined4 *)(ulonglong)((int)(puVar18 + -6) + 0xc);
        uVar12 = *(undefined8 *)(puVar18 + 10);
        *(undefined8 *)(puVar21 + 8) = *(undefined8 *)(puVar18 + 8);
        *(undefined8 *)(puVar21 + 10) = uVar12;
        uVar3 = *puVar18;
        uVar4 = puVar18[1];
        uVar5 = puVar18[2];
        uVar6 = puVar18[3];
        uVar7 = puVar18[5];
        uVar8 = puVar18[6];
        uVar9 = puVar18[7];
        puVar21[4] = puVar18[4];
        puVar21[5] = uVar7;
        puVar21[6] = uVar8;
        puVar21[7] = uVar9;
        *puVar21 = uVar3;
        puVar21[1] = uVar4;
        puVar21[2] = uVar5;
        puVar21[3] = uVar6;
        if ((*(byte *)(uVar19 + 0x12) & 0x40) != 0) {
          *(undefined8 *)(puVar18 + -2) = 0x1407a79ba;
          FUN_140770426();
        }
        uVar12 = 1;
        goto LAB_1407a793c;
      }
    }
  }
  uVar12 = 0;
LAB_1407a793c:
  if (_DAT_150b30648 == (*(uint *)((longlong)puVar18 + 0x30) ^ (uint)puVar18)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar18 + -8) = &UNK_1407a79cc;
  FUN_1408802b0(*(uint *)((longlong)puVar18 + 0x30) ^ (uint)puVar18);
}

