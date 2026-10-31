/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10112b76 */

undefined4 FUN_10112b76(float *param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  if (((*(float *)(iVar1 + 0x148) < *(float *)(iVar1 + 0x298)) &&
      (fVar2 = *(float *)(iVar1 + 0x148) + param_1[1],
      *(float *)(iVar1 + 0x290) <= fVar2 && fVar2 != *(float *)(iVar1 + 0x290))) &&
     (*(float *)(iVar1 + 0x144) < *(float *)(iVar1 + 0x294))) {
    fVar2 = *(float *)(iVar1 + 0x144) + *param_1;
    return CONCAT31((int3)((uint)iVar1 >> 8),
                    *(float *)(iVar1 + 0x28c) <= fVar2 && fVar2 != *(float *)(iVar1 + 0x28c));
  }
  return 0;
}

