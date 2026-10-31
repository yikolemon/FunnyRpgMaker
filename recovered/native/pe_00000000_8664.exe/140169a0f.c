/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140169a0f */

void FUN_140169a0f(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  *param_2 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x328) + 0xba);
  *param_3 = *(longlong *)(param_1 + 0x328) + 0x11c;
  return;
}

