/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006d0a5 */

void FUN_14006d0a5(longlong param_1,undefined4 param_2)

{
  if ((ulonglong)*(uint *)(param_1 + 0x10) != 0) {
    *(undefined4 *)
     (*(longlong *)(param_1 + 0x18) + -8 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18) = param_2;
  }
  return;
}

