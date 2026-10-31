/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028ace0 */

/* WARNING: Removing unreachable block (ram,0x00018028af95) */
/* WARNING: Removing unreachable block (ram,0x00018028af8e) */
/* WARNING: Removing unreachable block (ram,0x00018028af87) */
/* WARNING: Removing unreachable block (ram,0x00018028af80) */
/* WARNING: Removing unreachable block (ram,0x00018028af79) */
/* WARNING: Removing unreachable block (ram,0x00018028af72) */
/* WARNING: Removing unreachable block (ram,0x00018028af6b) */
/* WARNING: Removing unreachable block (ram,0x00018028af64) */
/* WARNING: Removing unreachable block (ram,0x00018028af5d) */
/* WARNING: Removing unreachable block (ram,0x00018028af56) */
/* WARNING: Removing unreachable block (ram,0x00018028af4f) */
/* WARNING: Removing unreachable block (ram,0x00018028af48) */
/* WARNING: Removing unreachable block (ram,0x00018028af41) */
/* WARNING: Removing unreachable block (ram,0x00018028af3a) */
/* WARNING: Removing unreachable block (ram,0x00018028af33) */
/* WARNING: Removing unreachable block (ram,0x00018028ade9) */
/* WARNING: Removing unreachable block (ram,0x00018028adf8) */
/* WARNING: Removing unreachable block (ram,0x00018028ae07) */
/* WARNING: Removing unreachable block (ram,0x00018028ae16) */
/* WARNING: Removing unreachable block (ram,0x00018028ae25) */
/* WARNING: Removing unreachable block (ram,0x00018028ae31) */
/* WARNING: Removing unreachable block (ram,0x00018028ae3d) */
/* WARNING: Removing unreachable block (ram,0x00018028ae49) */
/* WARNING: Removing unreachable block (ram,0x00018028ae55) */
/* WARNING: Removing unreachable block (ram,0x00018028ae61) */
/* WARNING: Removing unreachable block (ram,0x00018028ae6d) */
/* WARNING: Removing unreachable block (ram,0x00018028ae79) */
/* WARNING: Removing unreachable block (ram,0x00018028ae85) */
/* WARNING: Removing unreachable block (ram,0x00018028ae91) */
/* WARNING: Removing unreachable block (ram,0x00018028ae9d) */

