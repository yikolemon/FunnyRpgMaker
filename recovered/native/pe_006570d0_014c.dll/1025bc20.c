/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025bc20 */

undefined1 (*) [16] FUN_1025bc20(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined4 uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  uint uVar9;
  char *pcVar10;
  int iVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  undefined1 (*pauVar14) [16];
  undefined1 in_XMM0 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  char cVar21;
  undefined1 auVar22 [16];
  undefined1 auVar20 [15];
  
  if (DAT_1039d7b4 == 0) {
    cVar21 = (*param_2)[0];
    if (cVar21 == '\0') {
      return param_1;
    }
    if ((*param_2)[1] == '\0') {
      while (((uint)param_1 & 3) != 0) {
        puVar3 = *param_1;
        if (*puVar3 == cVar21) {
          return param_1;
        }
        param_1 = (undefined1 (*) [16])(*param_1 + 1);
        if (*puVar3 == '\0') {
          return (undefined1 (*) [16])0x0;
        }
      }
      while( true ) {
        while( true ) {
          uVar13 = *(uint *)*param_1;
          uVar9 = uVar13 ^ CONCAT22(CONCAT11(cVar21,cVar21),CONCAT11(cVar21,cVar21));
          uVar6 = uVar13 ^ 0xffffffff ^ uVar13 + 0x7efefeff;
          pauVar7 = (undefined1 (*) [16])(*param_1 + 4);
          if (((uVar9 ^ 0xffffffff ^ uVar9 + 0x7efefeff) & 0x81010100) != 0) break;
          param_1 = pauVar7;
          if ((uVar6 & 0x81010100) != 0) {
            if ((uVar6 & 0x1010100) != 0) {
              return (undefined1 (*) [16])0x0;
            }
            if ((uVar13 + 0x7efefeff & 0x80000000) == 0) {
              return (undefined1 (*) [16])0x0;
            }
          }
        }
        uVar1 = *(undefined4 *)*param_1;
        if ((char)uVar1 == cVar21) {
          return param_1;
        }
        if ((char)uVar1 == '\0') {
          return (undefined1 (*) [16])0x0;
        }
        cVar5 = (char)((uint)uVar1 >> 8);
        if (cVar5 == cVar21) {
          return (undefined1 (*) [16])(*param_1 + 1);
        }
        if (cVar5 == '\0') break;
        cVar5 = (char)((uint)uVar1 >> 0x10);
        if (cVar5 == cVar21) {
          return (undefined1 (*) [16])(*param_1 + 2);
        }
        if (cVar5 == '\0') {
          return (undefined1 (*) [16])0x0;
        }
        cVar5 = (char)((uint)uVar1 >> 0x18);
        if (cVar5 == cVar21) {
          return (undefined1 (*) [16])(*param_1 + 3);
        }
        param_1 = pauVar7;
        if (cVar5 == '\0') {
          return (undefined1 (*) [16])0x0;
        }
      }
      return (undefined1 (*) [16])0x0;
    }
    do {
      cVar5 = (*param_1)[0];
      pauVar7 = (undefined1 (*) [16])(*param_1 + 1);
      do {
        while (param_1 = pauVar7, cVar5 != cVar21) {
          if (cVar5 == '\0') {
            return (undefined1 (*) [16])0x0;
          }
          pauVar7 = (undefined1 (*) [16])(*param_1 + 1);
          cVar5 = (*param_1)[0];
        }
        cVar5 = (*param_1)[0];
        pauVar7 = (undefined1 (*) [16])(*param_1 + 1);
        pauVar12 = param_2;
      } while (cVar5 != (*param_2)[1]);
      do {
        if ((*pauVar12)[2] == '\0') {
LAB_1025be7e:
          return (undefined1 (*) [16])(param_1[-1] + 0xf);
        }
        if ((*pauVar7)[0] != (*pauVar12)[2]) break;
        puVar3 = *pauVar12;
        if (puVar3[3] == '\0') goto LAB_1025be7e;
        puVar4 = *pauVar7;
        pauVar12 = (undefined1 (*) [16])(*pauVar12 + 2);
        pauVar7 = (undefined1 (*) [16])(*pauVar7 + 2);
      } while (puVar3[3] == puVar4[1]);
    } while( true );
  }
  if (1 < DAT_1039d7b4) {
    if ((*param_2)[0] == '\0') {
      return param_1;
    }
    if (0xff0 < ((uint)param_2 & 0xfff)) {
      iVar11 = 0xf;
      pauVar7 = param_2;
      do {
        puVar3 = *pauVar7;
        pauVar7 = (undefined1 (*) [16])(*pauVar7 + 1);
        do {
          auVar22._0_8_ = in_XMM0._0_8_;
          auVar22._8_8_ = in_XMM0._8_8_ & 0xffffffffffffff | (ulonglong)(byte)*puVar3 << 0x38;
          in_XMM0 = auVar22 >> 8;
          iVar11 = iVar11 + -1;
          if (iVar11 == 0) goto LAB_1025bd81;
        } while (*puVar3 == 0);
      } while( true );
    }
    in_XMM0 = *param_2;
LAB_1025bd81:
    do {
      pauVar12 = param_1;
      pauVar7 = param_2;
      if (((uint)pauVar12 & 0xfff) < 0xff1) goto LAB_1025bda0;
      if ((*pauVar12)[0] == '\0') {
        return (undefined1 (*) [16])0x0;
      }
      pauVar8 = pauVar12;
      if (in_XMM0[0] == (*pauVar12)[0]) goto LAB_1025bdb7;
      param_1 = (undefined1 (*) [16])(*pauVar12 + 1);
    } while( true );
  }
  uVar13 = (uint)CONCAT11((*param_2)[0],(*param_2)[0]);
  if (uVar13 == 0) {
    return param_1;
  }
  auVar22 = pshuflw(ZEXT416(uVar13),ZEXT416(uVar13),0);
  uVar13 = 0xffffffff;
  pauVar7 = param_2;
  do {
    pauVar12 = pauVar7;
    pauVar7 = (undefined1 (*) [16])(*pauVar12 + 1);
    if ((*pauVar12)[0] == '\0') goto LAB_1025bc8e;
  } while (((uint)pauVar7 & 0xf) != 0);
  auVar17[0] = -((*pauVar7)[0] == '\0');
  auVar17[1] = -((*pauVar12)[2] == '\0');
  auVar17[2] = -((*pauVar12)[3] == '\0');
  auVar17[3] = -((*pauVar12)[4] == '\0');
  auVar17[4] = -((*pauVar12)[5] == '\0');
  auVar17[5] = -((*pauVar12)[6] == '\0');
  auVar17[6] = -((*pauVar12)[7] == '\0');
  auVar17[7] = -((*pauVar12)[8] == '\0');
  auVar17[8] = -((*pauVar12)[9] == '\0');
  auVar17[9] = -((*pauVar12)[10] == '\0');
  auVar17[10] = -((*pauVar12)[0xb] == '\0');
  auVar17[0xb] = -((*pauVar12)[0xc] == '\0');
  auVar17[0xc] = -((*pauVar12)[0xd] == '\0');
  auVar17[0xd] = -((*pauVar12)[0xe] == '\0');
  auVar17[0xe] = -((*pauVar12)[0xf] == '\0');
  auVar17[0xf] = -(pauVar12[1][0] == '\0');
  if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) == 0 && (SUB161(auVar17 >> 0xf,0) & 1) == 0) &&
                  (SUB161(auVar17 >> 0x17,0) & 1) == 0) && (SUB161(auVar17 >> 0x1f,0) & 1) == 0) &&
                (SUB161(auVar17 >> 0x27,0) & 1) == 0) && (SUB161(auVar17 >> 0x2f,0) & 1) == 0) &&
              (SUB161(auVar17 >> 0x37,0) & 1) == 0) && (SUB161(auVar17 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar17 >> 0x47,0) & 1) == 0) && (SUB161(auVar17 >> 0x4f,0) & 1) == 0) &&
          (SUB161(auVar17 >> 0x57,0) & 1) == 0) && (SUB161(auVar17 >> 0x5f,0) & 1) == 0) &&
        (SUB161(auVar17 >> 0x67,0) & 1) == 0) && (SUB161(auVar17 >> 0x6f,0) & 1) == 0) &&
      (SUB161(auVar17 >> 0x77,0) & 1) == 0) && -1 < auVar17[0xf]) {
    uVar13 = 0xf;
  }
