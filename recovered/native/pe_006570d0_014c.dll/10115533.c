/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10115533 */

float10 FUN_10115533(void)

{
  float *pfVar1;
  float10 fVar2;
  float fVar3;
  float *local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float local_10 [2];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_30;
  if ((*(byte *)(DAT_1039d74c + 0x1e48) & 1) == 0) {
    pfVar1 = (float *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x218);
  }
  else {
    pfVar1 = (float *)(DAT_1039d74c + 0x1e60);
  }
  fVar3 = *pfVar1;
  if (fVar3 < 0.0) {
    local_30 = local_10;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    local_20 = fVar3;
    FUN_1010c3e4();
    local_2c = local_20 + local_10[0];
    local_30 = (float *)0x3f800000;
    fVar2 = (float10)FUN_100fdbca();
    fVar3 = (float)fVar2;
    local_24 = fVar3;
  }
  local_28 = (float)(int)fVar3;
  if (DAT_10388d00 == (local_8 ^ (uint)&local_30)) {
    return (float10)(int)fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

