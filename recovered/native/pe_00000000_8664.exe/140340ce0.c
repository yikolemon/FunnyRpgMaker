/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140340ce0 */

ulonglong FUN_140340ce0(float *param_1)

{
  ulonglong uVar1;
  float *pfVar2;
  
  if (0 < (longlong)*(int *)(DAT_14062a630 + 0xd78)) {
    pfVar2 = (float *)(*(longlong *)(DAT_14062a630 + 0xd80) + 0xc);
    uVar1 = 0;
    do {
      if ((((pfVar2[-3] <= *param_1) && (pfVar2[-2] <= param_1[1])) &&
          (*param_1 < pfVar2[-3] + pfVar2[-1])) && (param_1[1] < pfVar2[-2] + *pfVar2)) {
        return uVar1 & 0xffffffff;
      }
      uVar1 = uVar1 + 1;
      pfVar2 = pfVar2 + 0xc;
    } while ((longlong)*(int *)(DAT_14062a630 + 0xd78) != uVar1);
  }
  return 0xffffffff;
}