LAB_1025bc8e:
  pauVar7 = param_1;
  cVar21 = auVar22[0];
  if (((uint)pauVar7 & 0xfff) < 0xff1) goto code_r0x1025bc9d;
  goto LAB_1025bcc4;
LAB_1025bda0:
  iVar11 = pcmpistri(in_XMM0,*pauVar12,0xc);
  param_1 = pauVar12 + 1;
  if (pauVar12 >= (undefined1 (*) [16])0xfffffff0 || pauVar12 + 1 == (undefined1 (*) [16])0x0) {
    if (pauVar12 < (undefined1 (*) [16])0xfffffff0) {
      return (undefined1 (*) [16])0x0;
    }
    pauVar12 = (undefined1 (*) [16])(*pauVar12 + iVar11);
    pauVar8 = pauVar12;
LAB_1025bdb7:
    while( true ) {
      for (; (0xff0 < ((uint)pauVar12 & 0xfff) || (0xff0 < ((uint)pauVar7 & 0xfff)));
          pauVar7 = (undefined1 (*) [16])(*pauVar7 + 1)) {
        if ((*pauVar7)[0] == '\0') {
          return pauVar8;
        }
        if ((*pauVar7)[0] != (*pauVar12)[0]) goto LAB_1025bd7a;
        pauVar12 = (undefined1 (*) [16])(*pauVar12 + 1);
      }
      pauVar14 = pauVar7 + 1;
      pcmpistri(*pauVar7,*pauVar12,0xc);
      if (!SCARRY4((int)pauVar7,0x10)) break;
      pauVar7 = pauVar14;
      pauVar12 = pauVar12 + 1;
      if ((int)pauVar14 < 0) {
        return pauVar8;
      }
    }
LAB_1025bd7a:
    param_1 = (undefined1 (*) [16])(*pauVar8 + 1);
  }
  goto LAB_1025bd81;
