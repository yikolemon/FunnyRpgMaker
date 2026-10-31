/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180197c73 */

uint * FUN_180197c73(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ushort *puVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  
  iVar4 = *(int *)(param_2 + 0x30);
  if (iVar4 == *(int *)(param_2 + 0x34)) {
    if (iVar4 == 0) {
      iVar16 = 8;
    }
    else {
      iVar16 = iVar4 / 2 + iVar4;
    }
    iVar21 = iVar4 + 1;
    if (iVar4 + 1 < iVar16) {
      iVar21 = iVar16;
    }
    lVar17 = FUN_1800fe7f8((longlong)iVar21 * 0x2c);
    if (*(longlong *)(param_2 + 0x38) != 0) {
      FUN_1802a82f0(lVar17,*(longlong *)(param_2 + 0x38),(longlong)*(int *)(param_2 + 0x30) * 0x2c);
      FUN_1800fe8d4(*(undefined8 *)(param_2 + 0x38));
    }
    *(longlong *)(param_2 + 0x38) = lVar17;
    *(int *)(param_2 + 0x34) = iVar21;
    iVar16 = *(int *)(param_2 + 0x30);
  }
  else {
    lVar17 = *(longlong *)(param_2 + 0x38);
    iVar16 = iVar4;
  }
  lVar18 = (longlong)iVar16 * 0x2c;
  uVar5 = *param_4;
  uVar6 = param_4[1];
  uVar7 = param_4[2];
  uVar8 = param_4[3];
  uVar9 = param_4[4];
  uVar10 = param_4[5];
  uVar11 = param_4[6];
  uVar12 = param_4[7];
  uVar13 = param_4[8];
  uVar14 = param_4[9];
  uVar15 = param_4[10];
  puVar2 = (undefined4 *)(lVar17 + 0x1c + lVar18);
  *puVar2 = param_4[7];
  puVar2[1] = uVar13;
  puVar2[2] = uVar14;
  puVar2[3] = uVar15;
  puVar2 = (undefined4 *)(lVar17 + 0x10 + lVar18);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  puVar2 = (undefined4 *)(lVar17 + lVar18);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
  puVar1 = (uint *)(*(longlong *)(param_2 + 0x38) + (longlong)iVar4 * 0x2c);
  if (*(int *)(*(longlong *)(param_2 + 0x38) + 0x28 + (longlong)iVar4 * 0x2c) != -1) {
    puVar19 = (ushort *)FUN_180197a3b(param_1);
    puVar1[6] = (uint)((float)*puVar19 * *(float *)(param_1 + 0x54));
    puVar1[7] = (uint)((float)puVar19[1] * *(float *)(param_1 + 0x58));
    puVar1[8] = (uint)((float)((uint)puVar19[2] + (uint)*puVar19) * *(float *)(param_1 + 0x54));
    puVar1[9] = (uint)((float)((uint)puVar19[3] + (uint)puVar19[1]) * *(float *)(param_1 + 0x58));
    *(uint *)(param_2 + 0x4c) =
         *(uint *)(param_2 + 0x4c) & 0xfc000000 |
         (uint)puVar19[3] * (uint)puVar19[2] + *(uint *)(param_2 + 0x4c) & 0x3ffffff;
  }
  if (param_3 != 0) {
    fVar24 = *(float *)(**(longlong **)(*(longlong *)(param_2 + 0x58) + 0x28) + 0x3c);
    if ((fVar24 != 0.0) || (fVar23 = DAT_1802ac570, NAN(fVar24))) {
      fVar23 = *(float *)(param_2 + 0x14) / fVar24;
    }
    fVar23 = (float)FUN_1801179ee(puVar1[1],fVar23 * *(float *)(param_3 + 0x58),
                                  *(float *)(param_3 + 0x5c) * fVar23);
    fVar24 = (float)puVar1[1];
    if ((fVar23 != fVar24) || (NAN(fVar23) || NAN(fVar24))) {
      fVar24 = (fVar23 - fVar24) * DAT_1802dbb2c;
      if (*(char *)(param_3 + 0x36) != '\0') {
        fVar24 = (float)(int)fVar24;
      }
      puVar1[2] = (uint)((float)puVar1[2] + fVar24);
      puVar1[4] = (uint)(fVar24 + (float)puVar1[4]);
    }
    if (*(char *)(param_3 + 0x36) != '\0') {
      fVar23 = (float)(int)(fVar23 + DAT_1802dbb2c);
    }
    puVar1[1] = (uint)(fVar23 + *(float *)(param_3 + 0x60));
  }
  uVar20 = *puVar1;
  if ((uVar20 & 1) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x56) = 1;
    *(undefined1 *)(param_1 + 0x53) = 1;
    uVar20 = *puVar1;
  }
  uVar22 = uVar20 >> 6;
  FUN_18019a642(param_2,uVar22 + 1);
  *(uint *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar22 * 4) = puVar1[1];
  *(short *)(*(longlong *)(param_2 + 0x28) + (ulonglong)uVar22 * 2) = (short)iVar4;
  pbVar3 = (byte *)(*(longlong *)(param_2 + 0x58) + 0x34 + (ulonglong)(uVar20 >> 0x16));
  *pbVar3 = *pbVar3 | (byte)(1 << ((byte)(uVar20 >> 0x13) & 7));
  return puVar1;
}

