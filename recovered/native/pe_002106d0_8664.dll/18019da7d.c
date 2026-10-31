/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019da7d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_18019da7d(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = (*DAT_18041ef18)();
  if (iVar2 != 0) {
    FUN_18019db6a(&DAT_18041ef30);
    lVar1 = *param_1;
    if ((DAT_18041ef20 == 0) || ((DAT_18041ef28 == 0.0 && (!NAN(DAT_18041ef28))))) {
      DAT_18041ef28 = (double)lVar1;
      DAT_18041ef20 = lVar1;
    }
    DAT_18041ef28 = (double)(lVar1 - DAT_18041ef20) * _DAT_1804044b8 + DAT_18041ef28;
    DAT_18041ef20 = lVar1;
    *param_1 = (longlong)DAT_18041ef28;
    puVar3 = (undefined4 *)FUN_1800188ac(&DAT_18041ef30);
    *puVar3 = 0;
    return iVar2;
  }
  return 0;
}

