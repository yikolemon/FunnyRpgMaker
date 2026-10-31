/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044e760 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14044e760(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    (*_DAT_14059e0c8)(&DAT_140632480);
    return;
  }
  if (iVar1 < 8) {
    FUN_140457ed0(&DAT_1406293f0 + (longlong)iVar1 * 0x28);
    return;
  }
  return;
}

