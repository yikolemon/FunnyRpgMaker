/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077e993 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14077e993(uint param_1,uint param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong in_RCX;
  undefined4 uVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint *puVar10;
  ulonglong uVar13;
  
  iVar8 = (int)&stack0xffffffffffffffe0;
  puVar10 = (uint *)(ulonglong)(iVar8 - 0x78);
  puVar10[6] = param_1;
  uVar16 = (ulonglong)param_2;
  uVar15 = in_RCX & 0xffffffff;
  uVar14 = (ulonglong)(param_2 * 0x1b);
  *(undefined1 (*) [16])(puVar10 + 7) = ZEXT416(*(uint *)(in_RCX + 0x88));
  *puVar10 = param_2;
  puVar7 = (undefined8 *)((ulonglong)(puVar10 + 0x19) & 0xffffffff);
  puVar10[-2] = 0x4077e9d5;
  puVar10[-1] = 1;
  FUN_14077e682(puVar7,uVar15);
  uVar4 = *(undefined4 *)(uVar15 + 0x2e8);
  fVar1 = *(float *)(uVar16 + 0x102b8624 + uVar14);
  fVar17 = _DAT_150a37ac0 + fVar1;
  puVar10[5] = (uint)fVar1;
  uVar2 = *(undefined8 *)(uVar16 + 0x102b860c + uVar14);
  fVar18 = (float)puVar10[7];
  fVar19 = fVar18 * (float)uVar2;
  fVar20 = fVar18 * (float)((ulonglong)uVar2 >> 0x20);
  puVar10[0xb] = (uint)fVar19;
  puVar10[0xc] = (uint)fVar20;
  puVar10[0xd] = (uint)(fVar18 * 0.0);
  puVar10[0xe] = (uint)(fVar18 * 0.0);
  uVar2 = *puVar7;
  fVar21 = (float)((ulonglong)uVar2 >> 0x20);
  *(undefined8 *)(puVar10 + 0x13) = uVar2;
  puVar10[0x15] = 0;
  puVar10[0x16] = 0;
  fVar22 = (float)puVar7[1] - (float)uVar2;
  fVar23 = (float)((ulonglong)puVar7[1] >> 0x20) - fVar21;
  *(ulonglong *)(puVar10 + 0xf) = CONCAT44(fVar23,fVar22);
  puVar10[0x11] = 0;
  puVar10[0x12] = 0;
  uVar3 = *(undefined8 *)(uVar16 + 0x102b8614 + uVar14);
  puVar7 = (undefined8 *)((ulonglong)(puVar10 + 0x17) & 0xffffffff);
  *puVar7 = CONCAT44((float)((ulonglong)uVar3 >> 0x20) * fVar23 + fVar21 + fRam0000000150a37403 +
                     fVar20,(float)uVar3 * fVar22 + (float)uVar2 + _DAT_150a373ff + fVar19);
  puVar10[4] = 0;
  puVar10[3] = (uint)fVar1;
  puVar10[2] = (uint)fVar17;
  puVar10[1] = (uint)fVar18;
  uVar6 = SUB84(puVar10 + 0x17,0);
  *puVar10 = uVar6;
  puVar10[-2] = 0x4077ea69;
  puVar10[-1] = 1;
  FUN_1407e1bc2(uVar4);
  puVar11 = (undefined4 *)(ulonglong)(iVar8 - 0x8c);
  uVar4 = *(undefined4 *)(uVar15 + 0x2e8);
  fVar1 = (float)puVar11[5];
  fVar18 = _DAT_150a37b52 + fVar1;
  uVar2 = *(undefined8 *)(uVar16 + 0x102b861c + uVar14);
  *puVar7 = CONCAT44((float)((ulonglong)uVar2 >> 0x20) * (float)puVar11[0x10] + (float)puVar11[0x14]
                     + fRam0000000150a37468 + (float)puVar11[0xc],
                     (float)uVar2 * (float)puVar11[0xf] + (float)puVar11[0x13] + _DAT_150a37464 +
                     (float)puVar11[0xb]);
  puVar11[4] = 0;
  puVar11[3] = fVar18;
  puVar11[2] = fVar1;
  puVar11[1] = puVar11[7];
  *puVar11 = uVar6;
  *(undefined8 *)(puVar11 + -2) = 0x14077ead4;
  FUN_1407e1bc2(uVar4);
  puVar12 = (undefined4 *)(ulonglong)(iVar8 - 0xa0);
  uVar14 = (ulonglong)*(uint *)(uVar15 + 0x2e8);
  uVar4 = *(undefined4 *)(uVar14 + 0x38);
  uVar6 = *(undefined4 *)(uVar14 + 0x40);
  puVar12[4] = 0;
  puVar12[3] = puVar12[6];
  puVar12[2] = puVar12[0x23];
  puVar12[1] = uVar4;
  *puVar12 = uVar6;
  *(undefined8 *)(puVar12 + -2) = 0x14077eb0e;
  FUN_1407e0774(uVar14);
  uVar9 = iVar8 - 0xb4;
  uVar13 = (ulonglong)uVar9;
  *(undefined4 *)(uVar14 + 0x38) = 0;
  if (_DAT_150b07820 == (*(uint *)(uVar13 + 0x74) ^ uVar9)) {
    return;
  }
  uVar5 = *(uint *)(uVar13 + 0x74);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(uVar13 - 8) = &UNK_14077eb37;
  FUN_1408802b0(uVar5 ^ uVar9);
}

