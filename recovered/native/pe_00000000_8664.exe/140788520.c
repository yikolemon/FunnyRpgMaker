/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140788520 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140788520(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  ulonglong uVar12;
  byte bVar13;
  int iVar14;
  undefined8 unaff_RBX;
  ulonglong uVar15;
  uint *puVar16;
  float *pfVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong unaff_R12;
  bool bVar21;
  float10 in_ST0;
  
  uVar9 = _DAT_150b25c81;
  puVar16 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x54);
  uVar15 = (ulonglong)_DAT_150b25c81;
  uVar18 = *(uint *)(uVar15 + 0x14cc);
  puVar16[5] = uVar18;
  uVar18 = CONCAT31((int3)(uVar18 >> 8),*(undefined1 *)(ulonglong)puVar16[0x1b]);
  bVar13 = *(byte *)(ulonglong)puVar16[0x1c];
  *puVar16 = *(undefined4 *)(uVar15 + 0x2414);
  if (bVar13 == 1) {
    *(undefined1 *)((ulonglong)*puVar16 + 0x4e) = 1;
  }
  puVar16[1] = *(uint *)((ulonglong)*puVar16 + 0x28);
  if ((*(byte *)(uVar15 + 0x1e88) & 1) == 0) {
    uVar6 = 0;
  }
  else {
    puVar16[-2] = 0x20;
    puVar16[-1] = 0;
    puVar16[-4] = 0x40788578;
    puVar16[-3] = 1;
    uVar6 = FUN_14075a8ea();
    puVar16 = (uint *)(ulonglong)((int)(puVar16 + -2) + 4);
  }
  if (((char)uVar6 == '\0') && (*(char *)((ulonglong)*puVar16 + 0x4e) == '\0')) {
    return;
  }
  puVar16[10] = uVar6;
  if (*(uint *)(uVar15 + 0x2044) == puVar16[0x1a]) {
    uVar6 = puVar16[1];
    uVar12 = (ulonglong)
             CONCAT31((int3)(uVar6 >> 8),
                      (*(uint *)((ulonglong)uVar6 + 0x18) & *(uint *)((ulonglong)uVar6 + 0x1c)) ==
                      0xffffffff);
  }
  else {
    uVar12 = 0;
  }
  uVar20 = (ulonglong)*puVar16;
  uVar6 = *(uint *)(uVar20 + 0x48);
  puVar16[7] = *(uint *)(uVar15 + 0x1e58);
  puVar16[8] = *(uint *)(uVar15 + 0x1e5c);
  puVar16[6] = *(uint *)(uVar20 + 0x30);
  if (*(char *)(uVar20 + 0x4d) == '\0') {
    if (*(int *)((ulonglong)*puVar16 + 4) < 0) {
      puVar16[4] = (uint)uVar12;
      puVar16[2] = uVar18;
      puVar16[-2] = 0;
      puVar16[-1] = 0;
      puVar16[-4] = 0x407885f1;
      puVar16[-3] = 1;
      uVar7 = FUN_1407520ca();
      puVar16 = (uint *)(ulonglong)((int)(puVar16 + -2) + 4);
      uVar18 = *(uint *)((ulonglong)*puVar16 + 8);
      if (uVar18 != 0) {
        uVar9 = *puVar16;
        *(ulonglong *)(puVar16 + -2) = (ulonglong)(uint)(*(int *)(ulonglong)uVar9 * 0x18);
        *(ulonglong *)(puVar16 + -4) = (ulonglong)uVar18;
        *(ulonglong *)(puVar16 + -6) = (ulonglong)uVar7;
        *puVar16 = uVar7;
        puVar16[-8] = 0x40788618;
        puVar16[-7] = 1;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(puVar16 + -6) + 0xc) - 8) =
             *(undefined8 *)((int *)(ulonglong)uVar9 + 2);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(puVar16 + -6) + 0xc) - 0x10) = &UNK_140788623;
        FUN_14075219b();
      }
      uVar18 = *puVar16;
      *(uint *)((ulonglong)uVar18 + 8) = uVar7;
      *(undefined4 *)((ulonglong)uVar18 + 4) = 0;
      uVar18 = puVar16[2];
      uVar12 = (ulonglong)puVar16[4];
    }
    uVar7 = *puVar16;
    *(undefined4 *)(ulonglong)uVar7 = 0;
    *(undefined1 *)((longlong)(ulonglong)uVar7 + 0x4d) = 1;
  }
  puVar16[3] = uVar6 & 0x1000;
  puVar16[9] = uVar6 & 0x2000;
  if (*(uint *)(uVar15 + 0x2204) == puVar16[0x1a]) {
    if ((puVar16[6] & 8) == 0) {
      puVar16[4] = (uint)CONCAT71((uint7)(uint3)(puVar16[0x1a] >> 8),1);
      if ((uVar6 & 0x3000) == 0x3000) goto LAB_1407886ad;
      bVar21 = *(int *)((longlong)puVar16 + unaff_R12 + 0xc) == 0;
      uVar20 = (ulonglong)bVar13;
      if (bVar21) {
        uVar20 = 0;
      }
      puVar16[4] = (uint)uVar20;
      uVar18 = uVar18 & 0xff;
      if (bVar21) {
        uVar18 = 0;
      }
      bVar21 = (char)uVar12 == '\0';
    }
    else {
      uVar20 = 0;
      uVar7 = (uint)bVar13;
      if (*(int *)(unaff_R12 + 0x24) != 0) {
        uVar7 = 0;
      }
      puVar16[4] = uVar7;
      bVar21 = (uVar6 & 0x3000) != 0 && (uVar12 & 1) == 0;
    }
  }
  else {
    puVar16[4] = (uint)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar13);
