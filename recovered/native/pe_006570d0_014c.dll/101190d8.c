/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101190d8 */

int FUN_101190d8(float *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(DAT_1039d74c + 0x1fe0) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(DAT_1039d74c + 0x1fe8) + iVar3);
      if (((((*(ushort *)(iVar1 + 4) & 0x1080) == 0) && (*(float *)(iVar1 + 8) <= *param_1)) &&
          (*(float *)(iVar1 + 0xc) <= param_1[1])) &&
         ((((*param_1 < *(float *)(iVar1 + 8) + *(float *)(iVar1 + 0x10) &&
            (param_1[1] < *(float *)(iVar1 + 0xc) + *(float *)(iVar1 + 0x14))) &&
           ((iVar2 == 0 || (*(int *)(iVar2 + 100) < *(int *)(iVar1 + 100))))) &&
          (*(char *)(iVar1 + 0x54) != '\0')))) {
        iVar2 = iVar1;
      }
      iVar3 = iVar3 + 4;
    } while (*(int *)(DAT_1039d74c + 0x1fe0) << 2 != iVar3);
  }
  return iVar2;
}

