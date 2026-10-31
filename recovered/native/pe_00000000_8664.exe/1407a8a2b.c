/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a8a2b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1407a8a2b(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar9;
  float *pfVar11;
  float *pfVar12;
  ulonglong uVar13;
  float10 in_ST0;
  undefined4 uVar14;
  float fVar15;
  ulonglong uVar7;
  float *pfVar8;
  ulonglong uVar10;
  
  uVar4 = (int)&stack0xffffffffffffffe0 - 0x14;
  uVar7 = (ulonglong)uVar4;
  pfVar12 = (float *)(ulonglong)*(uint *)(uVar7 + 0x28);
  cVar3 = *(char *)(uVar7 + 0x30);
  uVar6 = *(uint *)(uVar7 + 0x2c);
  *(uint *)(uVar7 + 0x10) = _DAT_150b31744 ^ uVar4;
  uVar13 = (ulonglong)_DAT_150b4619c;
  pfVar11 = (float *)(uVar7 + 8 & 0xffffffff);
  *(undefined8 *)(uVar7 - 8) = 0xffffffffbf800000;
  *(undefined8 *)(uVar7 - 0x10) = 1;
  *(undefined8 *)(uVar7 - 0x18) = 0;
  *(ulonglong *)(uVar7 - 0x20) = (ulonglong)uVar6;
  *(float **)(uVar7 - 0x28) = pfVar11;
  *(undefined8 *)(uVar7 - 0x30) = 0x1407a8a64;
  FUN_1407559fe();
  iVar5 = (int)(uVar7 - 0x28);
  pfVar8 = (float *)(ulonglong)(iVar5 + 0x14);
  fVar1 = pfVar11[1];
  fVar2 = *(float *)(uVar13 + 0xd10);
  fVar15 = _DAT_150a33ecf;
  if (cVar3 != '\0') {
    fVar15 = *(float *)(uVar13 + 0xd24) + *(float *)(uVar13 + 0x1228);
  }
  *pfVar8 = *pfVar11 + *(float *)(uVar13 + 0xd0c) + fVar15 + *(float *)(uVar13 + 0xd0c);
  pfVar8[1] = fVar2 + fVar2 + fVar1;
  pfVar8[-2] = 3.9147193;
  pfVar8[-1] = 1.4013e-45;
  uVar14 = FUN_1407a9485();
  puVar9 = (undefined4 *)(ulonglong)(iVar5 + 0xc);
  puVar9[1] = uVar14;
  *puVar9 = puVar9[2];
  *(undefined8 *)(puVar9 + -2) = 0x1407a8adc;
  FUN_14074225a();
  uVar6 = iVar5 + 0x14;
  uVar10 = (ulonglong)uVar6;
  *pfVar12 = (float)in_ST0;
  pfVar12[1] = *(float *)(uVar10 + 4);
  if (_DAT_150b317f8 != (*(uint *)(uVar10 + 0x10) ^ uVar6)) {
    uVar4 = *(uint *)(uVar10 + 0x10);
                    /* WARNING: Subroutine does not return */
    *(code **)(uVar10 - 8) = FUN_1407a8b11;
    FUN_1408802b0(uVar4 ^ uVar6);
  }
  return pfVar12;
}

