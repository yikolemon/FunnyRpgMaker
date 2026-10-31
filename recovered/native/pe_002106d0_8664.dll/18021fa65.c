/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021fa65 */

void FUN_18021fa65(longlong param_1,undefined4 param_2)

{
  if ((ulonglong)*(uint *)(param_1 + 0x10) != 0) {
    *(undefined4 *)
     (*(longlong *)(param_1 + 0x18) + -8 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18) = param_2;
  }
  return;
}

