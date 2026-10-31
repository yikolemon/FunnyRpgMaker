/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180103228 */

void FUN_180103228(longlong param_1)

{
  if (param_1 == 0) {
    param_1 = *(longlong *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x48);
  }
  FUN_180107f71(param_1,1,"##Foreground");
  return;
}

