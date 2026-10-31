/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008de20 */

undefined1 (*) [16] FUN_14008de20(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  
  bVar1 = (*param_2)[0];
  if (bVar1 == 0) {
    return param_1;
  }
  if (1 < DAT_14012ec60) {
    if (((uint)param_2 & 0xfff) < 0xff1) {
      auVar10 = *param_2;
    }
    else {
      auVar10 = ZEXT816(0);
      iVar7 = 4;
      pauVar4 = param_2;
      bVar6 = bVar1;
      do {
        auVar14._0_8_ = auVar10._1_8_;
        uVar5 = auVar10._8_8_ >> 8 | (ulonglong)bVar6 << 0x38;
        auVar14._8_8_ = uVar5;
        if (bVar6 != 0) {
          bVar6 = (*(undefined1 (*) [16])(*pauVar4 + 1))[0];
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
        }
        auVar15._0_8_ = auVar14._1_8_;
        uVar5 = uVar5 >> 8 | (ulonglong)bVar6 << 0x38;
        auVar15._8_8_ = uVar5;
        if (bVar6 != 0) {
          bVar6 = (*(undefined1 (*) [16])(*pauVar4 + 1))[0];
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
        }
        auVar16._0_8_ = auVar15._1_8_;
        uVar5 = uVar5 >> 8 | (ulonglong)bVar6 << 0x38;
        auVar16._8_8_ = uVar5;
        if (bVar6 != 0) {
          bVar6 = (*(undefined1 (*) [16])(*pauVar4 + 1))[0];
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
        }
        auVar10._0_8_ = auVar16._1_8_;
        auVar10._8_8_ = uVar5 >> 8 | (ulonglong)bVar6 << 0x38;
        if (bVar6 != 0) {
          bVar6 = (*(undefined1 (*) [16])(*pauVar4 + 1))[0];
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    while( true ) {
      while( true ) {
        uVar3 = (uint)param_1 & 0xfff;
        pauVar4 = param_2;
        if (0xff0 < uVar3) break;
        pcmpistri(auVar10,*param_1,0xc);
        if (uVar3 < 0xff1) {
          if (0xfef < uVar3) {
            return (undefined1 (*) [16])0x0;
          }
          iVar7 = pcmpistri(auVar10,*param_1,0xc);
          param_1 = (undefined1 (*) [16])(*param_1 + iVar7);
          pauVar8 = param_1;
          goto LAB_14008e070;
        }
        param_1 = param_1 + 1;
      }
      if ((*param_1)[0] == 0) {
        return (undefined1 (*) [16])0x0;
      }
      pauVar8 = param_1;
      if ((*param_1)[0] == bVar1) break;
LAB_14008e0be:
      param_1 = (undefined1 (*) [16])(*pauVar8 + 1);
    }
LAB_14008e070:
    do {
      for (; 0xff0 < ((uint)param_1 & 0xfff); param_1 = (undefined1 (*) [16])(*param_1 + 1)) {
LAB_14008e0c6:
        if ((*pauVar4)[0] == '\0') {
          return pauVar8;
        }
        if ((*param_1)[0] != (*pauVar4)[0]) goto LAB_14008e0be;
        pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
      }
      uVar5 = (ulonglong)((uint)pauVar4 & 0xfff);
      if (0xff0 < uVar5) goto LAB_14008e0c6;
      pcmpistri(*pauVar4,*param_1,0xc);
      if (!SBORROW8(uVar5,0xff0)) goto LAB_14008e0be;
      if ((longlong)(uVar5 - 0xff0) < 0) {
        return pauVar8;
      }
      param_1 = param_1 + 1;
      pauVar4 = pauVar4 + 1;
    } while( true );
  }
  auVar10 = pshuflw(in_XMM1,ZEXT216(CONCAT11(bVar1,bVar1)),0);
  do {
    for (; 0xff0 < ((uint)param_1 & 0xfff); param_1 = (undefined1 (*) [16])(*param_1 + 1)) {
LAB_14008dea8:
      if ((*param_1)[0] == 0) {
        return (undefined1 (*) [16])0x0;
      }
      pauVar4 = param_2;
      pauVar8 = param_1;
      if (bVar1 == (*param_1)[0]) {
LAB_14008dec0:
        for (; (((uint)pauVar4 & 0xfff) < 0xff1 && (((uint)pauVar8 & 0xfff) < 0xff1));
            pauVar8 = pauVar8 + 1) {
          auVar12[0] = -((*pauVar4)[0] == '\0');
          auVar12[1] = -((*pauVar4)[1] == '\0');
          auVar12[2] = -((*pauVar4)[2] == '\0');
          auVar12[3] = -((*pauVar4)[3] == '\0');
          auVar12[4] = -((*pauVar4)[4] == '\0');
          auVar12[5] = -((*pauVar4)[5] == '\0');
          auVar12[6] = -((*pauVar4)[6] == '\0');
          auVar12[7] = -((*pauVar4)[7] == '\0');
          auVar12[8] = -((*pauVar4)[8] == '\0');
          auVar12[9] = -((*pauVar4)[9] == '\0');
          auVar12[10] = -((*pauVar4)[10] == '\0');
          auVar12[0xb] = -((*pauVar4)[0xb] == '\0');
          auVar12[0xc] = -((*pauVar4)[0xc] == '\0');
          auVar12[0xd] = -((*pauVar4)[0xd] == '\0');
          auVar12[0xe] = -((*pauVar4)[0xe] == '\0');
          auVar12[0xf] = -((*pauVar4)[0xf] == '\0');
          auVar13[0] = -((*pauVar4)[0] != (*pauVar8)[0]);
          auVar13[1] = -((*pauVar4)[1] != (*pauVar8)[1]);
          auVar13[2] = -((*pauVar4)[2] != (*pauVar8)[2]);
          auVar13[3] = -((*pauVar4)[3] != (*pauVar8)[3]);
          auVar13[4] = -((*pauVar4)[4] != (*pauVar8)[4]);
          auVar13[5] = -((*pauVar4)[5] != (*pauVar8)[5]);
          auVar13[6] = -((*pauVar4)[6] != (*pauVar8)[6]);
          auVar13[7] = -((*pauVar4)[7] != (*pauVar8)[7]);
          auVar13[8] = -((*pauVar4)[8] != (*pauVar8)[8]);
          auVar13[9] = -((*pauVar4)[9] != (*pauVar8)[9]);
          auVar13[10] = -((*pauVar4)[10] != (*pauVar8)[10]);
          auVar13[0xb] = -((*pauVar4)[0xb] != (*pauVar8)[0xb]);
          auVar13[0xc] = -((*pauVar4)[0xc] != (*pauVar8)[0xc]);
          auVar13[0xd] = -((*pauVar4)[0xd] != (*pauVar8)[0xd]);
          auVar13[0xe] = -((*pauVar4)[0xe] != (*pauVar8)[0xe]);
          auVar13[0xf] = -((*pauVar4)[0xf] != (*pauVar8)[0xf]);
          auVar13 = auVar13 | auVar12;
          uVar2 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar13[0xf] >> 7) << 0xf;
          if (uVar2 != 0) {
            uVar3 = 0;
            if (uVar2 != 0) {
              for (; (uVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
              }
            }
            pauVar8 = (undefined1 (*) [16])(*pauVar8 + uVar3);
            pauVar4 = (undefined1 (*) [16])(*pauVar4 + uVar3);
            break;
          }
          pauVar4 = pauVar4 + 1;
        }
        if ((*pauVar4)[0] == '\0') {
          return param_1;
        }
        if ((*pauVar8)[0] == (*pauVar4)[0]) {
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
          pauVar8 = (undefined1 (*) [16])(*pauVar8 + 1);
          goto LAB_14008dec0;
        }
      }
    }
    cVar17 = auVar10[0];
    auVar9[0] = -((*param_1)[0] == cVar17);
    cVar18 = auVar10[1];
    auVar9[1] = -((*param_1)[1] == cVar18);
    cVar19 = auVar10[2];
    auVar9[2] = -((*param_1)[2] == cVar19);
    cVar20 = auVar10[3];
    auVar9[3] = -((*param_1)[3] == cVar20);
    auVar9[4] = -((*param_1)[4] == cVar17);
    auVar9[5] = -((*param_1)[5] == cVar18);
    auVar9[6] = -((*param_1)[6] == cVar19);
    auVar9[7] = -((*param_1)[7] == cVar20);
    auVar9[8] = -((*param_1)[8] == cVar17);
    auVar9[9] = -((*param_1)[9] == cVar18);
    auVar9[10] = -((*param_1)[10] == cVar19);
    auVar9[0xb] = -((*param_1)[0xb] == cVar20);
    auVar9[0xc] = -((*param_1)[0xc] == cVar17);
    auVar9[0xd] = -((*param_1)[0xd] == cVar18);
    auVar9[0xe] = -((*param_1)[0xe] == cVar19);
    auVar9[0xf] = -((*param_1)[0xf] == cVar20);
    auVar11[0] = -((*param_1)[0] == '\0');
    auVar11[1] = -((*param_1)[1] == '\0');
    auVar11[2] = -((*param_1)[2] == '\0');
    auVar11[3] = -((*param_1)[3] == '\0');
    auVar11[4] = -((*param_1)[4] == '\0');
    auVar11[5] = -((*param_1)[5] == '\0');
    auVar11[6] = -((*param_1)[6] == '\0');
    auVar11[7] = -((*param_1)[7] == '\0');
    auVar11[8] = -((*param_1)[8] == '\0');
    auVar11[9] = -((*param_1)[9] == '\0');
    auVar11[10] = -((*param_1)[10] == '\0');
    auVar11[0xb] = -((*param_1)[0xb] == '\0');
    auVar11[0xc] = -((*param_1)[0xc] == '\0');
    auVar11[0xd] = -((*param_1)[0xd] == '\0');
    auVar11[0xe] = -((*param_1)[0xe] == '\0');
    auVar11[0xf] = -((*param_1)[0xf] == '\0');
    auVar11 = auVar11 | auVar9;
    uVar2 = (ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar11[0xf] >> 7) << 0xf;
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      param_1 = (undefined1 (*) [16])(*param_1 + uVar3);
      goto LAB_14008dea8;
    }
    param_1 = param_1 + 1;
  } while( true );
}

