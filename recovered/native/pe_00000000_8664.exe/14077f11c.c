/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077f11c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14077f11c(undefined8 param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  char *pcVar7;
  undefined8 uVar8;
  byte bVar9;
  ulonglong in_RCX;
  char *unaff_RBX;
  uint *puVar10;
  ulonglong uVar11;
  longlong unaff_RDI;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float fVar12;
  float fVar13;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  puVar10 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x84);
  uVar11 = in_RCX & 0xffffffff;
  pcVar7 = (char *)((ulonglong)_DAT_8489e03110388d00 & 0xffffffffffffff80);
  cVar6 = (char)pcVar7;
  *pcVar7 = *pcVar7 + cVar6;
  pbVar1 = (byte *)(unaff_RBX + 0x39d74c3d);
  bVar2 = *pbVar1;
  bVar9 = (byte)in_RCX;
  *pbVar1 = *pbVar1 + bVar9;
  unaff_RBX[0x14cc87] = unaff_RBX[0x14cc87] + bVar9 + CARRY1(bVar2,bVar9);
  unaff_RBX[0x20508f] = unaff_RBX[0x20508f] + bVar9;
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)unaff_RBX >> 8);
  pcVar7[in_RCX - 0x7af10000] = (char)unaff_RBX;
  pbVar1 = (byte *)(unaff_RDI + 1);
  *pcVar7 = *pcVar7 + cVar6;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar9;
  *param_2 = *param_2 + cVar6 + CARRY1(bVar2,bVar9);
  puVar10[0x1c] = (uint)param_1;
  puVar10[0x1d] = (uint)((ulonglong)param_1 >> 0x20);
  puVar10[0x1e] = in_XMM0_Dc;
  puVar10[0x1f] = in_XMM0_Dd;
  uVar8 = *(undefined8 *)(unaff_RDI + 0x20f5);
  fVar22 = (float)uVar8;
  uVar15 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uVar16 = 0;
  uVar18 = 0;
  uVar3 = *(undefined8 *)(unaff_RDI + 0x20fd);
  fVar20 = (float)uVar3;
  uVar24 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar25 = 0;
  uVar21 = 0;
  *(int *)(unaff_RDI + 0x2115) = *(int *)(unaff_RDI + 0x2115) + 1;
  if (*(int *)(pcVar7 + 0x3a0) == *(int *)(unaff_RDI + 0x2049)) {
    if ((((float)puVar10[0x1d] <= *(float *)(pcVar7 + 0x298) &&
          *(float *)(pcVar7 + 0x298) != (float)puVar10[0x1d]) &&
        (*(float *)(pcVar7 + 0x290) <= (float)puVar10[0x1f] &&
         (float)puVar10[0x1f] != *(float *)(pcVar7 + 0x290))) &&
       ((float)puVar10[0x1c] <= *(float *)(pcVar7 + 0x294) &&
        *(float *)(pcVar7 + 0x294) != (float)puVar10[0x1c])) {
      uVar23 = (int)pcVar7 + 0x28c;
      if (*(float *)(ulonglong)uVar23 <= (float)puVar10[0x1e] &&
          (float)puVar10[0x1e] != *(float *)(ulonglong)uVar23) {
        *puVar10 = uVar23;
        *(undefined8 *)(puVar10 + 3) = uVar8;
        puVar10[5] = 0;
        puVar10[6] = 0;
        *(undefined8 *)(puVar10 + 0x14) = uVar3;
        puVar10[0x16] = 0;
        puVar10[0x17] = 0;
        puVar10[-2] = 0x4077f1eb;
        puVar10[-1] = 1;
        FUN_14076793a((ulonglong)(puVar10 + 0x1c) & 0xffffffff);
        puVar10 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x88);
        fVar20 = *(float *)((longlong)puVar10 + 0x50);
        uVar24 = *(undefined4 *)((longlong)puVar10 + 0x54);
        uVar25 = *(undefined4 *)((longlong)puVar10 + 0x58);
        uVar21 = *(undefined4 *)((longlong)puVar10 + 0x5c);
        fVar22 = *(float *)((longlong)puVar10 + 0xc);
        uVar15 = *(undefined4 *)((longlong)puVar10 + 0x10);
        uVar16 = *(undefined4 *)((longlong)puVar10 + 0x14);
        uVar18 = *(undefined4 *)((longlong)puVar10 + 0x18);
        goto LAB_14077f180;
      }
    }
    uVar8 = 0;
    goto LAB_14077f1fc;
  }
