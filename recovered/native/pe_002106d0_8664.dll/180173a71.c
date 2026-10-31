/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180173a71 */

void FUN_180173a71(longlong param_1,longlong param_2,int param_3)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(longlong *)(param_1 + 0xd0) = param_2;
  *(longlong *)(param_1 + 0xc0) = param_2;
  *(longlong *)(param_1 + 0xd8) = param_3 + param_2;
  *(longlong *)(param_1 + 200) = param_3 + param_2;
  return;
}

