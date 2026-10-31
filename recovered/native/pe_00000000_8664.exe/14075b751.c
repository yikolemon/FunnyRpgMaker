/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075b751 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14075b751(ulonglong param_1,ulonglong param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ushort uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  puVar13 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x30);
  uVar3 = *(uint *)(param_1 + 0x3c);
  if ((uVar3 != (uint)param_2) && ((*(uint *)(param_2 + 4) & 0x1800) == 0x800)) {
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    fVar23 = (float)((ulonglong)uVar12 >> 0x20);
    uVar1 = *(undefined8 *)((param_2 & 0xffffffff) + 8);
    fVar18 = (float)uVar1;
    if ((float)uVar12 < fVar18) {
      return 0;
    }
    fVar20 = (float)((ulonglong)uVar1 >> 0x20);
    uVar6 = -(ushort)(fVar20 <= fVar23);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar1 = *(undefined8 *)((param_1 & 0xffffffff) + 0x58);
    uVar2 = *(undefined8 *)((param_2 & 0xffffffff) + 0x10);
    fVar22 = (float)uVar1 + (float)uVar12;
    fVar23 = (float)((ulonglong)uVar1 >> 0x20) + fVar23;
    iVar15 = -(uint)(fVar22 <= fVar18 + (float)uVar2);
    iVar16 = -(uint)(fVar23 <= fVar20 + (float)((ulonglong)uVar2 >> 0x20));
    auVar4._4_4_ = iVar15;
    auVar4._0_4_ = iVar15;
    auVar4._8_4_ = iVar16;
    auVar4._12_4_ = iVar16;
    uVar8 = movmskpd((uint)uVar6,auVar4);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    if ((byte)((byte)uVar8 >> 1) == 0) {
      return 0;
    }
    *(ulonglong *)(puVar13 + 4) = CONCAT44(fVar23,fVar22);
    puVar13[6] = 0;
    puVar13[7] = 0;
    *(undefined8 *)(puVar13 + 8) = uVar12;
    puVar13[10] = 0;
    uVar8 = _DAT_150af8f15;
    puVar13[0xb] = 0;
    uVar10 = (ulonglong)_DAT_150af8f15;
    puVar13[-2] = 0x4075b7d0;
    puVar13[-1] = 1;
    cVar7 = FUN_140781193(param_1 & 0xffffffff);
    if (cVar7 == '\0') {
      *puVar13 = (uint)param_2;
      puVar13[2] = (uint)param_1;
      puVar13[1] = uVar8;
      iVar15 = *(int *)(uVar10 + 0x1fe0);
      fVar18 = (float)puVar13[8];
      fVar23 = (float)puVar13[9];
      fVar20 = (float)puVar13[4];
      fVar22 = (float)puVar13[5];
      if (iVar15 != 0) {
        puVar13[3] = *(uint *)((ulonglong)puVar13[1] + 0x1fe8);
        uVar10 = 0;
        do {
          uVar8 = *(uint *)(puVar13[3] + uVar10);
          uVar11 = (ulonglong)uVar8;
          if ((uVar8 != uVar3) && (uVar8 != *puVar13)) {
            fVar19 = (float)*(undefined8 *)(uVar11 + 8);
            fVar21 = (float)((ulonglong)*(undefined8 *)(uVar11 + 8) >> 0x20);
            iVar16 = -(uint)(fVar18 < (float)*(undefined8 *)(uVar11 + 0x10) + fVar19);
            iVar17 = -(uint)(fVar23 < (float)((ulonglong)*(undefined8 *)(uVar11 + 0x10) >> 0x20) +
                                      fVar21);
            auVar5._4_4_ = iVar16;
            auVar5._0_4_ = iVar16;
            auVar5._8_4_ = iVar17;
            auVar5._12_4_ = iVar17;
            uVar9 = movmskpd(puVar13[3],auVar5);
            if (((uVar9 & 2) != 0) &&
               (((fVar21 < fVar22 && ((uVar9 & 1) != 0)) && (fVar19 < fVar20)))) {
              puVar13[-2] = 0x4075b86d;
              puVar13[-1] = 1;
              cVar7 = FUN_1407811d7(uVar11,*puVar13);
              fVar20 = (float)puVar13[4];
              fVar22 = (float)puVar13[5];
              fVar18 = (float)puVar13[8];
              fVar23 = (float)puVar13[9];
              if (cVar7 != '\0') {
                if (uVar3 == 0) {
                  return 0;
                }
                puVar13[-2] = 0x4075b88e;
                puVar13[-1] = 1;
                cVar7 = FUN_1407811d7(uVar3,uVar8);
                fVar20 = (float)puVar13[4];
                fVar22 = (float)puVar13[5];
                fVar18 = (float)puVar13[8];
                fVar23 = (float)puVar13[9];
                if (cVar7 != '\0') {
                  return 0;
                }
              }
            }
          }
          uVar8 = (int)uVar10 + 4;
          uVar10 = (ulonglong)uVar8;
        } while (iVar15 << 2 != uVar8);
      }
      uVar8 = puVar13[1];
      uVar10 = (ulonglong)uVar8;
      uVar9 = puVar13[2];
      puVar14 = (undefined8 *)(ulonglong)*puVar13;
      if ((*(byte *)(uVar10 + 0x27b5) & 8) != 0) {
        *(undefined8 *)(puVar13 + -2) = *puVar14;
        *(undefined8 *)(puVar13 + -4) = *(undefined8 *)((ulonglong)uVar9 + 4);
        puVar13[-6] = 0x1034d821;
        puVar13[-5] = 0;
        puVar13[-8] = 0x4075b8d2;
        puVar13[-7] = 1;
        FUN_1407518b6();
        puVar13 = (uint *)(ulonglong)((int)(puVar13 + -6) + 0xc);
      }
      if (*(char *)((ulonglong)uVar9 + 0xf8) == '\x01') {
        iVar15 = *(int *)(uVar10 + 0x1484);
        while (0 < iVar15) {
          uVar9 = *(uint *)(ulonglong)*(uint *)(uVar10 + 0x148c);
          iVar15 = param_3;
          if (*(uint *)((ulonglong)uVar9 + 0x3c) == uVar3) {
            *(undefined8 **)((longlong)puVar13 + -8) = puVar14;
            *(ulonglong *)((longlong)puVar13 + -0x10) = (ulonglong)uVar9;
            *(undefined8 *)((longlong)puVar13 + -0x18) = 0x14075b8ff;
            FUN_140770bfd();
            puVar13 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar13 + -0x10) + 8);
            iVar15 = param_3;
          }
        }
      }
      *(undefined8 **)((longlong)puVar13 + -8) = puVar14;
      uVar10 = (ulonglong)*(uint *)((longlong)puVar13 + 4);
      *(ulonglong *)((longlong)puVar13 + -0x10) = uVar10;
      *(undefined8 *)((longlong)puVar13 + -0x18) = 0x14075b918;
      FUN_140770bfd();
      uVar12 = CONCAT71((uint7)(uint3)(uVar8 >> 8),1);
      if ((*(byte *)(uVar10 + 0xd) & 0x20) == 0) {
        *(ulonglong *)((ulonglong)((int)(undefined1 *)((longlong)puVar13 + -0x10) + 8) - 8) = uVar10
        ;
        *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar13 + -0x10) + 8) - 0x10) =
             0x14075b92d;
        FUN_14076c9aa();
        return uVar12;
      }
      return uVar12;
    }
  }
  return 0;
}

