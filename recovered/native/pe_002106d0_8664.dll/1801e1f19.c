/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e1f19 */

undefined8 FUN_1801e1f19(longlong param_1,longlong param_2)

{
  FUN_1801e3b6c();
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x1c);
  return 0;
}

