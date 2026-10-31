/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ec996 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407ec996(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float *pfVar12;
  undefined4 *puVar13;
  float *pfVar14;
  float fVar5;
  
  puVar13 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x48);
  uVar8 = puVar13[0x1a];
  pfVar12 = (float *)(ulonglong)(uint)puVar13[0x19];
  pfVar14 = (float *)(ulonglong)(uint)puVar13[0x18];
  uVar9 = puVar13[0x17];
  fVar1 = *pfVar12;
  puVar13[6] = pfVar12[1];
  fVar2 = *pfVar14;
  puVar13[5] = pfVar14[1];
  puVar13[8] = fVar1;
  puVar13[7] = fVar2;
  puVar13[0xc] = pfVar12[2];
  puVar13[0xb] = pfVar14[2];
  puVar13[10] = pfVar12[3];
  puVar13[9] = pfVar14[3];
  if (fVar2 < fVar1) {
    fVar1 = (float)puVar13[10];
    fVar2 = (float)puVar13[9];
    fVar3 = (float)puVar13[6];
    fVar4 = (float)puVar13[5];
    fVar5 = (float)puVar13[5];
    puVar11 = (undefined4 *)((ulonglong)(puVar13 + 0xf) & 0xffffffff);
    *puVar11 = puVar13[8];
    puVar11[1] = fVar1;
    puVar11 = (undefined4 *)((ulonglong)(puVar13 + 0xd) & 0xffffffff);
    *puVar11 = puVar13[7];
    puVar11[1] = fVar3;
    puVar13[4] = (uint)(fVar2 <= fVar1) * 0x40 + (uint)(fVar3 < fVar5 || fVar3 == fVar4) * 0x10 +
                 0x100;
    puVar13[3] = puVar13[0x1b];
    puVar13[2] = uVar8;
    puVar13[1] = (int)(puVar13 + 0xf);
    *puVar13 = (int)(puVar13 + 0xd);
    *(undefined8 *)(puVar13 + -2) = 0x1407eca8d;
    FUN_1407e372a(uVar9);
    puVar13 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x5c);
  }
  if ((float)puVar13[0xc] <= (float)puVar13[0xb] && (float)puVar13[0xb] != (float)puVar13[0xc]) {
    fVar1 = (float)puVar13[9];
    fVar2 = (float)puVar13[10];
    fVar3 = (float)puVar13[10];
    fVar4 = (float)puVar13[6];
    fVar5 = (float)puVar13[5];
    fVar6 = (float)puVar13[5];
    fVar7 = pfVar12[3];
    pfVar10 = (float *)((ulonglong)(puVar13 + 0xf) & 0xffffffff);
    *pfVar10 = pfVar14[2];
    pfVar10[1] = fVar7;
    *(ulonglong *)((ulonglong)(puVar13 + 0xd) & 0xffffffff) =
         CONCAT44((int)*(undefined8 *)(pfVar12 + 1),
                  (int)((ulonglong)*(undefined8 *)(pfVar12 + 1) >> 0x20));
    puVar13[4] = (uint)(fVar1 < fVar3 || fVar1 == fVar2) * 0x80 +
                 (uint)(fVar4 < fVar6 || fVar4 == fVar5) * 0x20 + 0x100;
    puVar13[3] = puVar13[0x1b];
    puVar13[2] = uVar8;
    puVar13[1] = (int)(puVar13 + 0xf);
    *puVar13 = (int)(puVar13 + 0xd);
    *(undefined8 *)(puVar13 + -2) = 0x1407ecb13;
    FUN_1407e372a(uVar9);
    puVar13 = (undefined4 *)(ulonglong)((int)puVar13 - 0x14);
  }
  if ((float)puVar13[5] <= (float)puVar13[6] && (float)puVar13[6] != (float)puVar13[5]) {
    fVar1 = (float)puVar13[0xb];
    fVar2 = (float)puVar13[0xc];
    fVar3 = (float)puVar13[0xc];
    fVar4 = (float)puVar13[8];
    fVar5 = (float)puVar13[7];
    fVar6 = (float)puVar13[7];
    *(ulonglong *)((ulonglong)(puVar13 + 0xf) & 0xffffffff) =
         CONCAT44((int)*(undefined8 *)(pfVar12 + 1),
                  (int)((ulonglong)*(undefined8 *)(pfVar12 + 1) >> 0x20));
    fVar7 = pfVar14[1];
    pfVar10 = (float *)((ulonglong)(puVar13 + 0xd) & 0xffffffff);
    *pfVar10 = *pfVar12;
    pfVar10[1] = fVar7;
    puVar13[4] = (uint)(fVar1 < fVar3 || fVar1 == fVar2) * 0x20 +
                 (uint)(fVar4 < fVar6 || fVar4 == fVar5) * 0x10 + 0x100;
    puVar13[3] = puVar13[0x1b];
    puVar13[2] = uVar8;
    puVar13[1] = (int)(puVar13 + 0xf);
    *puVar13 = (int)(puVar13 + 0xd);
    *(undefined8 *)(puVar13 + -2) = 0x1407ecb98;
    FUN_1407e372a(uVar9);
    puVar13 = (undefined4 *)(ulonglong)((int)puVar13 - 0x14);
  }
  if ((float)puVar13[10] <= (float)puVar13[9] && (float)puVar13[9] != (float)puVar13[10]) {
    fVar1 = (float)puVar13[0xb];
    fVar2 = (float)puVar13[0xc];
    fVar3 = (float)puVar13[0xc];
    fVar4 = (float)puVar13[8];
    fVar5 = (float)puVar13[7];
    fVar6 = (float)puVar13[7];
    fVar7 = pfVar14[3];
    pfVar10 = (float *)((ulonglong)(puVar13 + 0xf) & 0xffffffff);
    *pfVar10 = pfVar12[2];
    pfVar10[1] = fVar7;
    *(ulonglong *)((ulonglong)(puVar13 + 0xd) & 0xffffffff) = CONCAT44(pfVar12[3],*pfVar12);
    puVar13[4] = (uint)(fVar1 < fVar3 || fVar1 == fVar2) * 0x80 +
                 (uint)(fVar4 < fVar6 || fVar4 == fVar5) * 0x40 + 0x100;
    puVar13[3] = puVar13[0x1b];
    puVar13[2] = uVar8;
    puVar13[1] = (int)(puVar13 + 0xf);
    *puVar13 = (int)(puVar13 + 0xd);
    *(undefined8 *)(puVar13 + -2) = 0x1407ecc1c;
    FUN_1407e372a(uVar9);
    puVar13 = (undefined4 *)(ulonglong)((int)puVar13 - 0x14);
  }
  if (((float)puVar13[7] <= (float)puVar13[8] && (float)puVar13[8] != (float)puVar13[7]) &&
     ((float)puVar13[5] <= (float)puVar13[6] && (float)puVar13[6] != (float)puVar13[5])) {
    *(undefined8 *)((ulonglong)(puVar13 + 0xf) & 0xffffffff) = *(undefined8 *)pfVar12;
    *(undefined8 *)((ulonglong)(puVar13 + 0xd) & 0xffffffff) = *(undefined8 *)pfVar14;
    puVar13[3] = puVar13[0x1b];
    puVar13[2] = uVar8;
    puVar13[1] = (int)(puVar13 + 0xf);
    *puVar13 = (int)(puVar13 + 0xd);
    puVar13[4] = 0x10;
    *(undefined8 *)(puVar13 + -2) = 0x1407ecc78;
    FUN_1407e372a(uVar9);
    puVar13 = (undefined4 *)(ulonglong)((int)puVar13 - 0x14);
  }
  if (((float)puVar13[0xc] <= (float)puVar13[0xb] && (float)puVar13[0xb] != (float)puVar13[0xc]) &&
     ((float)puVar13[5] <= (float)puVar13[6] && (float)puVar13[6] != (float)puVar13[5])) {
    fVar1 = pfVar12[1];
    pfVar10 = (float *)((ulonglong)(puVar13 + 0xf) & 0xffffffff);
    *pfVar10 = pfVar14[2];
    pfVar10[1] = fVar1;
    fVar1 = pfVar14[1];
    pfVar10 = (float *)((ulonglong)(puVar13 + 0xd) & 0xffffffff);
    *pfVar10 = pfVar12[2];
    pfVar10[1] = fVar1;
    puVar13[3] = puVar13[0x1b];
    puVar13[2] = uVar8;
    puVar13[1] = (int)(puVar13 + 0xf);
    *puVar13 = (int)(puVar13 + 0xd);
    puVar13[4] = 0x20;
    *(undefined8 *)(puVar13 + -2) = 0x1407ecce9;
    FUN_1407e372a(uVar9);
    puVar13 = (undefined4 *)(ulonglong)((int)puVar13 - 0x14);
  }
  if (((float)puVar13[7] <= (float)puVar13[8] && (float)puVar13[8] != (float)puVar13[7]) &&
     ((float)puVar13[10] <= (float)puVar13[9] && (float)puVar13[9] != (float)puVar13[10])) {
    fVar1 = pfVar14[3];
    pfVar10 = (float *)((ulonglong)(puVar13 + 0xf) & 0xffffffff);
    *pfVar10 = *pfVar12;
    pfVar10[1] = fVar1;
    fVar1 = pfVar12[3];
    pfVar10 = (float *)((ulonglong)(puVar13 + 0xd) & 0xffffffff);
    *pfVar10 = *pfVar14;
    pfVar10[1] = fVar1;
    puVar13[3] = puVar13[0x1b];
    puVar13[2] = uVar8;
    puVar13[1] = (int)(puVar13 + 0xf);
    *puVar13 = (int)(puVar13 + 0xd);
    puVar13[4] = 0x40;
    *(undefined8 *)(puVar13 + -2) = 0x1407ecd59;
    FUN_1407e372a(uVar9);
    puVar13 = (undefined4 *)(ulonglong)((int)puVar13 - 0x14);
  }
  if ((float)puVar13[0xc] <= (float)puVar13[0xb] && (float)puVar13[0xb] != (float)puVar13[0xc]) {
    if ((float)puVar13[10] <= (float)puVar13[9] && (float)puVar13[9] != (float)puVar13[10]) {
      *(undefined8 *)((ulonglong)(puVar13 + 0xf) & 0xffffffff) = *(undefined8 *)(pfVar14 + 2);
      *(undefined8 *)((ulonglong)(puVar13 + 0xd) & 0xffffffff) = *(undefined8 *)(pfVar12 + 2);
      puVar13[3] = puVar13[0x1b];
      puVar13[2] = uVar8;
      puVar13[1] = (int)(puVar13 + 0xf);
      *puVar13 = (int)(puVar13 + 0xd);
      puVar13[4] = 0x80;
      *(undefined8 *)(puVar13 + -2) = 0x1407ecdb6;
      FUN_1407e372a(uVar9);
      puVar13 = (undefined4 *)(ulonglong)((int)puVar13 - 0x14);
    }
  }
  if (_DAT_150b75ac5 == (*(uint *)((longlong)puVar13 + 0x44) ^ (uint)puVar13)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)puVar13 + -8) = FUN_1407ecddc;
  FUN_1408802b0(*(uint *)((longlong)puVar13 + 0x44) ^ (uint)puVar13);
}