code_r0x1025bc9d:
  auVar20 = SUB1615((undefined1  [16])0x0,1);
  auVar18[0] = -((*pauVar7)[0] == '\0');
  auVar18[1] = -((*pauVar7)[1] == '\0');
  auVar18[2] = -((*pauVar7)[2] == '\0');
  auVar18[3] = -((*pauVar7)[3] == '\0');
  auVar18[4] = -((*pauVar7)[4] == '\0');
  auVar18[5] = -((*pauVar7)[5] == '\0');
  auVar18[6] = -((*pauVar7)[6] == '\0');
  auVar18[7] = -((*pauVar7)[7] == '\0');
  auVar18[8] = -((*pauVar7)[8] == '\0');
  auVar18[9] = -(auVar20[8] == (*pauVar7)[9]);
  auVar18[10] = -(auVar20[9] == (*pauVar7)[10]);
  auVar18[0xb] = -(auVar20[10] == (*pauVar7)[0xb]);
  auVar18[0xc] = -(auVar20[0xb] == (*pauVar7)[0xc]);
  auVar18[0xd] = -(auVar20[0xc] == (*pauVar7)[0xd]);
  auVar18[0xe] = -(auVar20[0xd] == (*pauVar7)[0xe]);
  auVar18[0xf] = -(auVar20[0xe] == (*pauVar7)[0xf]);
  auVar15[0] = -((*pauVar7)[0] == cVar21);
  auVar15[1] = -((*pauVar7)[1] == auVar22[1]);
  auVar15[2] = -((*pauVar7)[2] == auVar22[2]);
  auVar15[3] = -((*pauVar7)[3] == auVar22[3]);
  auVar15[4] = -((*pauVar7)[4] == auVar22[4]);
  auVar15[5] = -((*pauVar7)[5] == auVar22[5]);
  auVar15[6] = -((*pauVar7)[6] == auVar22[6]);
  auVar15[7] = -((*pauVar7)[7] == auVar22[7]);
  auVar15[8] = -((*pauVar7)[8] == cVar21);
  auVar15[9] = -((*pauVar7)[9] == auVar22[1]);
  auVar15[10] = -((*pauVar7)[10] == auVar22[2]);
  auVar15[0xb] = -((*pauVar7)[0xb] == auVar22[3]);
  auVar15[0xc] = -((*pauVar7)[0xc] == auVar22[4]);
  auVar15[0xd] = -((*pauVar7)[0xd] == auVar22[5]);
  auVar15[0xe] = -((*pauVar7)[0xe] == auVar22[6]);
  auVar15[0xf] = -((*pauVar7)[0xf] == auVar22[7]);
  auVar15 = auVar15 | auVar18;
  uVar2 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar15[0xf] >> 7) << 0xf;
  param_1 = pauVar7 + 1;
  if (uVar2 != 0) {
    iVar11 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> iVar11 & 1) == 0; iVar11 = iVar11 + 1) {
      }
    }
    pauVar7 = (undefined1 (*) [16])(*pauVar7 + iVar11);
