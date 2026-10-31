/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f40c0 */

void FUN_1800f40c0(longlong param_1)

{
  FUN_180044980();
  *(undefined1 *)(param_1 + 0x141) = 1;
  if (*(longlong *)(param_1 + 0x120) != 0 || *(longlong *)(param_1 + 0x128) != 0) {
    do {
      FUN_18023daa0(param_1 + 0xa8,param_1);
    } while (*(longlong *)(param_1 + 0x120) != 0 || *(longlong *)(param_1 + 0x128) != 0);
  }
  *(undefined1 *)(param_1 + 0x141) = 0;
  FUN_18023d6e0(param_1);
  return;
}

