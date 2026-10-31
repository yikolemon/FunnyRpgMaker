/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140781c1e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140781c1e(float param_1,float param_2,float param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong in_RCX;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  float in_XMM1_Da;
  float *pfVar9;
  
  uVar8 = (int)&stack0xffffffffffffffe0 - 100;
  pfVar9 = (float *)(ulonglong)uVar8;
  uVar6 = (ulonglong)(uint)param_2;
  pfVar9[0x16] = param_3;
  pfVar9[0x17] = pfVar9[0x1e];
  if ((param_2 == 0.0) || (param_2 == (float)in_RCX)) {
    *(float *)(in_RCX + 0x34) = param_1;
    *(float *)(in_RCX + 0x38) = in_XMM1_Da;
    *(undefined8 *)(in_RCX + 0x3c) = *(undefined8 *)(pfVar9 + 0x16);
  }
  fVar2 = *(float *)(in_RCX + 0x1c);
  uVar11 = (ulonglong)(uint)fVar2;
  if (fVar2 == 0.0) goto LAB_140782015;
  fVar3 = *(float *)(in_RCX + 0x20);
  uVar10 = (ulonglong)(uint)fVar3;
  pfVar9[0x14] = param_1;
  pfVar9[0x15] = in_XMM1_Da;
  fVar4 = pfVar9[0x17];
  pfVar9[0x13] = fVar4;
  pfVar9[0x12] = pfVar9[0x16];
  pfVar9[0x11] = fVar4;
  pfVar9[0x10] = pfVar9[0x16];
  if (param_2 == 0.0) {
    bVar12 = false;
    uVar7 = 0;
  }
  else {
    uVar7 = CONCAT71((uint7)(uint3)((uint)fVar4 >> 8),1);
    bVar12 = true;
    uVar5 = uVar6;
    if (param_2 != fVar2) {
      do {
        fVar4 = *(float *)(uVar5 + 0x18);
        bVar12 = fVar4 != 0.0;
        if (fVar4 == fVar2) break;
        uVar5 = (ulonglong)(uint)fVar4;
      } while (fVar4 != 0.0);
    }
    if (param_2 != fVar3) {
      do {
        fVar2 = *(float *)(uVar6 + 0x18);
        uVar6 = (ulonglong)(uint)fVar2;
        uVar7 = CONCAT71((int7)(uVar7 >> 8),fVar2 != 0.0);
        if (fVar2 == fVar3) break;
      } while (fVar2 != 0.0);
    }
  }
  if (((*(byte *)(uVar11 + 0xac) & 1) != 0 || bVar12) &&
     ((*(byte *)(uVar10 + 0xac) & 1) != 0 || (char)uVar7 != '\0')) {
    pfVar9[7] = param_2;
    pfVar9[4] = (float)uVar7;
    pfVar9[5] = param_1;
    pfVar9[6] = in_XMM1_Da;
    fVar2 = *(float *)((ulonglong)(uint)pfVar9[2] + 0xdec);
    fVar3 = pfVar9[(ulonglong)*(uint *)(in_RCX + 0x4c) + 0x16];
    pfVar9[8] = fVar2;
    *pfVar9 = fVar3 - fVar2;
    pfVar9[1] = 0.0;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(pfVar9 + -2) = &UNK_140781d3b;
    FUN_140755a9a();
  }
  if (param_2 == 0.0) {
    *(byte *)(uVar10 + 0xac) = *(byte *)(uVar10 + 0xac) & 0x7f;
    bVar1 = *(byte *)(uVar11 + 0xac);
    *(byte *)(uVar11 + 0xac) = bVar1 & 0x7f;
    uVar7 = (ulonglong)*(byte *)(uVar10 + 0xac);
    if ((bVar1 & 1) != 0) goto LAB_140781fa5;
  }
  else if (bVar12) {
LAB_140781fa5:
    *pfVar9 = pfVar9[0x13];
    pfVar9[-2] = 3.876938;
    pfVar9[-1] = 1.4013e-45;
    FUN_140781c1e(uVar11,0,pfVar9[0x12]);
  }
  if ((uVar7 & 1) != 0) {
    *pfVar9 = pfVar9[0x11];
    pfVar9[-2] = 3.8769581;
    pfVar9[-1] = 1.4013e-45;
    FUN_140781c1e(pfVar9[0x14],0,pfVar9[0x10]);
  }
LAB_140782015:
  if (_DAT_150b0ad21 != ((uint)pfVar9[0x18] ^ uVar8)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(pfVar9 + -2) = FUN_14078209e;
    FUN_1408802b0((uint)pfVar9[0x18] ^ uVar8);
  }
  return;
}

