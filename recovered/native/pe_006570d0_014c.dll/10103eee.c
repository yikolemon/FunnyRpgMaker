/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10103eee */

undefined4 FUN_10103eee(int param_1,uint param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((*(char *)(DAT_1039d74c + 0xec + param_1) != '\x01') ||
      (fVar1 = *(float *)(DAT_1039d74c + 0xb74 + param_1 * 4), fVar1 < 0.0)) ||
     (((fVar1 != 0.0 || (NAN(fVar1))) &&
      ((((param_2 & 1) == 0 || (fVar1 <= *(float *)(DAT_1039d74c + 0x94))) ||
       (iVar3 = FUN_1011365b(fVar1 - *(float *)(DAT_1039d74c + 0x48),fVar1,
                             *(float *)(DAT_1039d74c + 0x94),*(undefined4 *)(DAT_1039d74c + 0x98)),
       iVar3 < 1)))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10113c9d(param_1 + 0x290,param_3);
  }
  return uVar2;
}

