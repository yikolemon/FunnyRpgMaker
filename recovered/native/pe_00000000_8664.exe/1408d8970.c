/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d8970 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1408d8970(void)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  double *pdVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  double *pdVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 unaff_RSI;
  ulonglong uVar14;
  uint unaff_EDI;
  uint uVar15;
  uint uVar16;
  float10 in_ST0;
  double dVar17;
  undefined8 uVar18;
  
  uVar12 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar8 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x28);
  uVar16 = *(uint *)(uVar12 + 8);
  uVar7 = *(uint *)(uVar12 + 0x10);
  *(undefined8 *)(uVar8 - 8) = unaff_RSI;
  puVar10 = (undefined1 *)(uVar8 - 0x10);
  *(ulonglong *)(uVar8 - 0x10) = (ulonglong)unaff_EDI;
  uVar14 = 0;
  uVar15 = uVar16 & 0x1f;
  *(uint *)(uVar12 - 8) = uVar15;
  if (((uVar16 & 8) != 0) && ((uVar7 & 1) != 0)) {
    uVar14 = 1;
    uVar15 = uVar16 & 0x17;
    puVar11 = (undefined1 *)(uVar8 - 0x10);
    goto LAB_1408d8c6f;
  }
  if ((uVar16 & uVar7 & 4) != 0) {
    uVar14 = 4;
    uVar15 = uVar16 & 0x1b;
    puVar11 = (undefined1 *)(uVar8 - 0x10);
    goto LAB_1408d8c6f;
  }
  if (((uVar16 & 1) == 0) || ((uVar7 & 8) == 0)) {
    puVar11 = (undefined1 *)(uVar8 - 0x10);
    if (((uVar16 & 2) == 0) || (puVar11 = (undefined1 *)(uVar8 - 0x10), (uVar7 & 0x10) == 0))
    goto LAB_1408d8c6f;
    uVar13 = uVar16 >> 4 & 1;
    dVar17 = *(double *)(ulonglong)*(uint *)(uVar12 + 0xc);
    if (dVar17 == (double)CONCAT26(_DAT_150bfd9b7,_DAT_150bfd9b1)) {
      uVar13 = 1;
    }
    else {
      *(ulonglong *)(uVar8 - 0x18) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x1c);
      pdVar9 = (double *)(ulonglong)((int)(uVar8 - 0x18) - 8);
      *pdVar9 = dVar17;
      pdVar9[-1] = 2.6570777766167e-314;
      FUN_1408c6650();
      iVar6 = *(int *)(uVar12 - 0x1c);
      puVar10 = (undefined1 *)(ulonglong)((int)(uVar8 - 0x18) + 4);
      *(double *)(uVar12 - 0x18) = (double)in_ST0;
      dVar17 = *(double *)(uVar12 - 0x18);
      iVar6 = iVar6 + -0x600;
      *(double *)(uVar12 - 0x28) = dVar17;
      *(int *)(uVar12 - 0x14) = iVar6;
      if (iVar6 < -0x432) {
        uVar13 = 1;
        uVar16 = *(uint *)(uVar12 + 8);
        uVar7 = *(uint *)(uVar12 + 0x10);
        *(double *)(ulonglong)*(uint *)(uVar12 + 0xc) = dVar17 * 0.0;
      }
      else {
        uVar16 = *(uint *)(uVar12 - 0x28);
        cVar5 = '\0';
        *(uint *)(uVar12 - 0x10) = (uint)(dVar17 < 0.0);
        uVar1 = *(undefined4 *)(uVar12 - 0x22);
        *(undefined1 *)(uVar12 - 1) = 0;
        *(ushort *)(uVar12 - 0x22) = (ushort)uVar1 & 0xf | 0x10;
        cVar2 = '\0';
        *(undefined4 *)(uVar12 - 0xc) = 0;
        if (iVar6 < -0x3fd) {
          iVar6 = -0x3fd - *(int *)(uVar12 - 0x14);
          *(undefined4 *)(uVar12 - 0x14) = 1;
          do {
            cVar5 = (char)(uVar16 & 1);
            if (((uVar16 & 1) != 0) && (uVar13 == 0)) {
              uVar13 = *(uint *)(uVar12 - 0x14);
            }
            uVar7 = *(uint *)(uVar12 - 0xc) & 0xff;
            if (*(char *)(uVar12 - 1) != '\0') {
              uVar7 = *(uint *)(uVar12 - 0x14);
            }
            uVar16 = uVar16 >> 1;
            bVar3 = *(byte *)(uVar12 - 0x24);
            *(uint *)(uVar12 - 0xc) = uVar7;
            uVar7 = *(uint *)(uVar12 - 0x24);
            *(char *)(uVar12 - 1) = cVar5;
            *(uint *)(uVar12 - 0x28) = uVar16;
            if ((bVar3 & 1) != 0) {
              uVar16 = uVar16 | 0x80000000;
              *(uint *)(uVar12 - 0x28) = uVar16;
            }
            *(uint *)(uVar12 - 0x24) = uVar7 >> 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          cVar2 = (char)*(undefined4 *)(uVar12 - 0xc);
          *(char *)(uVar12 - 1) = cVar5;
        }
        uVar18 = *(undefined8 *)(uVar12 - 0x28);
        if (*(int *)(uVar12 - 0x10) != 0) {
          uVar18 = CONCAT44((uint)((ulonglong)uVar18 >> 0x20) ^ uRam0000000150b6831e,
                            (uint)uVar18 ^ _DAT_150b6831a);
          *(undefined8 *)(uVar12 - 0x28) = uVar18;
          uVar16 = *(uint *)(uVar12 - 0x28);
        }
        *(undefined8 *)(uVar12 - 0x18) = uVar18;
        if ((cVar5 != '\0') || (cVar2 != '\0')) {
          *(undefined8 *)(puVar10 + -8) = 0x1408d8c04;
          iVar6 = FUN_1408d07d0();
          if (0x200 < iVar6) goto LAB_1408d8c49;
          if (iVar6 == 0x200) {
            bVar3 = (byte)*(undefined4 *)(uVar12 - 0x10) ^ 1;
LAB_1408d8c36:
            if (bVar3 != 0) {
LAB_1408d8c38:
              *(uint *)(uVar12 - 0x28) = uVar16 + 1;
              *(int *)(uVar12 - 0x24) = *(int *)(uVar12 - 0x24) + (uint)(0xfffffffe < uVar16);
              uVar18 = *(undefined8 *)(uVar12 - 0x28);
              goto LAB_1408d8c4e;
            }
          }
          else if (iVar6 == 0) {
            if (*(char *)(uVar12 - 1) != '\0') {
              if (*(char *)(uVar12 - 0xc) == '\0') {
                bVar3 = *(byte *)(uVar12 - 0x28) & 1;
                goto LAB_1408d8c36;
              }
              goto LAB_1408d8c38;
            }
          }
          else if (iVar6 == 0x100) {
            bVar3 = (byte)*(undefined4 *)(uVar12 - 0x10);
            goto LAB_1408d8c36;
          }
LAB_1408d8c49:
          uVar18 = *(undefined8 *)(uVar12 - 0x18);
        }
LAB_1408d8c4e:
        uVar15 = *(uint *)(uVar12 - 8);
        uVar16 = *(uint *)(uVar12 + 8);
        uVar7 = *(uint *)(uVar12 + 0x10);
        *(undefined8 *)(ulonglong)*(uint *)(uVar12 + 0xc) = uVar18;
      }
    }
    uVar15 = uVar15 & 0xfffffffd;
    uVar14 = (ulonglong)(-(uint)(uVar13 != 0) & 0x10);
    puVar11 = puVar10;
    goto LAB_1408d8c6f;
  }
  uVar14 = 8;
  uVar15 = uVar7 & 0xc00;
  if (uVar15 < 0x801) {
    if (uVar15 == 0x800) {
      pdVar4 = (double *)(ulonglong)*(uint *)(uVar12 + 0xc);
      if (_DAT_150bfd92b < *pdVar4) {
        uVar15 = uVar16 & 0x1e;
        *pdVar4 = _DAT_150bfd9e5;
        puVar11 = (undefined1 *)(uVar8 - 0x10);
        goto LAB_1408d8c6f;
      }
LAB_1408d8aad:
      dVar17 = (double)CONCAT44((uint)((ulonglong)_DAT_150bfda2d >> 0x20) ^ uRam0000000150b681f0,
                                (uint)_DAT_150bfda2d ^ _DAT_150b681ec);
    }
    else {
      if (uVar15 != 0) {
        if (uVar15 == 0x400) {
          pdVar4 = (double *)(ulonglong)*(uint *)(uVar12 + 0xc);
          if (*pdVar4 <= _DAT_150bfd8bf) {
            uVar15 = uVar16 & 0x1e;
            *pdVar4 = (double)CONCAT44((uint)((ulonglong)_DAT_150bfd98d >> 0x20) ^
                                       uRam0000000150b6815b,(uint)_DAT_150bfd98d ^ _DAT_150b68157);
            puVar11 = (undefined1 *)(uVar8 - 0x10);
          }
          else {
            uVar15 = uVar16 & 0x1e;
            *pdVar4 = _DAT_150bfd981;
            puVar11 = (undefined1 *)(uVar8 - 0x10);
          }
          goto LAB_1408d8c6f;
        }
        goto LAB_1408d8ac0;
      }
      pdVar4 = (double *)(ulonglong)*(uint *)(uVar12 + 0xc);
      dVar17 = (double)CONCAT62(uRam0000000150bfd9b9,_DAT_150bfd9b7);
      if (*pdVar4 <= _DAT_150bfd8ff) {
        uVar15 = uVar16 & 0x1e;
        *pdVar4 = (double)CONCAT44((uint)((uint6)uRam0000000150bfd9b9 >> 0x10) ^
                                   uRam0000000150b68184,SUB84(dVar17,0) ^ _DAT_150b68180);
        puVar11 = (undefined1 *)(uVar8 - 0x10);
        goto LAB_1408d8c6f;
      }
    }
    *pdVar4 = dVar17;
  }
  else if (uVar15 == 0xc00) {
    pdVar4 = (double *)(ulonglong)*(uint *)(uVar12 + 0xc);
    if (_DAT_150bfd957 < *pdVar4) {
      uVar15 = uVar16 & 0x1e;
      *pdVar4 = _DAT_150bfda19;
      puVar11 = (undefined1 *)(uVar8 - 0x10);
      goto LAB_1408d8c6f;
    }
    goto LAB_1408d8aad;
  }
LAB_1408d8ac0:
  uVar15 = uVar16 & 0x1e;
  puVar11 = (undefined1 *)(uVar8 - 0x10);
LAB_1408d8c6f:
  if (((uVar16 & 0x10) != 0) && ((uVar7 & 0x20) != 0)) {
    uVar14 = (ulonglong)((uint)uVar14 | 0x20);
    uVar15 = uVar15 & 0xffffffef;
  }
  if ((int)uVar14 != 0) {
    *(ulonglong *)(puVar11 + -8) = uVar14;
    *(undefined8 *)(puVar11 + -0x10) = 0x1408d8c89;
    FUN_1408d9170();
  }
  return uVar15 == 0;
}

