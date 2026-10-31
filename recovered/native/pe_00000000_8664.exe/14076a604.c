/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076a604 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076a604(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  
  pcVar5 = (char *)(ulonglong)_DAT_14cc908b1039d74c;
  *pcVar5 = *pcVar5 + (char)_DAT_14cc908b1039d74c;
  *param_1 = (int)param_2;
  param_1[1] = *(undefined4 *)(pcVar5 + 0x1e80);
  param_1[2] = *(undefined4 *)(pcVar5 + 0x1e3c);
  uVar1 = *(uint *)(pcVar5 + 0x1e84);
  param_1[7] = uVar1;
  fVar2 = *(float *)(pcVar5 + 0x1ea0);
  fVar3 = *(float *)(pcVar5 + 0x1ea4);
  fVar4 = *(float *)(pcVar5 + 0x1ea8);
  fVar6 = (float)*(undefined8 *)(param_2 + 0x154);
  fVar7 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x154) >> 0x20);
  param_1[3] = *(float *)(pcVar5 + 0x1e9c) - fVar6;
  param_1[4] = fVar2 - fVar7;
  param_1[5] = fVar3 - fVar6;
  param_1[6] = fVar4 - fVar7;
  if ((uVar1 >> 0x15 & 1) != 0) {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(pcVar5 + 0x1e58);
  }
  return;
}