LAB_1407886ad:
    bVar21 = (char)uVar12 == '\0';
    uVar20 = uVar12;
  }
  uVar12 = (ulonglong)puVar16[0x1a];
  if (!bVar21) {
    uVar20 = (ulonglong)puVar16[1];
    *(uint *)(uVar20 + 0x18) = puVar16[7];
    *(uint *)(uVar20 + 0x1c) = puVar16[8];
    *(char *)(uVar20 + 0x10) = (char)uVar18;
  }
  uVar6 = _DAT_150b25e47;
  if (((*(int *)((ulonglong)*puVar16 + 0x44) != 0) &&
      (uVar19 = (ulonglong)_DAT_150b25e47,
      *(int *)(uVar19 + 0x2394) == *(int *)((ulonglong)*puVar16 + 0x44))) &&
     (*(char *)(uVar19 + 0x2398) == '\x01')) {
    fVar1 = *(float *)(uVar15 + 0x1e8c);
    fVar2 = *(float *)(uVar15 + 0x1e90);
    fVar3 = *(float *)(uVar15 + 0x1e94);
    fVar4 = *(float *)(uVar15 + 0x1e98);
    cVar5 = *(char *)((ulonglong)puVar16[5] + 0x1a4);
    puVar16[2] = uVar18;
    if ((cVar5 == '\0') && (uVar18 = *(uint *)(uVar15 + 0x2308), uVar18 != 0)) {
      uVar7 = *(uint *)((ulonglong)uVar18 + 0x48);
      uVar20 = (ulonglong)uVar7;
      if (uVar7 != 0xffffffff) {
        puVar16[0xd] = (uint)fVar2;
        puVar16[0xe] = (uint)fVar4;
        puVar16[0xf] = (uint)fVar3;
        puVar16[0x10] = uVar6;
        bVar21 = (*(byte *)(uVar15 + 0x1e85) & 2) != 0;
        uVar6 = puVar16[5] + 0x28c;
        if (bVar21) {
          uVar6 = uVar9 + 0x1ebc;
        }
        fVar2 = *(float *)((ulonglong)*(uint *)((ulonglong)uVar18 + 0x10) + 8 +
                          (ulonglong)(uVar7 * 0x74));
        uVar18 = puVar16[5] + 0x294;
        if (bVar21) {
          uVar18 = uVar9 + 0x1ec4;
        }
        fVar3 = *(float *)(ulonglong)uVar6;
        fVar4 = *(float *)(ulonglong)uVar18;
        pfVar17 = (float *)(ulonglong)((int)puVar16 - 8);
        if ((fVar3 == fVar4) && (!NAN(fVar3) && !NAN(fVar4))) {
          pfVar17[1] = fVar2;
          *pfVar17 = fVar1;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(pfVar17 + -2) = &UNK_140788843;
          FUN_140755a9a();
        }
        pfVar17[1] = fVar3;
        *pfVar17 = fVar2;
        pfVar17[0xd] = fVar1;
        pfVar17[0xe] = fVar4;
        pfVar17[-2] = 3.883293;
        pfVar17[-1] = 1.4013e-45;
        FUN_14074225a();
        pfVar17[1] = (float)in_ST0;
        *pfVar17 = pfVar17[0xd];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(pfVar17 + -2) = &UNK_1407887f3;
        FUN_140755a9a();
      }
    }
    if (((*(float *)(uVar19 + 0x2410) <= fVar2) ||
        (fVar4 < *(float *)(uVar19 + 0x2408) || fVar4 == *(float *)(uVar19 + 0x2408))) ||
       (*(float *)(uVar19 + 0x240c) <= fVar1)) {
      bVar21 = false;
    }
    else {
      bVar21 = *(float *)(uVar19 + 0x2404) <= fVar3 && fVar3 != *(float *)(uVar19 + 0x2404);
    }
    if (((*(float *)(uVar19 + 0x2400) <= fVar2) ||
        (fVar4 < *(float *)(uVar19 + 0x23f8) || fVar4 == *(float *)(uVar19 + 0x23f8))) ||
       (*(float *)(uVar19 + 0x23fc) <= fVar1)) {
      uVar20 = 0;
    }
    else {
      uVar20 = CONCAT71((int7)(uVar20 >> 8),
                        *(float *)(uVar19 + 0x23f4) <= fVar3 && fVar3 != *(float *)(uVar19 + 0x23f4)
                       );
    }
    bVar13 = (byte)uVar20;
    uVar18 = puVar16[2];
    if (((byte)(bVar13 ^ 1 | bVar21) != 1) ||
       (uVar20 = uVar20 & 0xffffffffffffff00, (bVar13 == 0 && bVar21 == true) && (uVar18 & 1) == 0))
    {
      uVar9 = puVar16[1];
      if ((*(int *)((ulonglong)uVar9 + 0xc) < 1) && (*(char *)(uVar19 + 0x239b) == '\x01')) {
        *(undefined1 *)(uVar19 + 0x239b) = 0;
        puVar16[4] = (uint)CONCAT71((uint7)(uint3)(uVar9 >> 8),1);
      }
      else {
        puVar16[2] = (uint)((ulonglong)uVar18 ^ 1);
        uVar20 = (ulonglong)puVar16[8];
        *(ulonglong *)(puVar16 + -2) = uVar20;
        *(ulonglong *)(puVar16 + -4) = (ulonglong)puVar16[6];
        *(ulonglong *)(puVar16 + -6) = uVar20;
        *(ulonglong *)(puVar16 + -8) = (ulonglong)puVar16[6];
        puVar16[-10] = 1;
        puVar16[-9] = 0;
        *(ulonglong *)(puVar16 + -0xc) = ((ulonglong)uVar18 ^ 1) & 0xff;
        *(undefined8 *)(puVar16 + -0xe) = *(undefined8 *)(puVar16 + -6);
        puVar16[-0x10] = 0x40788958;
        puVar16[-0xf] = 1;
        FUN_1407a2d54();
        puVar16 = (uint *)(ulonglong)((int)(puVar16 + -0xe) + 0x1c);
      }
      uVar18 = *(uint *)((longlong)puVar16 + 4);
      uVar9 = *(uint *)((ulonglong)uVar18 + 0xc);
      *(undefined8 *)((longlong)puVar16 + -8) = 1;
      *(ulonglong *)((longlong)puVar16 + -0x10) = (ulonglong)uVar9;
      *(undefined8 *)((longlong)puVar16 + -0x18) = 0x14078896b;
      uVar8 = FUN_140753b3a();
      puVar16 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar16 + -0x10) + 8);
      *(undefined4 *)((ulonglong)uVar18 + 0xc) = uVar8;
      uVar18 = *(uint *)((longlong)puVar16 + 8);
    }
    uVar12 = (ulonglong)*(uint *)((longlong)puVar16 + 0x68);
  }
  iVar14 = (int)uVar12;
  if ((char)*(undefined4 *)((longlong)puVar16 + 0x28) == '\0') {
LAB_1407889ce:
    if (*(char *)((longlong)puVar16 + 0x10) != '\0') {
      *(uint *)((longlong)puVar16 + 0xc) = *(uint *)((longlong)puVar16 + 0xc) >> 0xc;
      uVar9 = *(uint *)((longlong)puVar16 + 0x24) >> 0xd;
      goto LAB_1407889e1;
    }
    *(undefined4 *)((longlong)puVar16 + 0x14) = 0;
    uVar6 = uVar18;
  }
  else {
    *(undefined8 *)((longlong)puVar16 + -8) = 0;
    *(undefined8 *)((longlong)puVar16 + -0x10) = 1;
    *(undefined8 *)((longlong)puVar16 + -0x18) = 0x14078898c;
    cVar5 = FUN_14075b64a();
    puVar16 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar16 + -0x10) + 8);
    if ((cVar5 == '\0') || ((*(uint *)((longlong)puVar16 + 0x18) & 0x20008) != 0))
    goto LAB_1407889ce;
    if ((*(int *)(uVar15 + 0x1528) != 0) && (*(int *)(uVar15 + 0x1528) != iVar14)) {
      *(undefined8 *)((longlong)puVar16 + -8) = 0x1407889b3;
      FUN_14075a7a8();
    }
    *(undefined8 *)((longlong)puVar16 + -8) = *(undefined8 *)((longlong)puVar16 + 0x14);
    *(ulonglong *)((longlong)puVar16 + -0x10) = uVar12;
    *(undefined8 *)((longlong)puVar16 + -0x18) = 0x1407889bd;
    FUN_14076f087();
    puVar16 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar16 + -0x10) + 8);
    if ((char)uVar18 != '\0' || *(char *)((longlong)puVar16 + 0x10) != '\0') goto LAB_1407889ce;
    *(undefined4 *)((longlong)puVar16 + 0xc) = 0;
    uVar9 = 0;
