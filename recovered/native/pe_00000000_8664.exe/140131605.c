/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140131605 */

undefined8 FUN_140131605(longlong param_1,longlong param_2)

{
  FUN_140133258();
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x1c);
  return 0;
}

