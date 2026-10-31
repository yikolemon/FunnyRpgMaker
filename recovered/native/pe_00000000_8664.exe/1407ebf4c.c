/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ebf4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407ebf4c(void)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float *pfVar6;
  
  pfVar5 = (float *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0x24);
  fVar1 = pfVar5[0xd];
  fVar2 = pfVar5[0x11];
  fVar9 = pfVar5[0x10];
  fVar10 = (float)_DAT_150aed3e7 * fVar9;
  fVar13 = (float)((ulonglong)_DAT_150aed3e7 >> 0x20) * fVar9;
  *pfVar5 = fVar10;
  pfVar5[1] = fVar13;
  pfVar5[2] = fVar9 * 0.0;
  pfVar5[3] = fVar9 * 0.0;
  fVar8 = fVar9 * _DAT_150aed408;
  fVar9 = fVar9 * fRam0000000150aed40c;
  fVar11 = (float)*(undefined8 *)(pfVar5 + 0xe);
  fVar12 = (float)((ulonglong)*(undefined8 *)(pfVar5 + 0xe) >> 0x20);
  *(undefined8 *)((ulonglong)(pfVar5 + 6) & 0xffffffff) = CONCAT44(fVar12 + fVar13,fVar11 + fVar10);
  *(undefined8 *)((ulonglong)(pfVar5 + 4) & 0xffffffff) = CONCAT44(fVar9 + fVar12,fVar8 + fVar11);
  pfVar5[-2] = 0.0;
  pfVar5[-1] = 0.0;
  pfVar5[-4] = 0.0;
  pfVar5[-3] = 0.0;
  *(ulonglong *)(pfVar5 + -6) = (ulonglong)(uint)fVar2;
  *(undefined8 **)(pfVar5 + -8) = (undefined8 *)((ulonglong)(pfVar5 + 6) & 0xffffffff);
  *(undefined8 **)(pfVar5 + -10) = (undefined8 *)((ulonglong)(pfVar5 + 4) & 0xffffffff);
  pfVar5[-0xc] = 3.9804497;
  pfVar5[-0xb] = 1.4013e-45;
  FUN_1407e372a(fVar1);
  fVar9 = pfVar5[6];
  fVar13 = _DAT_150aa4e48 * fVar9;
  fVar12 = _DAT_150aed45a * fVar9;
  fVar9 = fVar9 * _DAT_150aa30b6;
  fVar8 = pfVar5[5];
  fVar10 = pfVar5[4];
  fVar11 = pfVar5[-9];
  uVar4 = (uint)(pfVar5 + -10);
  pfVar6 = (float *)(ulonglong)(uVar4 - 0x1c);
  pfVar6[6] = fVar2;
  pfVar6[4] = fVar13;
  pfVar6[3] = fVar11;
  pfVar6[2] = fVar12 + fVar8;
  pfVar6[1] = fVar9 + fVar10;
  *pfVar6 = fVar1;
  pfVar6[5] = 4.2039e-45;
  pfVar6[-2] = 3.9804747;
  pfVar6[-1] = 1.4013e-45;
  FUN_1407ebe57();
  uVar7 = (ulonglong)(pfVar5 + -10) & 0xffffffff;
  if (_DAT_150b74d28 == (*(uint *)(uVar7 + 0x20) ^ uVar4)) {
    return;
  }
  uVar3 = *(uint *)(uVar7 + 0x20);
                    /* WARNING: Subroutine does not return */
  *(code **)(uVar7 - 8) = FUN_1407ec03e;
  FUN_1408802b0(uVar3 ^ uVar4);
}

