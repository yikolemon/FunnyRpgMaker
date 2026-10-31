/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075bdbe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14075bdbe(char *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  float *pfVar9;
  
  pfVar9 = (float *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0x10);
  fVar4 = pfVar9[6];
  pcVar7 = (char *)(ulonglong)_DAT_ec30bc801039d74c;
  cVar5 = (char)_DAT_ec30bc801039d74c;
  *pcVar7 = *pcVar7 + cVar5;
  *param_1 = *param_1 + cVar5;
  if ((*param_1 == '\0') &&
     (fVar1 = *(float *)(pcVar7 + (ulonglong)(uint)fVar4 * 4 + 0xb74), 0.0 <= fVar1)) {
    if ((fVar1 == 0.0) && (!NAN(fVar1))) {
LAB_14075bdf4:
      pfVar9[1] = pfVar9[8];
      *pfVar9 = (float)((int)fVar4 + 0x290);
      pfVar9[-2] = 3.839724;
      pfVar9[-1] = 1.4013e-45;
      uVar8 = FUN_14076bb6d();
      return uVar8;
    }
    if ((((uint)pfVar9[7] & 1) != 0) && (fVar2 = *(float *)(pcVar7 + 0x94), fVar2 < fVar1)) {
      fVar3 = *(float *)(pcVar7 + 0x48);
      pfVar9[3] = *(float *)(pcVar7 + 0x98);
      pfVar9[2] = fVar2;
      pfVar9[1] = fVar1;
      *pfVar9 = fVar1 - fVar3;
      pfVar9[-2] = 3.8397403;
      pfVar9[-1] = 1.4013e-45;
      iVar6 = FUN_14076b52b();
      if (0 < iVar6) goto LAB_14075bdf4;
    }
  }
  return 0;
}