LAB_1025bcc4:
    if ((*pauVar7)[0] == '\0') {
      return (undefined1 (*) [16])0x0;
    }
    param_1 = (undefined1 (*) [16])(*pauVar7 + 1);
    if (cVar21 == (*pauVar7)[0]) {
      pcVar10 = *param_2 + 1;
      pauVar12 = param_1;
LAB_1025bcdb:
      for (; ((uVar13 & (uint)pcVar10) == 0 && (((uint)pauVar12 & 0xfff) < 0xff1));
          pauVar12 = pauVar12 + 1) {
        auVar19[0] = -(*pcVar10 == '\0');
        auVar19[1] = -(pcVar10[1] == '\0');
        auVar19[2] = -(pcVar10[2] == '\0');
        auVar19[3] = -(pcVar10[3] == '\0');
        auVar19[4] = -(pcVar10[4] == '\0');
        auVar19[5] = -(pcVar10[5] == '\0');
        auVar19[6] = -(pcVar10[6] == '\0');
        auVar19[7] = -(pcVar10[7] == '\0');
        auVar19[8] = -(pcVar10[8] == '\0');
        auVar19[9] = -(pcVar10[9] == '\0');
        auVar19[10] = -(pcVar10[10] == '\0');
        auVar19[0xb] = -(pcVar10[0xb] == '\0');
        auVar19[0xc] = -(pcVar10[0xc] == '\0');
        auVar19[0xd] = -(pcVar10[0xd] == '\0');
        auVar19[0xe] = -(pcVar10[0xe] == '\0');
        auVar19[0xf] = -(pcVar10[0xf] == '\0');
        auVar16[0] = -((*pauVar12)[0] != *pcVar10);
        auVar16[1] = -((*pauVar12)[1] != pcVar10[1]);
        auVar16[2] = -((*pauVar12)[2] != pcVar10[2]);
        auVar16[3] = -((*pauVar12)[3] != pcVar10[3]);
        auVar16[4] = -((*pauVar12)[4] != pcVar10[4]);
        auVar16[5] = -((*pauVar12)[5] != pcVar10[5]);
        auVar16[6] = -((*pauVar12)[6] != pcVar10[6]);
        auVar16[7] = -((*pauVar12)[7] != pcVar10[7]);
        auVar16[8] = -((*pauVar12)[8] != pcVar10[8]);
        auVar16[9] = -((*pauVar12)[9] != pcVar10[9]);
        auVar16[10] = -((*pauVar12)[10] != pcVar10[10]);
        auVar16[0xb] = -((*pauVar12)[0xb] != pcVar10[0xb]);
        auVar16[0xc] = -((*pauVar12)[0xc] != pcVar10[0xc]);
        auVar16[0xd] = -((*pauVar12)[0xd] != pcVar10[0xd]);
        auVar16[0xe] = -((*pauVar12)[0xe] != pcVar10[0xe]);
        auVar16[0xf] = -((*pauVar12)[0xf] != pcVar10[0xf]);
        auVar19 = auVar19 | auVar16;
        uVar2 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar19[0xf] >> 7) << 0xf;
        if (uVar2 != 0) {
          iVar11 = 0;
          if (uVar2 != 0) {
            for (; (uVar2 >> iVar11 & 1) == 0; iVar11 = iVar11 + 1) {
            }
          }
          pauVar12 = (undefined1 (*) [16])(*pauVar12 + iVar11);
          pcVar10 = pcVar10 + iVar11;
          break;
        }
        pcVar10 = pcVar10 + 0x10;
      }
      if (*pcVar10 == '\0') {
        return pauVar7;
      }
      if (*pcVar10 == (*pauVar12)[0]) {
        pauVar12 = (undefined1 (*) [16])(*pauVar12 + 1);
        pcVar10 = pcVar10 + 1;
        goto LAB_1025bcdb;
      }
    }
  }
  goto LAB_1025bc8e;
}

