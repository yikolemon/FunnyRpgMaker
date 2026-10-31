/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001ced1 */

void FUN_14001ced1(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x100) = param_2;
  *(undefined8 *)(param_1 + 0x108) = param_3;
  *(undefined4 *)(param_1 + 0x110) = param_4;
  *(undefined4 *)(param_1 + 0x114) = 0;
  return;
}

