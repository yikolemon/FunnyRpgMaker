/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140774cb9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140774cb9(uint param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  char *pcVar14;
  byte bVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  ulonglong unaff_RBX;
  ulonglong uVar18;
  int *piVar19;
  uint uVar20;
  ulonglong unaff_RSI;
  ulonglong uVar21;
  longlong unaff_R12;
  int unaff_R13D;
  bool bVar22;
  float10 in_ST0;
  
  piVar19 = (int *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xfc);
  uVar16 = param_2 & 0xffffffff;
  pcVar14 = (char *)((ulonglong)_DAT_8489e03110388d00 & 0xfffffffffffffff8);
  *pcVar14 = *pcVar14 + (char)pcVar14;
  pbVar1 = (byte *)(unaff_RBX + 0x39d74c35);
  bVar2 = *pbVar1;
  bVar15 = (byte)param_1;
  *pbVar1 = *pbVar1 + bVar15;
  *(char *)(param_2 + 0x418b705e) = *(char *)(param_2 + 0x418b705e) + bVar15 + CARRY1(bVar2,bVar15);
  piVar19[-2] = 0x40774ce9;
  piVar19[-1] = 1;
  iVar11 = FUN_1407567d0();
  piVar19[0x3c] = iVar11;
  if (*(int *)((ulonglong)param_1 + 0x3c) == *(int *)((ulonglong)(uint)piVar19[0x44] + 0x3c) ||
      (unaff_RBX & 1) != 0) {
    iVar11 = 0;
  }
  else {
    *piVar19 = *(int *)((ulonglong)(uint)piVar19[0x44] + 0x3c);
    piVar19[-2] = 0x40774d14;
    piVar19[-1] = 1;
    iVar11 = FUN_1407567d0();
    piVar19[0x3d] = iVar11;
    iVar11 = 2;
  }
  piVar19[0x24] = param_1;
  piVar19[0x12] = iVar11;
  iVar11 = _DAT_150a2bf0b;
  bVar22 = (unaff_RBX & 1) != 0;
  iVar13 = _DAT_150a2bf0b;
  if (!bVar22) {
    iVar13 = _DAT_150a2dbd3;
  }
  *piVar19 = 0x2a;
  piVar19[1] = iVar13;
  iVar13 = _DAT_150a2dbf9;
  if (!bVar22) {
    iVar13 = _DAT_150a2bf2f;
  }
  piVar19[0xe] = iVar13;
  iVar13 = _DAT_150a2dc17;
  if (!bVar22) {
    iVar13 = _DAT_150a001a5;
  }
  piVar19[0x1b] = iVar13;
  if (bVar22) {
    piVar19[0x17] = _DAT_150a2beab;
  }
  else {
    piVar19[0x17] = iVar11;
  }
  uVar18 = (ulonglong)(uint)piVar19[0x45];
  piVar19[-2] = 0x40774da9;
  piVar19[-1] = 1;
  iVar11 = FUN_140754a09();
  piVar19[0xb] = iVar11;
  piVar19[1] = piVar19[0xe];
  *piVar19 = 0x2a;
  piVar19[-2] = 0x40774dc1;
  piVar19[-1] = 1;
  iVar11 = FUN_140754a09();
  piVar19[0x21] = iVar11;
  *piVar19 = 0x2a;
  piVar19[1] = piVar19[0x1b];
  piVar19[-2] = 0x40774ddc;
  piVar19[-1] = 1;
  iVar11 = FUN_140754a09();
  piVar19[0x20] = iVar11;
  piVar19[1] = piVar19[0x17];
  *piVar19 = 0x3c;
  piVar19[-2] = 0x40774dfb;
  piVar19[-1] = 1;
  iVar11 = FUN_140754a09();
  piVar19[0xe] = iVar11;
  if (*(uint *)((ulonglong)(uint)piVar19[0x44] + 0x434) == 0) {
    bVar22 = true;
  }
  else {
    bVar22 = 0 < *(int *)((ulonglong)*(uint *)((ulonglong)(uint)piVar19[0x44] + 0x434) + 0x24);
  }
  uVar20 = piVar19[0x24];
  uVar21 = (ulonglong)uVar20;
  cVar10 = *(char *)(uVar18 + 0xb0);
  piVar19[0xc] = (int)unaff_RSI;
  piVar19[0x11] = (int)param_2;
  if (cVar10 != '\x01') goto LAB_140775341;
  uVar3 = *(undefined8 *)(uVar18 + 0x34);
  auVar7._8_4_ = (float)*(undefined8 *)(uVar18 + 0x3c) + (float)uVar3;
  auVar7._0_8_ = uVar3;
  auVar7._12_4_ =
       (float)((ulonglong)*(undefined8 *)(uVar18 + 0x3c) >> 0x20) +
       (float)((ulonglong)uVar3 >> 0x20);
  *(undefined1 (*) [16])(piVar19 + 0x38) = auVar7;
  iVar11 = *(int *)(uVar18 + 0xb8);
  *(bool *)(piVar19 + 0x1b) = bVar22;
  if ((iVar11 == -1 & bVar22) == 1) {
    *(undefined8 *)(piVar19 + 0x17) = uVar3;
    piVar19[0x19] = 0;
    piVar19[0x1a] = 0;
    piVar19[-2] = 0x40774e73;
    piVar19[-1] = 1;
    FUN_14076d4c9();
    piVar19[0x23] = (int)(float)in_ST0;
    piVar19[0x39] = (int)((float)piVar19[0x18] + (float)piVar19[0x23]);
LAB_140774e9c:
    if (*(char *)(uVar18 + 0xb1) == '\x01') goto LAB_140774eab;
    bVar2 = *(byte *)(piVar19 + 0x1b);
  }
  else {
    if (iVar11 == -1) goto LAB_140774e9c;
LAB_140774eab:
    do {
      uVar4 = piVar19[0x3c];
      uVar17 = *(undefined4 *)((ulonglong)(uint)piVar19[0xc] + 0xdec);
      fVar8 = *(float *)(uVar21 + 0x50);
      fVar9 = *(float *)(uVar21 + 0x54);
      uVar3 = *(undefined8 *)(uVar21 + 0x58);
      piVar19[0x34] = (int)fVar8;
      piVar19[0x35] = (int)fVar9;
      piVar19[0x36] = (int)((float)uVar3 + fVar8);
      piVar19[0x37] = (int)((float)((ulonglong)uVar3 >> 0x20) + fVar9);
      piVar19[2] = uVar17;
      piVar19[1] = (int)(piVar19 + 0x34);
      *piVar19 = (int)(piVar19 + 0x38);
      *(undefined8 *)(piVar19 + -2) = 0x140774ef6;
      uVar12 = FUN_1407ecddc();
      uVar17 = *(undefined4 *)(uVar21 + 0x88);
      piVar19[4] = uVar12;
      piVar19[3] = uVar17;
      piVar19[2] = piVar19[0xb];
      piVar19[1] = (int)(piVar19 + 0x3a);
      *piVar19 = (int)(piVar19 + 0x38);
      *(undefined8 *)(piVar19 + -2) = 0x140774f25;
      FUN_1407e372a(uVar4);
      piVar19 = (int *)(ulonglong)((int)piVar19 - 0x14);
    } while (*(int *)(unaff_R12 + 0x48) != unaff_R13D);
    uVar18 = (ulonglong)(uint)piVar19[0x45];
    bVar2 = *(byte *)(uVar18 + 0xb0) & *(byte *)(piVar19 + 0x1b);
    uVar16 = (ulonglong)(uint)piVar19[0x11];
    unaff_RSI = (ulonglong)(uint)piVar19[0xc];
  }
  if (((bVar2 == 0) || (*(int *)(uVar18 + 0xb8) != -1)) || (*(char *)(uVar18 + 0xb1) != '\x01'))
  goto LAB_140775341;
  piVar19[2] = 0;
  piVar19[1] = 0;
  *piVar19 = (int)piVar19 + 0xe0;
  piVar19[-2] = 0x40774f95;
  piVar19[-1] = 1;
  FUN_1407836ab();
  *(undefined1 (*) [16])(piVar19 + 0x13) =
       ZEXT416(*(uint *)((ulonglong)(piVar19 + 0x38) & 0xffffffff));
  *(undefined1 (*) [16])(piVar19 + 0x28) =
       ZEXT416(((uint *)((ulonglong)(piVar19 + 0x38) & 0xffffffff))[1]);
  if (((int)uVar16 == 0) || (*(uint *)(uVar16 + 0x30) == 0)) {
    if ((*(byte *)(uVar21 + 0xe) & 0x80) == 0) {
      piVar19[0xb] = *(int *)(unaff_RSI + 0xd24);
      piVar19[1] = uVar20;
      goto LAB_140774ff4;
    }
  }
  else if ((*(byte *)(uVar16 + 0x11) & 0x30) == 0) {
    piVar19[0x13] =
         (int)((float)piVar19[0x13] +
              *(float *)((ulonglong)*(uint *)(uVar16 + 0x30) + 0x4c) + *(float *)(unaff_RSI + 0xd24)
              );
    piVar19[0x14] = piVar19[0x14];
    piVar19[0x15] = piVar19[0x15];
    piVar19[0x16] = piVar19[0x16];
  }
  else {
    piVar19[0xb] = *(int *)(unaff_RSI + 0xd24);
    piVar19[1] = *(int *)(ulonglong)*(uint *)(uVar16 + 0x2c);
LAB_140774ff4:
    *piVar19 = (int)(piVar19 + 0x34);
    piVar19[-2] = 0x40775003;
    piVar19[-1] = 1;
    FUN_1407a949b();
    unaff_RSI = (ulonglong)(uint)piVar19[0xc];
    piVar19[0x13] =
         (int)((float)piVar19[0x13] +
              (float)piVar19[0xb] + *(float *)((ulonglong)(piVar19 + 0x34) & 0xffffffff));
    piVar19[0x14] = piVar19[0x14];
    piVar19[0x15] = piVar19[0x15];
    piVar19[0x16] = piVar19[0x16];
  }
  uVar20 = *(uint *)((ulonglong)(uint)piVar19[0x44] + 0x434);
  iVar11 = 0;
  *(undefined4 *)(unaff_R12 + 0x40) = 0;
  if (uVar20 == 0) {
    uVar16 = 0;
    piVar19[0xf] = 0;
  }
  else {
    uVar16 = (ulonglong)*(uint *)((ulonglong)uVar20 + 0x30);
    if (*(uint *)((ulonglong)uVar20 + 0x30) == 0) {
      piVar19[0xf] = 0;
      uVar16 = 0;
    }
    else {
      iVar13 = *(int *)(uVar16 + 4);
      piVar19[0xf] = (int)CONCAT71((uint7)(uint3)(uVar20 >> 8),1);
      piVar19[0x10] = iVar13;
      if (iVar13 < 1) goto LAB_140775341;
    }
  }
  piVar19[0xd] = (int)uVar16;
  do {
    uVar20 = piVar19[0x44];
    if ((char)piVar19[0xf] == '\0') {
LAB_1407750b4:
      uVar16 = (ulonglong)uVar20;
      piVar19[0x17] = iVar11;
      piVar19[-2] = 0x407750c6;
      piVar19[-1] = 1;
      cVar10 = FUN_140783c2f(uVar16,piVar19[0x24]);
      if (cVar10 != '\0') {
        piVar19[1] = uVar20;
        *piVar19 = (int)(piVar19 + 0x32);
        piVar19[-2] = 0x407750e1;
        piVar19[-1] = 1;
        FUN_1407a949b();
        piVar19[0x34] = piVar19[0x13];
        piVar19[0x35] = piVar19[0x28];
        uVar3 = *(undefined8 *)(piVar19 + 0x32);
        *(undefined8 *)(piVar19 + 0x2c) = uVar3;
        piVar19[0x2e] = 0;
        piVar19[0x2f] = 0;
        *(ulonglong *)(piVar19 + 0x36) =
             CONCAT44((float)piVar19[0x28] + (float)((ulonglong)uVar3 >> 0x20),
                      (float)piVar19[0x13] + (float)uVar3);
        piVar19[0x1f] = *(int *)(unaff_RSI + 0xd24);
        uVar17 = *(undefined4 *)(uVar16 + 0x40c);
        piVar19[1] = 0x3f800000;
        *piVar19 = uVar17;
        piVar19[-2] = 0x40775144;
        piVar19[-1] = 1;
        iVar11 = FUN_140754ae2();
        uVar17 = *(undefined4 *)(uVar16 + 0x418);
        piVar19[1] = 0x3f800000;
        *piVar19 = uVar17;
        piVar19[-2] = 0x40775158;
        piVar19[-1] = 1;
        iVar13 = FUN_140754ae2();
        piVar19[0x1b] = iVar13;
        uVar17 = *(undefined4 *)(uVar16 + 0x42c);
        piVar19[1] = 0x3f800000;
        *piVar19 = uVar17;
        piVar19[-2] = 0x4077516e;
        piVar19[-1] = 1;
        iVar13 = FUN_140754ae2();
        piVar19[1] = iVar11;
        *piVar19 = 0;
        piVar19[-2] = 0x40775180;
        piVar19[-1] = 1;
        FUN_140754b35();
        piVar19[1] = iVar13;
        *piVar19 = 0x3a;
        piVar19[-2] = 0x40775190;
        piVar19[-1] = 1;
        FUN_140754b35();
        piVar19[0xb] = uVar20;
        do {
          uVar20 = *(uint *)(uVar16 + 0xc) >> 0x12 & 1;
          if ((((float)piVar19[0x34] < (float)piVar19[0x38]) ||
              ((float)piVar19[0x35] < (float)piVar19[0x39])) ||
             (((float)piVar19[0x3a] < (float)piVar19[0x36] ||
              ((float)piVar19[0x3b] < (float)piVar19[0x37])))) {
            uVar17 = piVar19[0x3c];
            piVar19[1] = (int)(piVar19 + 0x3a);
            *piVar19 = (int)(piVar19 + 0x38);
            piVar19[2] = 0;
            *(undefined8 *)(piVar19 + -2) = 0x14077521a;
            FUN_1407e0084(uVar17);
            piVar19 = (int *)(ulonglong)((int)piVar19 - 0xc);
          }
          else {
            uVar17 = piVar19[0x3c];
          }
          piVar19[3] = piVar19[0x1b];
          piVar19[2] = uVar20;
          piVar19[1] = (int)(piVar19 + 0x34);
          *piVar19 = uVar17;
          *(undefined8 *)(piVar19 + -2) = 0x14077523c;
          FUN_1407a8b11();
          uVar6 = *(undefined4 *)((ulonglong)(uint)piVar19[0xb] + 4);
          uVar4 = *(undefined4 *)((ulonglong)(uint)piVar19[0xc] + 0xd0c);
          uVar12 = *(undefined4 *)((ulonglong)(uint)piVar19[0xc] + 0xd10);
          *(undefined8 *)(piVar19 + 6) = 0;
          *(undefined8 *)(piVar19 + 8) = 0;
          piVar19[5] = uVar6;
          piVar19[4] = uVar12;
          piVar19[3] = uVar4;
          piVar19[2] = uVar20;
          piVar19[1] = (int)(piVar19 + 0x34);
          *piVar19 = uVar17;
          piVar19[10] = 0;
          *(undefined8 *)(piVar19 + -2) = 0x140775287;
          FUN_1407a8fcf();
          if (((((float)piVar19[0x34] < (float)piVar19[0x38]) ||
               ((float)piVar19[0x35] < (float)piVar19[0x39])) ||
              ((float)piVar19[0x3a] < (float)piVar19[0x36])) ||
             ((float)piVar19[0x3b] < (float)piVar19[0x37])) {
            *(undefined8 *)(piVar19 + -2) = 0x1407752da;
            FUN_1407e0254(uVar17);
          }
          uVar16 = (ulonglong)(uint)piVar19[0xb];
        } while (*(int *)(unaff_R12 + 0x48) != unaff_R13D);
        piVar19[0x13] = (int)((float)piVar19[0x13] + (float)piVar19[0x2c] + (float)piVar19[0x1f]);
        piVar19[0x14] = piVar19[0x14];
        piVar19[0x15] = piVar19[0x15];
        piVar19[0x16] = piVar19[0x16];
        *piVar19 = 2;
        *(undefined8 *)(piVar19 + -2) = 0x14077531f;
        FUN_140754d5e();
        unaff_RSI = (ulonglong)(uint)piVar19[0xc];
      }
      iVar11 = *(int *)((longlong)piVar19 + 0x5c);
      uVar5 = *(uint *)((longlong)piVar19 + 0x34);
    }
    else {
      uVar20 = *(uint *)((ulonglong)*(uint *)(uVar16 + 0xc) + 8 + (ulonglong)(uint)(iVar11 * 0x30));
      uVar5 = piVar19[0xd];
      if (uVar20 != 0) goto LAB_1407750b4;
    }
    uVar16 = (ulonglong)uVar5;
  } while (iVar11 != *(int *)((longlong)piVar19 + unaff_R12 + 0x40));
LAB_140775341:
  piVar19[1] = *(int *)(unaff_RSI + 0xd14);
  *piVar19 = 0x40400000;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(piVar19 + -2) = &UNK_14077535b;
  FUN_140755a9a();
}

