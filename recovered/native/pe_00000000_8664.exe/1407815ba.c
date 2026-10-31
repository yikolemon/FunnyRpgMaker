/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407815ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1407815ba(float *param_1)

{
  int iVar1;
  float *pfVar2;
  
  iVar1 = *(int *)((ulonglong)_DAT_150b1ed0d + 0xc9c);
  if (iVar1 != 0) {
    pfVar2 = (float *)(ulonglong)(*(int *)((ulonglong)_DAT_150b1ed0d + 0xca4) + 0xc);
    do {
      if ((((pfVar2[-3] <= *param_1) && (pfVar2[-2] <= param_1[1])) &&
          (*param_1 < pfVar2[-3] + pfVar2[-1])) && (param_1[1] < pfVar2[-2] + *pfVar2)) {
        return 0;
      }
    } while (iVar1 != 0);
  }
  return 0;
}

