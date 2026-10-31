/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140766c1b */

void FUN_140766c1b(ulonglong param_1,uint param_2)

{
  float *pfVar1;
  ulonglong uVar2;
  float *pfVar3;
  float10 in_ST0;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar1 = (float *)(ulonglong)((int)&stack0xfffffffffffffff0 - 8);
  pfVar3 = (float *)(ulonglong)param_2;
  uVar2 = param_1 & 0xffffffff;
  fVar5 = *(float *)(param_1 + 0x58);
  fVar7 = *(float *)(param_1 + 0x5c);
  if ((*(byte *)(param_1 + 0x120) & 1) == 0) {
    if (*(int *)(uVar2 + 0x434) == 0) {
      if ((*(byte *)(uVar2 + 0xc) & 1) == 0) {
        fVar7 = *(float *)(uVar2 + 0x90);
      }
    }
    else {
      *pfVar1 = fVar5;
      pfVar1[-2] = 3.8503594;
      pfVar1[-1] = 1.4013e-45;
      FUN_14076d4c9();
      fVar5 = *pfVar1;
      pfVar1[1] = (float)in_ST0;
      fVar7 = pfVar1[1];
    }
  }
  fVar4 = *(float *)(uVar2 + 0x54);
  fVar6 = pfVar3[1] - fVar7;
  if ((pfVar3[1] - fVar7 <= fVar4) && (fVar6 = pfVar3[3], fVar4 <= pfVar3[3])) {
    fVar6 = fVar4;
  }
  fVar7 = *(float *)(uVar2 + 0x50);
  fVar4 = *pfVar3 - fVar5;
  if ((*pfVar3 - fVar5 <= fVar7) && (fVar4 = pfVar3[2], fVar7 <= pfVar3[2])) {
    fVar4 = fVar7;
  }
  *(float *)(uVar2 + 0x50) = fVar4;
  *(float *)(uVar2 + 0x54) = fVar6;
  return;
}

