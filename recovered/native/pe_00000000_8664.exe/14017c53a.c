/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017c53a */

int FUN_14017c53a(byte *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (((uint)param_1[1] * 0x10000 + (uint)*param_1 * 0x1000000 != 0 || param_1[2] != 0) ||
      param_1[3] != 0) {
    iVar1 = 0;
    lVar2 = 0;
    do {
      iVar1 = iVar1 + (uint)param_1[lVar2 * 4 + 7] + 1;
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 !=
             (uint)param_1[1] * 0x10000 + (uint)*param_1 * 0x1000000 +
             (uint)CONCAT11(param_1[2],param_1[3]));
    return iVar1;
  }
  return 0;
}