LAB_1407889e1:
    if (*(int *)(uVar15 + 0x2058) == iVar14) {
      if ((*(byte *)(uVar15 + 0x2064) & 1) != 0) {
        puVar16[5] = (uint)CONCAT71((int7)(uVar20 >> 8),1);
        uVar6 = 1;
        if ((char)uVar18 != '\0') goto LAB_140788bdb;
      }
LAB_140788a1a:
      uVar6 = *(uint *)(uVar15 + 0x208c);
      bVar13 = (byte)puVar16[6];
    }
    else {
      if (*(int *)(uVar15 + 0x2204) == iVar14) goto LAB_140788a1a;
      uVar6 = 0;
      bVar13 = *(byte *)((longlong)puVar16 + unaff_R12 + 0x18);
    }
    puVar16[2] = uVar18;
    if (((bVar13 & 0xc0) != 0) && (*(char *)(uVar15 + 0x2398) == '\0')) {
      puVar16[9] = uVar9;
      uVar9 = puVar16[9];
      if ((uVar6 == 1 && *(char *)(uVar15 + 0x2399) == '\0') && (*(short *)(uVar15 + 0xb22) == 1)) {
        uVar8 = *(undefined4 *)((ulonglong)*puVar16 + 0x44);
        *(undefined8 *)(puVar16 + -2) = *(undefined8 *)(puVar16 + 8);
        puVar16[-4] = 0x40788a6c;
        puVar16[-3] = 1;
        FUN_1407a2c8a(uVar8,puVar16[7]);
        uVar9 = puVar16[8];
        uVar18 = puVar16[1];
        puVar16 = (uint *)(ulonglong)((int)(puVar16 + -2) + 4);
      }
    }
    if ((*(byte *)((longlong)puVar16 + 0x18) & 0x10) == 0) {
      if ((*(byte *)((longlong)puVar16 + 0x18) & 1) == 0) {
        if (uVar6 == 1) {
          if (*(char *)((longlong)puVar16 + 0xc) != '\0') goto LAB_140788ae7;
LAB_140788ab1:
          bVar13 = (byte)*(undefined4 *)((longlong)puVar16 + 0x18) >> 5 & (byte)uVar18;
        }
        else {
          if ((*(int *)(uVar15 + 0x2058) == iVar14) && (*(char *)((longlong)puVar16 + 0xc) == '\0'))
          goto LAB_140788ab1;
          if (((uVar6 & 0xfffffffe) != 2) || ((char)uVar9 == '\0')) goto LAB_140788ae7;
          bVar13 = *(byte *)((longlong)puVar16 + 0xc);
        }
        if (bVar13 != 0) goto LAB_140788ae7;
      }
      *(undefined8 *)((longlong)puVar16 + -8) = 0;
      *(undefined8 *)((longlong)puVar16 + -0x10) = *(undefined8 *)((longlong)puVar16 + -4);
      *(undefined8 *)((longlong)puVar16 + -0x18) = 0x140788ae2;
      FUN_1407a273a();
      puVar16 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar16 + -0x10) + 8);
    }