longlong FUN_18028ace0(char *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lVar20;
  undefined1 (*pauVar21) [16];
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulonglong uVar35;
  undefined1 auVar36 [16];
  longlong lVar26;
  
  uVar22 = (ulonglong)((uint)param_2 & 0xf);
  pauVar21 = (undefined1 (*) [16])(param_2 - uVar22);
  lVar20 = 0;
  auVar34 = *pauVar21;
  switch(uVar22) {
  case 1:
    auVar34 = auVar34 >> 8;
    break;
  case 2:
    auVar34 = auVar34 >> 0x10;
    break;
  case 3:
    auVar34 = auVar34 >> 0x18;
    break;
  case 4:
    auVar34 = auVar34 >> 0x20;
    break;
  case 5:
    auVar34 = auVar34 >> 0x28;
    break;
  case 6:
    auVar34 = auVar34 >> 0x30;
    break;
  case 7:
    auVar34 = auVar34 >> 0x38;
    break;
  case 8:
    auVar34 = auVar34 >> 0x40;
    break;
  case 9:
    auVar34 = auVar34 >> 0x48;
    break;
  case 10:
    auVar34 = auVar34 >> 0x50;
    break;
  case 0xb:
    auVar34 = auVar34 >> 0x58;
    break;
  case 0xc:
    auVar34 = auVar34 >> 0x60;
    break;
  case 0xd:
    auVar34 = auVar34 >> 0x68;
    break;
  case 0xe:
    auVar34 = auVar34 >> 0x70;
    break;
  case 0xf:
    auVar34 = auVar34 >> 0x78;
  }
  auVar23[0] = -(auVar34[0] == '\0');
  auVar23[1] = -(auVar34[1] == '\0');
  auVar23[2] = -(auVar34[2] == '\0');
  auVar23[3] = -(auVar34[3] == '\0');
  auVar23[4] = -(auVar34[4] == '\0');
  auVar23[5] = -(auVar34[5] == '\0');
  auVar23[6] = -(auVar34[6] == '\0');
  auVar23[7] = -(auVar34[7] == '\0');
  auVar23[8] = -(auVar34[8] == '\0');
  auVar23[9] = -(auVar34[9] == '\0');
  auVar23[10] = -(auVar34[10] == '\0');
  auVar23[0xb] = -(auVar34[0xb] == '\0');
  auVar23[0xc] = -(auVar34[0xc] == '\0');
  auVar23[0xd] = -(auVar34[0xd] == '\0');
  auVar23[0xe] = -(auVar34[0xe] == '\0');
  auVar23[0xf] = -(auVar34[0xf] == '\0');
  uVar4 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
  if (uVar4 == 0) {
    if (uVar22 == 0) {
      if ((*pauVar21)[1] != '\0') {
        lVar20 = FUN_18028b0b0();
        return lVar20;
      }
      goto LAB_18028afa2;
    }
  }
  else {
    uVar3 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    lVar26 = auVar34._8_8_;
    switch(-uVar3) {
    case 0:
      auVar34 = ZEXT816(0);
      break;
    case 0xfffffff1:
      auVar27._0_8_ = auVar34._0_8_ << 8;
      auVar27._8_8_ = lVar26 << 8 | auVar34._0_8_ >> 0x38;
      auVar34 = auVar27 >> 8;
      break;
    case 0xfffffff2:
      auVar28._0_8_ = auVar34._0_8_ << 0x10;
      auVar28._8_8_ = lVar26 << 0x10 | auVar34._0_8_ >> 0x30;
      auVar34 = auVar28 >> 0x10;
      break;
    case 0xfffffff3:
      auVar29._0_8_ = auVar34._0_8_ << 0x18;
      auVar29._8_8_ = lVar26 << 0x18 | auVar34._0_8_ >> 0x28;
      auVar34 = auVar29 >> 0x18;
      break;
    case 0xfffffff4:
      auVar30._0_8_ = auVar34._0_8_ << 0x20;
      auVar30._8_8_ = lVar26 << 0x20 | auVar34._0_8_ >> 0x20;
      auVar34 = auVar30 >> 0x20;
      break;
    case 0xfffffff5:
      auVar31._0_8_ = auVar34._0_8_ << 0x28;
      auVar31._8_8_ = lVar26 << 0x28 | auVar34._0_8_ >> 0x18;
      auVar34 = auVar31 >> 0x28;
      break;
    case 0xfffffff6:
      auVar32._0_8_ = auVar34._0_8_ << 0x30;
      auVar32._8_8_ = lVar26 << 0x30 | auVar34._0_8_ >> 0x10;
      auVar34 = auVar32 >> 0x30;
      break;
    case 0xfffffff7:
      auVar33._0_8_ = auVar34._0_8_ << 0x38;
      auVar33._8_8_ = lVar26 << 0x38 | auVar34._0_8_ >> 8;
      auVar34 = auVar33 >> 0x38;
      break;
    case 0xfffffff8:
      auVar34._8_8_ = 0;
      break;
    case 0xfffffff9:
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar34._0_8_ << 8;
      auVar34 = (auVar5 << 0x40) >> 0x48;
      break;
    case 0xfffffffa:
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar34._0_8_ << 0x10;
      auVar34 = (auVar6 << 0x40) >> 0x50;
      break;
    case 0xfffffffb:
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar34._0_8_ << 0x18;
      auVar34 = (auVar7 << 0x40) >> 0x58;
      break;
    case 0xfffffffc:
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar34._0_8_ << 0x20;
      auVar34 = (auVar8 << 0x40) >> 0x60;
      break;
    case 0xfffffffd:
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar34._0_8_ << 0x28;
      auVar34 = (auVar9 << 0x40) >> 0x68;
      break;
    case 0xfffffffe:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar34._0_8_ << 0x30;
      auVar34 = (auVar10 << 0x40) >> 0x70;
      break;
    case 0xffffffff:
      auVar11._8_8_ = 0;
      auVar11._0_8_ = auVar34._0_8_ << 0x38;
      auVar34 = (auVar11 << 0x40) >> 0x78;
    }
    if (uVar22 == 0 || (ulonglong)uVar3 < 0x10 - uVar22) goto LAB_18028afa2;
  }
  auVar36 = pauVar21[1];
  auVar24[0] = -(auVar36[0] == '\0');
  auVar24[1] = -(auVar36[1] == '\0');
  auVar24[2] = -(auVar36[2] == '\0');
  auVar24[3] = -(auVar36[3] == '\0');
  auVar24[4] = -(auVar36[4] == '\0');
  auVar24[5] = -(auVar36[5] == '\0');
  auVar24[6] = -(auVar36[6] == '\0');
  lVar26 = auVar36._8_8_;
  auVar24[7] = -(auVar36[7] == '\0');
  auVar24[8] = -(auVar36[8] == '\0');
  auVar24[9] = -(auVar36[9] == '\0');
  auVar24[10] = -(auVar36[10] == '\0');
  auVar24[0xb] = -(auVar36[0xb] == '\0');
  auVar24[0xc] = -(auVar36[0xc] == '\0');
  auVar24[0xd] = -(auVar36[0xd] == '\0');
  auVar24[0xe] = -(auVar36[0xe] == '\0');
  auVar24[0xf] = -(auVar36[0xf] == '\0');
  uVar4 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
  uVar35 = auVar36._0_8_;
  if (uVar4 != 0) {
    uVar3 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    if ((uVar3 - uVar22) + 0x10 < 0x11) {
      switch(-uVar3) {
      case 0:
        auVar36 = ZEXT816(0);
        break;
      case 0xfffffff1:
        auVar36._0_8_ = uVar35 << 8;
        auVar36._8_8_ = lVar26 << 8 | uVar35 >> 0x38;
        break;
      case 0xfffffff2:
        auVar36._0_8_ = uVar35 << 0x10;
        auVar36._8_8_ = lVar26 << 0x10 | uVar35 >> 0x30;
        break;
      case 0xfffffff3:
        auVar36._0_8_ = uVar35 << 0x18;
        auVar36._8_8_ = lVar26 << 0x18 | uVar35 >> 0x28;
        break;
      case 0xfffffff4:
        auVar36._0_8_ = uVar35 << 0x20;
        auVar36._8_8_ = lVar26 << 0x20 | uVar35 >> 0x20;
        break;
      case 0xfffffff5:
        auVar36._0_8_ = uVar35 << 0x28;
        auVar36._8_8_ = lVar26 << 0x28 | uVar35 >> 0x18;
        break;
      case 0xfffffff6:
        auVar36._0_8_ = uVar35 << 0x30;
        auVar36._8_8_ = lVar26 << 0x30 | uVar35 >> 0x10;
        break;
      case 0xfffffff7:
        auVar36._0_8_ = uVar35 << 0x38;
        auVar36._8_8_ = lVar26 << 0x38 | uVar35 >> 8;
        break;
      case 0xfffffff8:
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar35;
        auVar36 = auVar19 << 0x40;
        break;
      case 0xfffffff9:
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar35 << 8;
        auVar36 = auVar12 << 0x40;
        break;
      case 0xfffffffa:
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar35 << 0x10;
        auVar36 = auVar13 << 0x40;
        break;
      case 0xfffffffb:
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar35 << 0x18;
        auVar36 = auVar14 << 0x40;
        break;
      case 0xfffffffc:
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar35 << 0x20;
        auVar36 = auVar15 << 0x40;
        break;
      case 0xfffffffd:
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar35 << 0x28;
        auVar36 = auVar16 << 0x40;
        break;
      case 0xfffffffe:
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar35 << 0x30;
        auVar36 = auVar17 << 0x40;
        break;
      case 0xffffffff:
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar35 << 0x38;
        auVar36 = auVar18 << 0x40;
      }
      auVar34 = auVar34 | auVar36;
LAB_18028afa2:
      cVar2 = *param_1;
      while ((cVar2 != '\0' &&
             (auVar25[0] = -(cVar2 == auVar34[0]), auVar25[1] = -(cVar2 == auVar34[1]),
             auVar25[2] = -(cVar2 == auVar34[2]), auVar25[3] = -(cVar2 == auVar34[3]),
             auVar25[4] = -(cVar2 == auVar34[4]), auVar25[5] = -(cVar2 == auVar34[5]),
             auVar25[6] = -(cVar2 == auVar34[6]), auVar25[7] = -(cVar2 == auVar34[7]),
             auVar25[8] = -(cVar2 == auVar34[8]), auVar25[9] = -(cVar2 == auVar34[9]),
             auVar25[10] = -(cVar2 == auVar34[10]), auVar25[0xb] = -(cVar2 == auVar34[0xb]),
             auVar25[0xc] = -(cVar2 == auVar34[0xc]), auVar25[0xd] = -(cVar2 == auVar34[0xd]),
             auVar25[0xe] = -(cVar2 == auVar34[0xe]), auVar25[0xf] = -(cVar2 == auVar34[0xf]),
             (((((((((((((((SUB161(auVar25 >> 7,0) & 1) == 0 && (SUB161(auVar25 >> 0xf,0) & 1) == 0)
                         && (SUB161(auVar25 >> 0x17,0) & 1) == 0) &&
                        (SUB161(auVar25 >> 0x1f,0) & 1) == 0) &&
                       (SUB161(auVar25 >> 0x27,0) & 1) == 0) && (SUB161(auVar25 >> 0x2f,0) & 1) == 0
                      ) && (SUB161(auVar25 >> 0x37,0) & 1) == 0) &&
                    (SUB161(auVar25 >> 0x3f,0) & 1) == 0) && (SUB161(auVar25 >> 0x47,0) & 1) == 0)
                  && (SUB161(auVar25 >> 0x4f,0) & 1) == 0) && (SUB161(auVar25 >> 0x57,0) & 1) == 0)
                && (SUB161(auVar25 >> 0x5f,0) & 1) == 0) && (SUB161(auVar25 >> 0x67,0) & 1) == 0) &&
              (SUB161(auVar25 >> 0x6f,0) & 1) == 0) && (SUB161(auVar25 >> 0x77,0) & 1) == 0) &&
             -1 < auVar25[0xf]))) {
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        lVar20 = lVar20 + 1;
        cVar2 = *pcVar1;
      }
      return lVar20;
    }
  }
  lVar20 = FUN_18028b0b0(param_1,param_2);
  return lVar20;
}

