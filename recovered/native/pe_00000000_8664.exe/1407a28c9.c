/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a28c9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1407a28c9(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int *piVar16;
  ulonglong uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  puVar11 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x24);
  uVar10 = (ulonglong)_DAT_150b4002d;
  uVar1 = *(uint *)(uVar10 + 0x2414);
  piVar16 = (int *)(ulonglong)uVar1;
  uVar17 = (ulonglong)(uint)piVar16[10];
  uVar15 = (ulonglong)*(uint *)(uVar10 + 0x14cc);
  if (piVar16[0xb] != *(int *)(uVar10 + 0x1e3c)) {
    *(undefined8 *)(puVar11 + -8) = 0x1034b23c;
    *(undefined8 *)(puVar11 + -0x10) = 0x1407a2905;
    FUN_140754dc5();
    puVar11 = (undefined1 *)(ulonglong)((int)(puVar11 + -8) + 4);
  }
  uVar9 = (ulonglong)(puVar11 + 0x10) & 0xffffffff;
  *(ulonglong *)(puVar11 + -8) = uVar15;
  *(undefined8 *)(puVar11 + -0x10) = 0x1407a2914;
  FUN_1407a26d7(uVar9,piVar16);
  puVar12 = (undefined4 *)(ulonglong)((int)(puVar11 + -8) + 4);
  if (*(char *)((longlong)piVar16 + 0x4e) == '\x01') {
    if ((*(char *)((longlong)piVar16 + 0x21) != '\0') ||
       ((*(char *)((longlong)piVar16 + 0x51) == '\0' && ((piVar16[4] & piVar16[5]) != 0xffffffff))))
    {
      if ((*(byte *)(uVar10 + 0x27b4) & 0x40) != 0) {
        *(undefined8 *)((longlong)puVar12 + -8) = 0x1035517c;
        *(undefined8 *)((longlong)puVar12 + -0x10) = 0x1407a293a;
        FUN_1407518b6();
        puVar12 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -8) + 4);
      }
      *(undefined8 *)(uVar17 + 0x1c) = 0;
      *(undefined4 *)(uVar17 + 0x18) = 0;
    }
    if (((char)piVar16[0x14] == '\0') &&
       ((*(uint *)(uVar17 + 0x20) & *(uint *)(uVar17 + 0x24)) != 0xffffffff)) {
      if ((*(byte *)(uVar10 + 0x27b4) & 0x40) != 0) {
        *(undefined8 *)((longlong)puVar12 + -8) = 0x1035514e;
        *(undefined8 *)((longlong)puVar12 + -0x10) = 0x1407a2976;
        FUN_1407518b6();
        puVar12 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -8) + 4);
      }
      *(undefined8 *)(uVar17 + 0x24) = 0;
      *(undefined4 *)(uVar17 + 0x20) = 0;
      *(undefined1 *)(uVar17 + 0x11) = 0xff;
    }
    if ((piVar16[0xc] & 0xc0U) != 0) {
      uVar18 = piVar16[0x11];
      uVar9 = (ulonglong)uVar18;
      if (((uVar18 != 0) && (*(uint *)((ulonglong)_DAT_150b400e6 + 0x2394) == uVar18)) &&
         (*(char *)((ulonglong)_DAT_150b400e6 + 0x2398) == '\x01')) {
        *(ulonglong *)((longlong)puVar12 + -8) = (ulonglong)(uint)piVar16[0xc];
        *(ulonglong *)((longlong)puVar12 + -0x10) =
             (ulonglong)((longlong)puVar12 + 0xc) & 0xffffffff;
        *(undefined8 *)((longlong)puVar12 + -0x18) = 0x1407a29b6;
        FUN_1407a1c40();
        puVar12 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -0x10) + 8);
      }
    }
  }
  if (*(char *)((longlong)piVar16 + 0x4d) == '\0') {
    if (piVar16[1] < 0) {
      *(undefined8 *)((longlong)puVar12 + -8) = 0;
      *(undefined8 *)((longlong)puVar12 + -0x10) = 0x1407a29cc;
      uVar6 = FUN_1407520ca();
      puVar12 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -8) + 4);
      uVar18 = piVar16[2];
      if (uVar18 != 0) {
        *(ulonglong *)((longlong)puVar12 + -8) = (ulonglong)(uint)(*piVar16 * 0x18);
        *(ulonglong *)((longlong)puVar12 + -0x10) = (ulonglong)uVar18;
        *(ulonglong *)((longlong)puVar12 + -0x18) = (ulonglong)uVar6;
        *(undefined8 *)((longlong)puVar12 + -0x20) = 0x1407a29e8;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar12 + -0x18) + 0xc) - 8) =
             *(undefined8 *)(piVar16 + 2);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)puVar12 + -0x18) + 0xc) - 0x10) =
             &UNK_1407a29f3;
        FUN_14075219b();
      }
      piVar16[2] = uVar6;
      piVar16[1] = 0;
    }
    *piVar16 = 0;
  }
  if (((*(float *)(uVar15 + 0x24c) <= *(float *)(uVar10 + 0xe4)) &&
      (*(float *)(uVar15 + 0x250) <= *(float *)(uVar10 + 0xe8))) &&
     ((*(float *)(uVar10 + 0xe4) < *(float *)(uVar15 + 0x254) &&
      (*(float *)(uVar10 + 0xe8) < *(float *)(uVar15 + 600))))) {
    *(undefined8 *)((longlong)puVar12 + -8) = 1;
    *(undefined8 *)((longlong)puVar12 + -0x10) = 0x1407a2b2b;
    cVar5 = FUN_140769a40();
    puVar12 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -8) + 4);
    if ((cVar5 != '\0') &&
       (((uVar18 = piVar16[0xc], (uVar18 >> 0xc & 1) == 0 ||
         (((*(float *)((longlong)puVar12 + 0x10) <= *(float *)(uVar10 + 0xe4) &&
           (*(float *)((longlong)puVar12 + 0x14) <= *(float *)(uVar10 + 0xe8))) &&
          ((*(float *)(uVar10 + 0xe4) < *(float *)((longlong)puVar12 + 0x18) &&
           (*(float *)(uVar10 + 0xe8) < *(float *)((longlong)puVar12 + 0x1c))))))) &&
        ((*(int *)(uVar10 + 0x1510) == 0 && (*(int *)(uVar10 + 0x1528) == 0)))))) {
      if (((uVar18 & 0xc0) != 0) &&
         (((*(char *)(uVar10 + 0x2398) == '\0' && (*(char *)(uVar10 + 0x2399) == '\0')) &&
          (*(short *)(uVar10 + 0xb22) == 1)))) {
        uVar9 = (ulonglong)(uint)piVar16[0x11];
        *(undefined8 *)((longlong)puVar12 + -8) = 0xffffffffffffffff;
        *(undefined8 *)((longlong)puVar12 + -0x10) = 0x1407a2b8a;
        FUN_1407a2c8a(uVar9,0);
        uVar13 = (ulonglong)((int)(undefined1 *)((longlong)puVar12 + -8) + 4);
        *(undefined8 *)(uVar13 - 8) = 2;
        *(ulonglong *)(uVar13 - 0x10) = uVar15;
        *(undefined8 *)(uVar13 - 0x18) = 0x1407a2b95;
        FUN_14075b3b2();
        uVar14 = (ulonglong)((int)(uVar13 - 0x10) + 8);
        *(undefined8 *)(uVar14 - 8) = *(undefined8 *)(piVar16 + 0x11);
        *(undefined8 *)(uVar14 - 0x10) = 0x1407a2ba0;
        FUN_14075a7b5();
        puVar12 = (undefined4 *)(ulonglong)((int)(uVar14 - 8) + 4);
        uVar18 = piVar16[0xc];
        if ((uVar18 >> 0xc & 1) != 0) {
          uVar3 = *(undefined4 *)(uVar10 + 0xe4);
          uVar4 = *(undefined4 *)(uVar10 + 0xe8);
          *puVar12 = uVar3;
          puVar12[1] = uVar4;
          puVar12[2] = uVar3;
          puVar12[3] = uVar4;
          uVar9 = 0;
          *(undefined4 **)(puVar12 + -2) = puVar12;
          *(undefined8 *)(puVar12 + -4) = *(undefined8 *)(piVar16 + 0xb);
          *(undefined8 *)(puVar12 + -6) = 0;
          *(undefined8 *)(puVar12 + -8) = 0;
          *(undefined8 *)(puVar12 + -10) = 0x1407a2bcc;
          FUN_14076f01e();
          puVar12 = (undefined4 *)(ulonglong)((int)(puVar12 + -8) + 0x10);
          uVar18 = piVar16[0xc];
        }
      }
      if ((uVar18 >> 10 & 1) != 0) {
        *(undefined8 *)((longlong)puVar12 + -8) = 0;
        *(undefined8 *)((longlong)puVar12 + -0x10) = 0x1407a2be3;
        cVar5 = FUN_14076be03();
        puVar12 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -8) + 4);
        if (cVar5 != '\0') {
          *(undefined8 *)((longlong)puVar12 + -8) = 0xffffffffbf800000;
          *(undefined8 *)((longlong)puVar12 + -0x10) = 0;
          *(undefined8 *)((longlong)puVar12 + -0x18) = 0x1407a2bfa;
          cVar5 = FUN_14076be7e();
          puVar12 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -0x10) + 8);
          if ((cVar5 == '\0') && (*(int *)(uVar10 + 0x108) == 0)) {
            *(undefined8 *)((longlong)puVar12 + -8) = 0;
            *(int **)((longlong)puVar12 + -0x10) = piVar16;
            *(undefined8 *)((longlong)puVar12 + -0x18) = 0x1407a2c1a;
            FUN_1407a273a();
            puVar12 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -0x10) + 8);
          }
        }
      }
    }
  }
  if ((*(byte *)((longlong)piVar16 + 0x32) & 1) != 0) {
    pcVar8 = (char *)(ulonglong)_DAT_14cc888b1039d74c;
    *pcVar8 = *pcVar8 + (char)_DAT_14cc888b1039d74c;
    *(undefined1 *)(uVar9 + 0xfb) = 1;
    *(undefined8 *)((longlong)puVar12 + -8) = 4;
    *(undefined8 *)((longlong)puVar12 + -0x10) = *(undefined8 *)(pcVar8 + 0x14cc);
    *(undefined8 *)((longlong)puVar12 + -0x18) = 0x1407a2a40;
    FUN_14076e761();
    puVar12 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -0x10) + 8);
  }
  uVar18 = *(uint *)(uVar10 + 0x2308);
  if ((uVar18 != 0) && (*(char *)((ulonglong)uVar18 + 0x1ee) == '\x01')) {
    *(ulonglong *)((longlong)puVar12 + -8) = (ulonglong)uVar18;
    *(undefined8 *)((longlong)puVar12 + -0x10) = 0x1407a2a5c;
    FUN_1407bb89e();
    puVar12 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -8) + 4);
  }
  fVar21 = (float)*(undefined8 *)(uVar15 + 0x15c);
  fVar22 = (float)((ulonglong)*(undefined8 *)(uVar15 + 0x15c) >> 0x20);
  fVar19 = (float)*(undefined8 *)(piVar16 + 0xf);
  fVar20 = (float)((ulonglong)*(undefined8 *)(piVar16 + 0xf) >> 0x20);
  uVar18 = -(uint)(fVar21 <= fVar19);
  uVar6 = -(uint)(fVar22 <= fVar20);
  *(ulonglong *)(uVar15 + 0x15c) =
       CONCAT44(~uVar6 & (uint)fVar22,~uVar18 & (uint)fVar21) |
       CONCAT44((uint)fVar20 & uVar6,(uint)fVar19 & uVar18);
  *(undefined8 *)((longlong)puVar12 + -8) = 0x1407a2a88;
  FUN_1407692bf();
  if ((*(byte *)(uVar10 + 0x27b4) & 0x40) != 0) {
    *(undefined8 *)((longlong)puVar12 + -8) = 0x1407a2a9d;
    FUN_1407a27f8(0x103320c8,uVar1);
  }
  iVar7 = 0;
  piVar16[0xb] = 0;
  piVar16[0xc] = 0;
  iVar2 = *(int *)(uVar10 + 0x2418);
  *(int *)(uVar10 + 0x2418) = iVar2 + -1;
  if (1 < iVar2) {
    iVar7 = *(int *)(uVar10 + 0x2424) + iVar2 * 0x58 + -0xb0;
  }
  *(int *)(uVar10 + 0x2414) = iVar7;
  if (_DAT_150b2b7db != (*(uint *)((longlong)puVar12 + 0x20) ^ (uint)puVar12)) {
                    /* WARNING: Subroutine does not return */
    *(code **)((longlong)puVar12 + -8) = FUN_1407a2c8a;
    FUN_1408802b0(*(uint *)((longlong)puVar12 + 0x20) ^ (uint)puVar12);
  }
  return piVar16;
}

