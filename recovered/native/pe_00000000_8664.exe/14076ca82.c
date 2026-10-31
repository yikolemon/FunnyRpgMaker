/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076ca82 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076ca82(undefined8 param_1,undefined8 param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  char *pcVar9;
  float fVar10;
  uint uVar11;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  float10 in_ST0;
  float10 fVar16;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float fVar17;
  float fVar18;
  float *pfVar12;
  
  uVar7 = _DAT_150b0a1e6;
  cVar8 = (char)((ulonglong)param_2 >> 8);
  uVar11 = (int)&stack0xffffffffffffffe0 - 0x38;
  pfVar12 = (float *)(ulonglong)uVar11;
  uVar14 = (ulonglong)_DAT_150b0a1e6;
  uVar4 = *(uint *)(uVar14 + 0x14cc);
  uVar13 = (ulonglong)uVar4;
  fVar10 = *(float *)(uVar14 + 0x1e80);
  uVar5 = *(uint *)(uVar14 + 0x1e84);
  fVar2 = *(float *)(uVar14 + 0x1ea0);
  fVar3 = *(float *)(uVar14 + 0x1ea4);
  fVar17 = *(float *)(uVar14 + 0x1ea8);
  pfVar12[9] = *(float *)(uVar14 + 0x1e9c);
  pfVar12[10] = fVar2;
  pfVar12[0xb] = fVar3;
  pfVar12[0xc] = fVar17;
  fVar16 = in_ST1;
  if (*(char *)(uVar13 + 0x1a4) == '\0') {
    fVar2 = *(float *)(uVar13 + 0x28c);
    pfVar12[2] = *(float *)(uVar13 + 0x294);
    pfVar12[1] = fVar2;
    *pfVar12 = pfVar12[9];
    pfVar12[-2] = 3.856136;
    pfVar12[-1] = 1.4013e-45;
    fVar16 = in_ST3;
    FUN_14076ab94();
    pfVar12[9] = (float)in_ST0;
    fVar2 = *(float *)(uVar13 + 0x28c);
    pfVar12[2] = *(float *)(uVar13 + 0x294);
    pfVar12[1] = fVar2;
    *pfVar12 = pfVar12[0xb];
    pfVar12[-2] = 3.8561475;
    pfVar12[-1] = 1.4013e-45;
    in_ST0 = in_ST2;
    FUN_14076ab94();
    pfVar12[0xb] = (float)in_ST1;
  }
  if (*(char *)(uVar14 + 0x209a) == '\0') {
    uVar15 = uVar5 & 0x40;
  }
  else {
    uVar15 = uVar5 & 0x40;
    if (*(int *)(uVar14 + 0x2050) == *(int *)(uVar13 + 0x19c) && uVar15 == 0) {
      if ((uVar5 & 4) == 0) {
        pfVar12[3] = fVar10;
        pfVar12[-2] = 3.8561609;
        pfVar12[-1] = 1.4013e-45;
        FUN_14076a604(uVar7 + 0x20a0);
        *(undefined1 *)(uVar14 + 0x209a) = 0;
        pcVar9 = (char *)(ulonglong)_DAT_b88001b11039d74c;
        *pcVar9 = *pcVar9 + (char)_DAT_b88001b11039d74c;
        *(char *)(uVar13 + 6) = *(char *)(uVar13 + 6) + cVar8;
        pcVar9[0x2099] = pcVar9[0x209a];
      }
      else {
        uVar15 = 0;
        if (*(int *)(uVar14 + 0x20a4) != 0) goto LAB_14076cba3;
        pfVar12[3] = fVar10;
        pfVar12[-2] = 3.856178;
        pfVar12[-1] = 1.4013e-45;
        FUN_14076a604(uVar7 + 0x20a0);
      }
      uVar15 = 0;
      fVar10 = pfVar12[3];
    }
  }
LAB_14076cba3:
  if (((uVar15 == 0 & *(byte *)(uVar14 + 0x20d9)) == 1) &&
     ((uVar15 = *(uint *)(uVar14 + 0x20dc), (uVar15 >> 9 & 1) != 0 ||
      ((*(byte *)(uVar13 + 0xe) & 1) == 0)))) {
    if ((uVar15 >> 10 & 1) == 0) {
      if (((uVar15 & 0x10) != 0) || (*(float *)(uVar14 + 0x2044) != fVar10)) {
        pfVar12[3] = fVar10;
        iVar6 = uVar7 + 0x2190;
        if (uVar4 == *(uint *)(uVar14 + 0x2048)) {
          iVar6 = uVar7 + 0x2120;
        }
        pfVar12[-2] = 3.8562036;
        pfVar12[-1] = 1.4013e-45;
        cVar8 = FUN_14077f11c(iVar6,(ulonglong)(pfVar12 + 9) & 0xffffffff);
        if (cVar8 != '\0') {
          pfVar12[-2] = 3.8562062;
          pfVar12[-1] = 1.4013e-45;
          FUN_14076a604(iVar6);
        }
        fVar10 = pfVar12[3];
        if ((*(byte *)(uVar14 + 0x20dc) & 0x20) != 0) {
          if (pfVar12[10] < *(float *)(uVar13 + 600)) {
            fVar2 = pfVar12[0xc];
            fVar3 = *(float *)(uVar13 + 0x250);
            if (((fVar3 < fVar2) &&
                (pfVar12[9] <= *(float *)(uVar13 + 0x254) &&
                 *(float *)(uVar13 + 0x254) != pfVar12[9])) &&
               (*(float *)(uVar13 + 0x24c) <= pfVar12[0xb] &&
                pfVar12[0xb] != *(float *)(uVar13 + 0x24c))) {
              pfVar12[2] = *(float *)(uVar13 + 600);
              pfVar12[1] = fVar3;
              *pfVar12 = fVar2;
              pfVar12[4] = pfVar12[10];
              pfVar12[6] = fVar2;
              pfVar12[-2] = 3.8562384;
              pfVar12[-1] = 1.4013e-45;
              FUN_14076ab94();
              pfVar12[8] = (float)in_ST0;
              pfVar12[5] = pfVar12[8];
              fVar10 = *(float *)(uVar13 + 0x250);
              pfVar12[2] = *(float *)(uVar13 + 600);
              pfVar12[1] = fVar10;
              *pfVar12 = pfVar12[4];
              pfVar12[-2] = 3.8562527;
              pfVar12[-1] = 1.4013e-45;
              FUN_14076ab94();
              fVar10 = pfVar12[3];
              pfVar12[7] = (float)fVar16;
              if ((pfVar12[6] - pfVar12[4]) * _DAT_150a23ed4 <= pfVar12[5] - pfVar12[7]) {
                pfVar12[-2] = 3.8562675;
                pfVar12[-1] = 1.4013e-45;
                cVar8 = FUN_14077f11c(uVar7 + 0x2158,(ulonglong)(pfVar12 + 9) & 0xffffffff);
                fVar10 = pfVar12[3];
                if (cVar8 != '\0') {
                  pfVar12[-2] = 3.856271;
                  pfVar12[-1] = 1.4013e-45;
                  FUN_14076a604(uVar7 + 0x2158);
                  fVar10 = pfVar12[3];
                }
              }
            }
          }
        }
      }
    }
    else {
      *pfVar12 = (float)uVar15;
      pfVar12[-2] = 3.8562753;
      pfVar12[-1] = 1.4013e-45;
      FUN_14077effe(fVar10,uVar5);
    }
  }
  if (*(float *)(uVar14 + 0x2044) == fVar10) {
    if (*(uint *)(uVar14 + 0x2048) != uVar4) {
      *pfVar12 = (float)uVar4;
      pfVar12[-2] = 3.8562825;
      pfVar12[-1] = 1.4013e-45;
      FUN_14076a25c();
    }
    *(undefined4 *)(uVar14 + 0x2050) = *(undefined4 *)(uVar13 + 0x19c);
    *pfVar12 = (float)*(undefined4 *)(uVar14 + 0x1e3c);
    pfVar12[-2] = 3.8562887;
    pfVar12[-1] = 1.4013e-45;
    FUN_140769fa9();
    *(undefined4 *)(uVar14 + 0x204c) = *(undefined4 *)(uVar14 + 0x1e3c);
    *(undefined1 *)(uVar14 + 0x2043) = 1;
    *(uint *)(uVar14 + 0x2054) = uVar5;
    if ((*(byte *)(uVar14 + 0x1e86) & 0x20) != 0) {
      *(undefined4 *)(uVar14 + 0x2094) = *(undefined4 *)(uVar14 + 0x1e5c);
      *(undefined4 *)(uVar14 + 0x2090) = *(undefined4 *)(uVar14 + 0x1e58);
    }
    fVar17 = (float)*(undefined8 *)(uVar13 + 0x154);
    fVar18 = (float)((ulonglong)*(undefined8 *)(uVar13 + 0x154) >> 0x20);
    fVar10 = pfVar12[10];
    fVar2 = pfVar12[0xb];
    fVar3 = pfVar12[0xc];
    pfVar1 = (float *)(uVar13 + 0x3cc + (ulonglong)(uint)(*(int *)(uVar13 + 0x19c) << 4));
    *pfVar1 = pfVar12[9] - fVar17;
    pfVar1[1] = fVar10 - fVar18;
    pfVar1[2] = fVar2 - fVar17;
    pfVar1[3] = fVar3 - fVar18;
  }
  if (_DAT_150af5ad9 == ((uint)pfVar12[0xd] ^ uVar11)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(pfVar12 + -2) = FUN_14076cdf0;
  FUN_1408802b0((uint)pfVar12[0xd] ^ uVar11);
}

