/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002f54d */

undefined8 FUN_14002f54d(longlong param_1,longlong param_2)

{
  FUN_1400311a0(param_1,param_2);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x1c);
  return 0;
}

