/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140785e29 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140785e29(void)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  float *pfVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar26;
  undefined1 auVar25 [16];
  ulonglong uVar13;
  
  uVar4 = _DAT_150b2358d;
  puVar11 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x50);
  uVar23 = (ulonglong)_DAT_150b2358d;
  *(undefined1 *)((ulonglong)*(uint *)(uVar23 + 0x14cc) + 0xfb) = 1;
  uVar21 = (ulonglong)*(uint *)(uVar23 + 0x14cc);
  uVar6 = 0;
  if (*(char *)(uVar21 + 0xfe) == '\0') {
    uVar9 = (ulonglong)*(uint *)(puVar11 + 100);
    *(undefined8 *)(puVar11 + -8) = 0;
    *(ulonglong *)(puVar11 + -0x10) = uVar9;
    *(undefined8 *)(puVar11 + -0x18) = 0x140785e70;
    uVar6 = FUN_14075a0a4(uVar21);
    *(undefined4 *)(puVar11 + -0xc) = uVar6;
    *(undefined8 *)(puVar11 + -0x18) = 0;
    *(ulonglong *)(puVar11 + -0x20) = uVar9;
    *(undefined8 *)(puVar11 + -0x28) = 0x140785e7b;
    uVar8 = FUN_14075544d();
    uVar12 = (ulonglong)((int)(puVar11 + -0x20) + 8);
    *(undefined8 *)(uVar12 - 8) = 0xffffffffbf800000;
    *(undefined8 *)(uVar12 - 0x10) = 0;
    *(int *)(uVar12 - 8) = (int)uVar8;
    *(undefined8 *)(uVar12 - 0x18) = uVar8;
    *(ulonglong *)(uVar12 - 0x20) = uVar9;
    *(ulonglong *)(uVar12 - 0x28) = uVar12 + 0x44 & 0xffffffff;
    *(undefined8 *)(uVar12 - 0x30) = 0x140785e94;
    FUN_1407559fe();
    iVar10 = (int)(uVar12 - 0x28);
    uVar13 = (ulonglong)(iVar10 + 0x14);
    fVar26 = *(float *)(uVar21 + 0x144);
    auVar25 = ZEXT416((uint)*(float *)(uVar21 + 0x148));
    fVar24 = *(float *)(uVar23 + 0xd10);
    if (((short)*(undefined4 *)(uVar13 + 0x6c) < 0) && (fVar24 < *(float *)(uVar21 + 0x17c))) {
      auVar25 = ZEXT416((uint)(*(float *)(uVar21 + 0x148) + (*(float *)(uVar21 + 0x17c) - fVar24)));
    }
    *(undefined1 (*) [16])(uVar13 + 8) = auVar25;
    fVar1 = *(float *)(uVar23 + 0xd0c);
    fVar2 = *(float *)(uVar13 + 0x44);
    uVar6 = *(undefined4 *)(ulonglong)*(uint *)(uVar13 + 0x68);
    uVar7 = ((undefined4 *)(ulonglong)*(uint *)(uVar13 + 0x68))[1];
    puVar14 = (undefined4 *)(uVar12 - 0x28 & 0xffffffff);
    puVar14[4] = fVar24 + fVar24 + *(float *)(uVar13 + 0x48);
    puVar14[3] = fVar1 + fVar1 + fVar2;
    puVar14[2] = uVar7;
    puVar14[1] = uVar6;
    uVar6 = SUB84(puVar14 + 0x14,0);
    *puVar14 = uVar6;
    *(undefined8 *)(puVar14 + -2) = 0x140785f20;
    FUN_1407642f7();
    pfVar22 = (float *)((ulonglong)(iVar10 + 0x14) + 0x2c & 0xffffffff);
    *pfVar22 = fVar26;
    fVar24 = (float)*(undefined8 *)((ulonglong)(iVar10 + 0x14) + 8);
    pfVar22[1] = fVar24;
    uVar8 = *(undefined8 *)((ulonglong)(puVar14 + 0x14) & 0xffffffff);
    *(ulonglong *)(pfVar22 + 2) =
         CONCAT44(fVar24 + (float)((ulonglong)uVar8 >> 0x20),fVar26 + (float)uVar8);
    puVar15 = (undefined4 *)(ulonglong)(iVar10 + 0xc);
    puVar15[1] = *(undefined4 *)(uVar23 + 0xd10);
    *puVar15 = uVar6;
    *(undefined8 *)(puVar15 + -2) = 0x140785f61;
    FUN_1407646e0();
    uVar16 = (ulonglong)(iVar10 + 0x14);
    uVar6 = 0;
    *(undefined8 *)(uVar16 - 8) = 0;
    *(undefined8 *)(uVar16 - 0x10) = 0;
    uVar21 = (ulonglong)*(uint *)(uVar16 - 4);
    *(ulonglong *)(uVar16 - 0x18) = uVar21;
    *(float **)(uVar16 - 0x20) = pfVar22;
    *(undefined8 *)(uVar16 - 0x28) = 0x140785f73;
    cVar5 = FUN_1407648a8();
    puVar11 = (undefined1 *)(ulonglong)((int)(uVar16 - 0x20) + 0x10);
    if (cVar5 != '\0') {
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + 0x6c);
      *(byte **)(puVar11 + -0x10) = (byte *)((ulonglong)(puVar11 + 0x2a) & 0xffffffff);
      *(char **)(puVar11 + -0x18) = (char *)((ulonglong)(puVar11 + 0x2b) & 0xffffffff);
      *(ulonglong *)(puVar11 + -0x20) = uVar21;
      *(ulonglong *)(puVar11 + -0x28) = (ulonglong)(puVar11 + 0x1c) & 0xffffffff;
      *(undefined8 *)(puVar11 + -0x30) = 0x140785f97;
      uVar6 = FUN_14078564e();
      uVar17 = (ulonglong)((int)(puVar11 + -0x28) + 0x14);
      uVar9 = 0x16;
      if (*(char *)((ulonglong)(puVar11 + 0x2b) & 0xffffffff) != '\0') {
        uVar9 = (ulonglong)(*(byte *)((ulonglong)(puVar11 + 0x2a) & 0xffffffff) + 0x17);
      }
      *(undefined8 *)(uVar17 - 8) = 0x3f800000;
      *(ulonglong *)(uVar17 - 0x10) = uVar9;
      *(undefined8 *)(uVar17 - 0x18) = 0x140785fb9;
      uVar7 = FUN_140754a09();
      uVar18 = (ulonglong)((int)(uVar17 - 0x10) + 8);
      *(undefined8 *)(uVar18 - 8) = 0;
      *(ulonglong *)(uVar18 - 0x10) = uVar21;
      *(ulonglong *)(uVar18 - 0x18) = uVar18 + 0x24 & 0xffffffff;
      *(undefined8 *)(uVar18 - 0x20) = 0x140785fcb;
      FUN_14075612e();
      iVar10 = (int)(uVar18 - 0x18);
      uVar8 = *(undefined8 *)((ulonglong)(iVar10 + 0xc) + 0x2c);
      uVar3 = *(undefined8 *)((ulonglong)(iVar10 + 0xc) + 0x34);
      puVar19 = (undefined8 *)(ulonglong)(iVar10 - 0x10);
      *(undefined4 *)(puVar19 + 3) = *(undefined4 *)(uVar23 + 0xd14);
      *(undefined4 *)(puVar19 + 2) = uVar7;
      *puVar19 = uVar8;
      puVar19[1] = uVar3;
      *(undefined4 *)((longlong)puVar19 + 0x14) = 1;
      puVar19[-1] = 0x140785ff9;
      FUN_140755db9();
      puVar20 = (undefined1 *)(ulonglong)(iVar10 + 0xc);
      uVar21 = (longlong)puVar20 + 0x2c;
      if (*(char *)(uVar23 + 0x2748) == '\x01') {
        *(undefined8 *)(puVar20 + -8) = 0x1033b90e;
        *(undefined8 *)(puVar20 + -0x10) = 0x1033b941;
        *(undefined8 *)(puVar20 + -0x18) = 0x140786018;
        FUN_140770236();
        puVar20 = (undefined1 *)(ulonglong)((int)(puVar20 + -0x10) + 8);
      }
      uVar8 = *(undefined8 *)(puVar20 + 0x2c);
      fVar24 = (float)*(undefined8 *)(uVar23 + 0xd0c);
      fVar26 = (float)((ulonglong)*(undefined8 *)(uVar23 + 0xd0c) >> 0x20);
      *(undefined8 *)((ulonglong)(puVar20 + 0x20) & 0xffffffff) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(puVar20 + 0x34) >> 0x20) - fVar26,
                    (float)*(undefined8 *)(puVar20 + 0x34) - fVar24);
      *(undefined8 *)((ulonglong)(puVar20 + 0x18) & 0xffffffff) =
           CONCAT44((float)((ulonglong)uVar8 >> 0x20) + fVar26,(float)uVar8 + fVar24);
      *(ulonglong *)(puVar20 + -8) = uVar21 & 0xffffffff;
      *(ulonglong *)(puVar20 + -0x10) = (ulonglong)(uVar4 + 0xdb0);
      *(ulonglong *)(puVar20 + -0x18) = (ulonglong)(puVar20 + 0x3c) & 0xffffffff;
      *(undefined8 *)(puVar20 + -0x20) = *(undefined8 *)(puVar20 + -0xc);
      *(undefined8 *)(puVar20 + -0x28) = *(undefined8 *)(puVar20 + 0x54);
      *(undefined8 **)(puVar20 + -0x30) = (undefined8 *)((ulonglong)(puVar20 + 0x20) & 0xffffffff);
      *(undefined8 **)(puVar20 + -0x38) = (undefined8 *)((ulonglong)(puVar20 + 0x18) & 0xffffffff);
      *(undefined8 *)(puVar20 + -0x40) = 0x14078605f;
      FUN_140755ac2();
      puVar11 = (undefined1 *)(ulonglong)((int)(puVar20 + -0x38) + 0x1c);
    }
  }
  if (_DAT_150b0ed6e == (*(uint *)(puVar11 + 0x4c) ^ (uint)puVar11)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar11 + -8) = FUN_140786087;
  FUN_1408802b0(*(uint *)(puVar11 + 0x4c) ^ (uint)puVar11);
}

