/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407560ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407560ac(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  char *pcVar7;
  longlong unaff_RBX;
  float *pfVar8;
  float *pfVar9;
  float10 in_ST0;
  
  pfVar8 = (float *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0x18);
  fVar4 = pfVar8[10];
  pfVar9 = (float *)(ulonglong)(uint)fVar4;
  fVar1 = *pfVar9;
  fVar2 = pfVar9[2];
  if (_DAT_1509e14f7 + fVar1 < fVar2) {
    fVar5 = pfVar8[0xb];
    pcVar7 = (char *)(ulonglong)_DAT_14cc988b1039d74c;
    *pcVar7 = *pcVar7 + (char)_DAT_14cc988b1039d74c;
    fVar3 = *(float *)(pcVar7 + 0xda8);
    pfVar8[1] = fVar2;
    *pfVar8 = fVar1 + fVar3;
    pfVar8[-2] = 3.8340433;
    pfVar8[-1] = 1.4013e-45;
    FUN_14074225a();
    fVar1 = *pfVar9;
    uVar6 = *(undefined4 *)(unaff_RBX + 0x2e8);
    pfVar8[5] = pfVar8[0xc];
    pfVar8[4] = (float)in_ST0;
    pfVar8[3] = fVar1;
    pfVar8[2] = fVar5;
    pfVar8[1] = fVar4;
    *pfVar8 = (float)uVar6;
    pfVar8[-2] = 3.8340547;
    pfVar8[-1] = 1.4013e-45;
    FUN_1407ec03e();
  }
  return;
}

