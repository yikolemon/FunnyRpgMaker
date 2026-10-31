/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019032a */

uint * FUN_1019032a(int param_1,int param_2,int param_3,undefined4 *param_4)

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
  int iVar12;
  int iVar13;
  ushort *puVar14;
  uint uVar15;
  float10 fVar16;
  float fVar17;
  float fVar18;
  
  iVar4 = *(int *)(param_2 + 0x24);
  if (iVar4 == *(int *)(param_2 + 0x28)) {
    if (iVar4 == 0) {
      iVar12 = 8;
    }
    else {
      iVar12 = iVar4 / 2 + iVar4;
    }
    iVar13 = iVar4 + 1;
    if (iVar4 + 1 < iVar12) {
      iVar13 = iVar12;
    }
    iVar12 = FUN_100fa1fa(iVar13 * 0x2c);
    if (*(int *)(param_2 + 0x2c) != 0) {
      FUN_1025b2d0(iVar12,*(int *)(param_2 + 0x2c),*(int *)(param_2 + 0x24) * 0x2c);
      FUN_100fa2cb(*(undefined4 *)(param_2 + 0x2c));
    }
    *(int *)(param_2 + 0x2c) = iVar12;
    *(int *)(param_2 + 0x28) = iVar13;
    iVar13 = *(int *)(param_2 + 0x24);
  }
  else {
    iVar12 = *(int *)(param_2 + 0x2c);
    iVar13 = iVar4;
  }
  iVar13 = iVar13 * 0x2c;
  uVar5 = param_4[8];
  uVar6 = param_4[9];
  uVar7 = param_4[10];
  puVar2 = (undefined4 *)(iVar12 + 0x1c + iVar13);
  *puVar2 = param_4[7];
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  uVar5 = *param_4;
  uVar6 = param_4[1];
  uVar7 = param_4[2];
  uVar8 = param_4[3];
  uVar9 = param_4[5];
  uVar10 = param_4[6];
  uVar11 = param_4[7];
  puVar2 = (undefined4 *)(iVar12 + 0x10 + iVar13);
  *puVar2 = param_4[4];
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  puVar2 = (undefined4 *)(iVar12 + iVar13);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  puVar1 = (uint *)(*(int *)(param_2 + 0x2c) + iVar4 * 0x2c);
  iVar12 = *(int *)(*(int *)(param_2 + 0x2c) + 0x28 + iVar4 * 0x2c);
  if (iVar12 != -1) {
    puVar14 = (ushort *)FUN_10190112(param_1,iVar12);
    puVar1[6] = (uint)((float)*puVar14 * *(float *)(param_1 + 0x44));
    puVar1[7] = (uint)((float)puVar14[1] * *(float *)(param_1 + 0x48));
    puVar1[8] = (uint)((float)((uint)puVar14[2] + (uint)*puVar14) * *(float *)(param_1 + 0x44));
    puVar1[9] = (uint)((float)((uint)puVar14[3] + (uint)puVar14[1]) * *(float *)(param_1 + 0x48));
    *(uint *)(param_2 + 0x3c) =
         *(uint *)(param_2 + 0x3c) & 0xfc000000 |
         (uint)puVar14[3] * (uint)puVar14[2] + *(uint *)(param_2 + 0x3c) & 0x3ffffff;
  }
  if (param_3 != 0) {
    fVar18 = *(float *)(**(int **)(*(int *)(param_2 + 0x48) + 0x20) + 0x38);
    if ((fVar18 != 0.0) || (fVar17 = DAT_1028b430, NAN(fVar18))) {
      fVar17 = *(float *)(param_2 + 0x10) / fVar18;
    }
    fVar16 = (float10)FUN_10112cc4(puVar1[1],fVar17 * *(float *)(param_3 + 0x4c),
                                   *(float *)(param_3 + 0x50) * fVar17);
    fVar17 = (float)fVar16;
    fVar18 = (float)puVar1[1];
    if ((fVar17 != fVar18) || (NAN(fVar17) || NAN(fVar18))) {
      fVar18 = (fVar17 - fVar18) * DAT_102b70e0;
      if (*(char *)(param_3 + 0x32) != '\0') {
        fVar18 = (float)(int)fVar18;
      }
      puVar1[2] = (uint)((float)puVar1[2] + fVar18);
      puVar1[4] = (uint)(fVar18 + (float)puVar1[4]);
    }
    if (*(char *)(param_3 + 0x32) != '\0') {
      fVar17 = (float)(int)(fVar17 + DAT_102b70e0);
    }
    puVar1[1] = (uint)(fVar17 + *(float *)(param_3 + 0x54));
  }
  uVar15 = *puVar1;
  if ((uVar15 & 1) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x4e) = 1;
    *(undefined1 *)(param_1 + 0x43) = 1;
    uVar15 = *puVar1;
  }
  FUN_10192a7d();
  *(uint *)(*(int *)(param_2 + 8) + (uVar15 >> 6) * 4) = puVar1[1];
  *(short *)(*(int *)(param_2 + 0x20) + (uVar15 >> 6) * 2) = (short)iVar4;
  pbVar3 = (byte *)(*(int *)(param_2 + 0x48) + 0x28 + (uVar15 >> 0x16));
  *pbVar3 = *pbVar3 | (byte)(1 << ((byte)(uVar15 >> 0x13) & 7));
  return puVar1;
}

