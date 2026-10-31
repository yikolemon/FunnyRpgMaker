/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007c4e4 */

void FUN_14007c4e4(longlong param_1)

{
  if (param_1 == 0) {
    param_1 = *(longlong *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x48);
  }
  FUN_140081289(param_1,1,"##Foreground");
  return;
}