LAB_140788ae7:
    if (((char)uVar9 == '\0') || ((puVar16[6] & 1) != 0)) {
      uVar12 = (ulonglong)
               CONCAT31((int3)(-(uint)((puVar16[6] & 8) != 0) >> 8),
                        ((byte)-(uint)((puVar16[6] & 8) != 0) | (byte)puVar16[3]) & (byte)puVar16[2]
                       ) ^ 1;
      uVar9 = puVar16[7];
      uVar18 = puVar16[1];
      *(uint *)((ulonglong)uVar18 + 0x18) = uVar9;
      uVar6 = puVar16[8];
      *(uint *)((ulonglong)uVar18 + 0x1c) = uVar6;
      uVar20 = 0;
      *(undefined4 *)((longlong)puVar16 + unaff_R12 + 0x14) = param_3;
      puVar16[2] = (uint)uVar12;
      uVar18 = uVar6;
    }
    else {
      uVar18 = *(uint *)((ulonglong)puVar16[1] + 0x18);
      uVar9 = *(uint *)((ulonglong)puVar16[1] + 0x1c);
      uVar6 = puVar16[8];
      uVar7 = puVar16[7];
      if ((uVar18 & uVar9) == 0xffffffff) {
        uVar18 = puVar16[1];
        *(uint *)((ulonglong)uVar18 + 0x18) = uVar7;
        *(uint *)((ulonglong)uVar18 + 0x1c) = uVar6;
        uVar18 = uVar7;
        uVar9 = uVar6;
      }
      puVar16[4] = uVar9;
      if ((puVar16[6] & 8) == 0) {
        uVar12 = 1;
        if (((char)puVar16[3] != '\0') &&
           (cVar5 = *(char *)((ulonglong)puVar16[1] + 0x10), cVar5 != -1)) {
LAB_140788b8c:
          uVar12 = (ulonglong)(cVar5 != '\0');
        }
      }
      else {
        if (*(char *)((ulonglong)*puVar16 + 0x4f) == '\x01') {
          cVar5 = *(char *)((ulonglong)puVar16[1] + 0x10);
          goto LAB_140788b8c;
        }
        uVar12 = (ulonglong)(byte)((byte)puVar16[2] ^ 1);
      }
      puVar16[5] = uVar18;
      uVar20 = (ulonglong)*(byte *)((ulonglong)*puVar16 + 0x51) | 1;
      uVar6 = puVar16[8];
      uVar9 = puVar16[7];
      uVar18 = puVar16[4];
    }
    *(ulonglong *)(puVar16 + -2) = (ulonglong)uVar6;
    *(ulonglong *)(puVar16 + -4) = (ulonglong)uVar9;
    *(ulonglong *)(puVar16 + -6) = (ulonglong)uVar18;
    *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(puVar16 + 2);
    *(ulonglong *)(puVar16 + -10) = uVar20;
    *(ulonglong *)(puVar16 + -0xc) = uVar12 & 0xff;
    *(undefined8 *)(puVar16 + -0xe) = *(undefined8 *)(puVar16 + -6);
    puVar16[-0x10] = 0x40788bc8;
    puVar16[-0xf] = 1;
    uVar10 = FUN_1407a2d54();
    puVar16 = (uint *)(ulonglong)((int)(puVar16 + -0xe) + 0x1c);
    *(int *)((longlong)puVar16 + 0x14) = (int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    uVar12 = (ulonglong)*(uint *)((longlong)puVar16 + 0x68);
    uVar6 = *(uint *)((longlong)puVar16 + 8);
  }