LAB_14077f180:
  if (fVar22 <= (float)puVar10[0x1e]) {
    fVar14 = 0.0;
    if (fVar20 < (float)puVar10[0x1c]) {
      fVar14 = (float)puVar10[0x1c] - fVar20;
    }
  }
  else {
    fVar14 = (float)puVar10[0x1e] - fVar22;
  }
  *(undefined1 (*) [16])(puVar10 + 0xc) = ZEXT416((uint)fVar14);
  puVar10[3] = (uint)fVar22;
  puVar10[4] = uVar15;
  puVar10[5] = uVar16;
  puVar10[6] = uVar18;
  puVar10[8] = uVar15;
  puVar10[9] = uVar15;
  puVar10[10] = uVar15;
  puVar10[0xb] = uVar15;
  puVar10[0x14] = (uint)fVar20;
  puVar10[0x15] = uVar24;
  puVar10[0x16] = uVar25;
  puVar10[0x17] = uVar21;
  puVar10[0x18] = uVar24;
  puVar10[0x19] = uVar24;
  puVar10[0x1a] = uVar24;
  puVar10[0x1b] = uVar24;
  puVar10[2] = 0x3f4ccccd;
  puVar10[1] = uVar24;
  *puVar10 = uVar15;
  *(undefined8 *)(puVar10 + -2) = 0x14077f26d;
  FUN_140742235();
  puVar10[0x13] = (uint)(float)in_ST0;
  puVar10[7] = puVar10[0x13];
  puVar10[2] = 0x3e4ccccd;
  puVar10[1] = puVar10[0x18];
  *puVar10 = puVar10[8];
  *(undefined8 *)(puVar10 + -2) = 0x14077f2a0;
  FUN_140742235();
  puVar10[0x12] = (uint)(float)in_ST1;
  puVar10[0x18] = puVar10[0x12];
  puVar10[2] = 0x3f4ccccd;
  puVar10[1] = puVar10[0x1f];
  *puVar10 = puVar10[0x1d];
  *(undefined8 *)(puVar10 + -2) = 0x14077f2d0;
  FUN_140742235();
  puVar10[0x11] = (uint)(float)in_ST2;
  *(undefined1 (*) [16])(puVar10 + 8) = ZEXT416(puVar10[0x11]);
  puVar10[2] = 0x3e4ccccd;
  puVar10[1] = puVar10[0x1f];
  *puVar10 = puVar10[0x1d];
  *(undefined8 *)(puVar10 + -2) = 0x14077f2ff;
  FUN_140742235();
  fVar20 = (float)puVar10[0x18];
  fVar22 = (float)puVar10[8];
  uVar23 = puVar10[9];
  uVar24 = puVar10[10];
  uVar25 = puVar10[0xb];
  puVar10[0x10] = (uint)(float)in_ST3;
  if (fVar22 < fVar20) {
LAB_14077f324:
    fVar22 = fVar22 - fVar20;
    fVar20 = (float)puVar10[0xc];
    uVar21 = puVar10[0xd];
    uVar15 = puVar10[0xe];
    uVar16 = puVar10[0xf];
    fVar14 = (float)puVar10[3];
    fVar27 = (float)puVar10[4];
    fVar17 = (float)puVar10[5];
    fVar19 = (float)puVar10[6];
    bVar5 = fVar22 != 0.0;
    if (((fVar20 != 0.0) || (NAN(fVar20))) && ((fVar22 != 0.0 || (NAN(fVar22))))) {
      fVar20 = fVar20 / _DAT_150a38292 + *(float *)((ulonglong)(0.0 < fVar20) * 4 + 0x102b90e0);
      bVar5 = true;
    }
  }
  else {
    fVar22 = (float)puVar10[0x10];
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0;
    fVar20 = (float)puVar10[7];
    if (fVar20 < fVar22) goto LAB_14077f324;
    fVar22 = 0.0;
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0;
    bVar5 = false;
    fVar20 = (float)puVar10[0xc];
    uVar21 = puVar10[0xd];
    uVar15 = puVar10[0xe];
    uVar16 = puVar10[0xf];
    fVar14 = (float)puVar10[3];
    fVar27 = (float)puVar10[4];
    fVar17 = (float)puVar10[5];
    fVar19 = (float)puVar10[6];
  }
  fVar12 = ((float)*(undefined8 *)(puVar10 + 0x1e) + (float)*(undefined8 *)(puVar10 + 0x1c)) -
           (fVar14 + (float)puVar10[0x14]);
  fVar13 = ((float)((ulonglong)*(undefined8 *)(puVar10 + 0x1e) >> 0x20) +
           (float)((ulonglong)*(undefined8 *)(puVar10 + 0x1c) >> 0x20)) -
           (fVar27 + (float)puVar10[0x15]);
  fVar27 = (float)((uint)fVar20 & _DAT_150a0a7b5) + (float)((uint)fVar22 & _DAT_150a0a7b5);
  fVar14 = (float)((uint)fVar13 & uRam0000000150a0a7b9) +
           (float)((uint)fVar12 & uRam0000000150a0a7b9);
  fVar28 = (float)((uint)(0.0 - (fVar17 + (float)puVar10[0x16])) & uRam0000000150a0a7bd) +
           (float)(uVar23 & uRam0000000150a0a7bd);
  fVar29 = (float)((uint)(0.0 - (fVar19 + (float)puVar10[0x17])) & uRam0000000150a0a7c1) +
           (float)((uint)fVar13 & uRam0000000150a0a7c1);
  if (((bVar5) || (fVar20 != 0.0)) || (NAN(fVar20))) {
    puVar10[0xc] = (uint)fVar20;
    puVar10[0xd] = uVar21;
    puVar10[0xe] = uVar15;
    puVar10[0xf] = uVar16;
    puVar10[8] = (uint)fVar22;
    puVar10[9] = uVar23;
    puVar10[10] = uVar24;
    puVar10[0xb] = uVar25;
    puVar10[3] = (uint)fVar27;
    puVar10[4] = (uint)fVar14;
    puVar10[5] = (uint)fVar28;
    puVar10[6] = (uint)fVar29;
    *(undefined8 *)(puVar10 + -2) = 0x14077f40b;
    uVar23 = FUN_14077f546(fVar20,fVar22);
    fVar26 = (float)puVar10[3];
    fVar14 = (float)puVar10[4];
    fVar22 = (float)puVar10[8];
    fVar20 = (float)puVar10[0xc];
    fVar17 = fVar20;
    fVar19 = fVar22;
    fVar27 = fVar26;
  }
  else {
    if ((fVar12 == 0.0) && (!NAN(fVar12))) {
      fVar26 = 0.0;
      if ((fVar13 == 0.0) && (!NAN(fVar13))) {
        uVar23 = (uint)(*(uint *)(unaff_RDI + 0x2045) <= *(uint *)(unaff_RDI + 0x1e81));
        fVar17 = 0.0;
        fVar19 = 0.0;
        goto LAB_14077f459;
      }
    }
    puVar10[0xc] = (uint)fVar20;
    puVar10[0xd] = uVar21;
    puVar10[0xe] = uVar15;
    puVar10[0xf] = uVar16;
    puVar10[8] = (uint)fVar22;
    puVar10[9] = uVar23;
    puVar10[10] = uVar24;
    puVar10[0xb] = uVar25;
    puVar10[0x14] = (uint)fVar12;
    puVar10[0x15] = (uint)fVar13;
    puVar10[0x16] = (uint)(0.0 - (fVar17 + (float)puVar10[0x16]));
    puVar10[0x17] = (uint)(0.0 - (fVar19 + (float)puVar10[0x17]));
    puVar10[3] = (uint)fVar27;
    puVar10[4] = (uint)fVar14;
    puVar10[5] = (uint)fVar28;
    puVar10[6] = (uint)fVar29;
    *(undefined8 *)(puVar10 + -2) = 0x14077f43e;
    uVar23 = FUN_14077f546();
    fVar26 = (float)puVar10[4];
    fVar22 = (float)puVar10[8];
    fVar20 = (float)puVar10[0xc];
    fVar17 = (float)puVar10[0x14];
    fVar19 = (float)puVar10[0x15];
    fVar27 = (float)puVar10[3];
    fVar14 = fVar26;
  }
