/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076b63b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14076b63b(void)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  float *pfVar6;
  ulonglong uVar7;
  
  uVar3 = _DAT_150b08d95;
  pfVar6 = (float *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0x10);
  uVar7 = (ulonglong)_DAT_150b08d95;
  pfVar6[1] = pfVar6[6];
  *pfVar6 = (float)uVar3;
  pfVar6[-2] = 3.8548787;
  pfVar6[-1] = 1.4013e-45;
  pcVar4 = (char *)FUN_140751460();
  if (*pcVar4 == '\x01') {
    fVar1 = *(float *)(pcVar4 + 4);
    fVar2 = *(float *)(uVar7 + 0x48);
    pfVar6[3] = pfVar6[8];
    pfVar6[2] = pfVar6[7];
    pfVar6[1] = fVar1;
    *pfVar6 = fVar1 - fVar2;
    pfVar6[-2] = 3.8548925;
    pfVar6[-1] = 1.4013e-45;
    uVar5 = FUN_14076b52b();
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

