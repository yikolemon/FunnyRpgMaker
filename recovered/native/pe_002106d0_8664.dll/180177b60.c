/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180177b60 */

void FUN_180177b60(longlong param_1,longlong param_2,int param_3,undefined4 param_4)

{
  *(longlong *)(param_1 + 0x28) = param_2;
  *(longlong *)(param_1 + 0x20) = param_2;
  *(longlong *)(param_1 + 0x30) = param_3 + param_2;
  *(undefined4 *)(param_1 + 0x38) = 1;
  FUN_180177b81(param_1,param_4);
  return;
}

