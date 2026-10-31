/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077e794 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14077e794(ulonglong param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  
  fVar2 = _DAT_150b1befa;
  pfVar9 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x30);
  uVar10 = param_1 & 0xffffffff;
  uVar11 = (ulonglong)(uint)_DAT_150b1befa;
  pfVar9[6] = *(float *)(param_1 + 0x8c);
  pfVar9[1] = 1.0;
  *pfVar9 = 7.00649e-45;
  pfVar9[-2] = 3.8735237;
  pfVar9[-1] = 1.4013e-45;
  fVar7 = (float)FUN_140754a09();
  if (0.0 < pfVar9[6]) {
    if ((*(byte *)(uVar10 + 0xc) & 0x80) == 0) {
      uVar6 = *(undefined4 *)(uVar10 + 0x2e8);
      fVar1 = *(float *)(uVar10 + 0x88);
      fVar12 = *(float *)(uVar10 + 0x8c);
      *(ulonglong *)((ulonglong)(pfVar9 + 9) & 0xffffffff) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(uVar10 + 0x58) >> 0x20) +
                    (float)((ulonglong)*(undefined8 *)(uVar10 + 0x50) >> 0x20),
                    (float)*(undefined8 *)(uVar10 + 0x58) + (float)*(undefined8 *)(uVar10 + 0x50));
      pfVar9[4] = fVar12;
      pfVar9[3] = fVar1;
      pfVar9[2] = fVar7;
      pfVar9[1] = SUB84(pfVar9 + 9,0);
      *pfVar9 = (float)((int)param_1 + 0x50);
      pfVar9[5] = 0.0;
      pfVar9[-2] = 3.8735492;
      pfVar9[-1] = 1.4013e-45;
      FUN_1407e3632(uVar6);
      pfVar9 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x48);
    }
    else {
      uVar8 = *(uint *)(uVar10 + 0x14);
      if ((uVar8 & 4) != 0) {
        *pfVar9 = fVar7;
        pfVar9[-2] = 3.8735566;
        pfVar9[-1] = 1.4013e-45;
        FUN_14077e993(pfVar9[6],0);
        uVar8 = *(uint *)(uVar10 + 0x14);
      }
      if ((uVar8 & 8) != 0) {
        *pfVar9 = fVar7;
        pfVar9[-2] = 3.8735633;
        pfVar9[-1] = 1.4013e-45;
        FUN_14077e993(pfVar9[6],3);
      }
    }
  }
  bVar3 = *(byte *)(uVar10 + 0x105);
  bVar4 = *(byte *)(uVar10 + 0x106);
  if ((bVar3 & bVar4) != 0xff) {
    bVar5 = bVar4;
    if (bVar4 == 0xff) {
      bVar5 = bVar3;
    }
    pfVar9[7] = fVar2;
    *pfVar9 = (float)((bVar4 != 0xff) + 0x1d);
    pfVar9[1] = 1.0;
    pfVar9[-2] = 3.8735788;
    pfVar9[-1] = 1.4013e-45;
    FUN_140754a09(bVar3,bVar5);
    pfVar9[1] = *(float *)(uVar10 + 0x8c);
    *pfVar9 = 2.0;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(pfVar9 + -2) = &UNK_14077e8d3;
    FUN_140755a9a();
  }
  if (((0.0 < *(float *)(uVar11 + 0xd18)) && ((*(byte *)(uVar10 + 0xc) & 1) == 0)) &&
     ((*(byte *)(uVar10 + 0x409) & 1) == 0)) {
    fVar12 = *(float *)(uVar10 + 0x54) + *(float *)(uVar10 + 0x90) + _DAT_150a37373;
    fVar2 = *(float *)(uVar10 + 0x50);
    uVar6 = *(undefined4 *)(uVar10 + 0x2e8);
    fVar1 = *(float *)(uVar10 + 0x58);
    fVar13 = pfVar9[6] * _DAT_150a35a25;
    pfVar9[4] = *(float *)(uVar11 + 0xd18);
    pfVar9[3] = fVar7;
    pfVar9[2] = fVar12;
    pfVar9[1] = (fVar1 + fVar2) - fVar13;
    *pfVar9 = fVar13 + fVar2;
    pfVar9[-2] = 3.8736222;
    pfVar9[-1] = 1.4013e-45;
    FUN_1407e331e(uVar6);
    pfVar9 = (float *)(ulonglong)((int)pfVar9 - 0x14);
  }
  if (_DAT_150b0767c == (*(uint *)((longlong)pfVar9 + 0x2c) ^ (uint)pfVar9)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)pfVar9 + -8) = FUN_14077e993;
  FUN_1408802b0(*(uint *)((longlong)pfVar9 + 0x2c) ^ (uint)pfVar9);
}

