/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10112bcf */

undefined4 FUN_10112bcf(float *param_1,float *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  if (((param_1[1] <= *(float *)(iVar1 + 0x298) && *(float *)(iVar1 + 0x298) != param_1[1]) &&
      (*(float *)(iVar1 + 0x290) <= param_2[1] && param_2[1] != *(float *)(iVar1 + 0x290))) &&
     (*param_1 <= *(float *)(iVar1 + 0x294) && *(float *)(iVar1 + 0x294) != *param_1)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),
                    *(float *)(iVar1 + 0x28c) <= *param_2 && *param_2 != *(float *)(iVar1 + 0x28c));
  }
  return 0;
}

