/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401294cd */

void FUN_1401294cd(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x100) = param_2;
  *(undefined8 *)(param_1 + 0x108) = param_3;
  *(undefined4 *)(param_1 + 0x110) = param_4;
  *(undefined4 *)(param_1 + 0x114) = 0;
  return;
}

