/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140145b9a */

void FUN_140145b9a(longlong param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 600 + (ulonglong)param_2 * 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x260 + (ulonglong)param_2 * 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x1e0) = param_3;
  *(undefined4 *)(param_1 + 0x1ec) = param_4;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(uint *)(param_1 + 0x1dc) = param_2;
  *(uint *)(param_1 + 0x1d8) = param_2;
  return;
}