LAB_140788bdb:
  uVar11 = (undefined1)uVar6;
  if (*(uint *)((ulonglong)puVar16[1] + 0x1c) == puVar16[8] &&
      *(uint *)((ulonglong)puVar16[1] + 0x18) == puVar16[7]) {
    *(undefined1 *)((ulonglong)puVar16[1] + 0x10) = uVar11;
  }
  uVar18 = puVar16[0x1c];
  uVar9 = puVar16[0x1b];
  if (*(int *)(uVar15 + 0x2044) == (int)uVar12) {
    uVar15 = (ulonglong)puVar16[1];
    *(uint *)(uVar15 + 0x20) = puVar16[7];
    *(uint *)(uVar15 + 0x24) = puVar16[8];
    *(undefined1 *)(uVar15 + 0x11) = uVar11;
  }
  else if (puVar16[8] != *(uint *)((ulonglong)puVar16[1] + 0x24) ||
           puVar16[7] != *(uint *)((ulonglong)puVar16[1] + 0x20)) goto LAB_140788c3c;
  *(undefined1 *)((ulonglong)*puVar16 + 0x50) = 1;
LAB_140788c3c:
  *(undefined1 *)(ulonglong)uVar9 = uVar11;
  *(char *)(ulonglong)uVar18 = (char)puVar16[5];
  return;
}

