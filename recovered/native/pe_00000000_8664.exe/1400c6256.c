/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c6256 */

void FUN_1400c6256(undefined4 param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(DAT_140f2a910 + 0x1608);
  FUN_1400932c6(0);
  piVar1 = (int *)(lVar2 + 0x1e0);
  *piVar1 = *piVar1 + 1;
  FUN_1400914dd(param_1);
  return;
}