LAB_14077f459:
  uVar4 = *(uint *)(unaff_RDI + 0x20e9);
  fVar12 = *(float *)(uVar11 + 0x21);
  if (uVar23 != uVar4) goto LAB_14077f4af;
  if (fVar12 <= fVar27) {
    if ((fVar27 != fVar12) || (NAN(fVar27) || NAN(fVar12))) {
LAB_14077f4af:
      uVar8 = 0;
    }
    else {
      fVar27 = *(float *)(uVar11 + 0x25);
      if (fVar27 <= fVar14) {
        if ((fVar14 == fVar27) && (!NAN(fVar14) && !NAN(fVar27))) {
          if (uVar23 < 2) {
            fVar22 = fVar20;
          }
          if (fVar22 < 0.0) goto LAB_14077f4ab;
        }
        goto LAB_14077f4af;
      }
      *(float *)(uVar11 + 0x25) = fVar14;
LAB_14077f4ab:
      uVar8 = 1;
    }
    if (((((fVar12 != _DAT_150a37e6c) || (NAN(fVar12) || NAN(_DAT_150a37e6c))) ||
         (*(float *)(uVar11 + 0x29) <= fVar26)) ||
        ((*(int *)(unaff_RDI + 0x2051) != 1 ||
         ((*(byte *)((ulonglong)*(uint *)(unaff_RDI + 0x2049) + 0xf) & 0x10) != 0)))) ||
       (((((uVar4 != 0 || (0.0 <= fVar17)) && ((uVar4 != 1 || (fVar17 <= 0.0)))) &&
         ((uVar4 != 2 || (0.0 <= fVar19)))) && ((uVar4 != 3 || (fVar19 <= 0.0))))))
    goto LAB_14077f1fc;
    *(float *)(uVar11 + 0x29) = fVar26;
  }
  else {
    *(ulonglong *)(uVar11 + 0x21) = CONCAT44(fVar14,fVar27);
  }
  uVar8 = 1;
LAB_14077f1fc:
  if (_DAT_150b07f0b == (*(uint *)((longlong)puVar10 + 0x80) ^ (uint)puVar10)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)puVar10 + -8) = FUN_14077f546;
  FUN_1408802b0(*(uint *)((longlong)puVar10 + 0x80) ^ (uint)puVar10);
}

