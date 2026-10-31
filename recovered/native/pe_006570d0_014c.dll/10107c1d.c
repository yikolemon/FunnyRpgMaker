/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10107c1d */

void FUN_10107c1d(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  
  iVar4 = DAT_1039d74c;
  if (0.0 < *(float *)(DAT_1039d74c + 0x27ec)) {
    iVar5 = *(int *)(DAT_1039d74c + 0x1f70) * 0x10;
    iVar1 = DAT_1039d74c + iVar5;
    iVar2 = DAT_1039d74c + 0xe08;
    iVar3 = DAT_1039d74c + 0xe04;
    fVar6 = (float10)FUN_1026d4b0((double)(*(float *)(DAT_1039d74c + 0x27ec) * DAT_102b8a58));
    FUN_100faedd((float)fVar6 * DAT_102b70e0 + DAT_102b70e0,0x3f000000,0x3f000000,iVar1 + 0xe00,
                 iVar3 + iVar5,iVar2 + iVar5);
    *(undefined4 *)(iVar4 + 0xe0c + *(int *)(iVar4 + 0x1f70) * 0x10) = 0x3f800000;
    fVar7 = *(float *)(iVar4 + 0x27ec) - *(float *)(iVar4 + 0x48);
    *(float *)(iVar4 + 0x27ec) = fVar7;
    if (fVar7 <= 0.0) {
      FUN_1011e120();
      return;
    }
  }
  return;
}

