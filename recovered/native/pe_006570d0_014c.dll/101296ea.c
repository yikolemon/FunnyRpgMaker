/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101296ea */

int __fastcall FUN_101296ea(float *param_1)

{
  int iVar1;
  float *pfVar2;
  
  if (0 < *(int *)(DAT_1039d74c + 0xc9c)) {
    pfVar2 = (float *)(*(int *)(DAT_1039d74c + 0xca4) + 0xc);
    iVar1 = 0;
    do {
      if ((((pfVar2[-3] <= *param_1) && (pfVar2[-2] <= param_1[1])) &&
          (*param_1 < pfVar2[-3] + pfVar2[-1])) && (param_1[1] < pfVar2[-2] + *pfVar2)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 10;
    } while (*(int *)(DAT_1039d74c + 0xc9c) != iVar1);
  }
  return -1;
}

