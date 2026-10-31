/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140081264 */

void FUN_140081264(longlong param_1)

{
  if (param_1 == 0) {
    param_1 = *(longlong *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x48);
  }
  FUN_140081289(param_1,0,"##Background");
  return;
}

