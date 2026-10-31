/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401876d6 */

void FUN_1401876d6(longlong param_1,longlong param_2)

{
  FUN_1401c5830(param_1,0,0xd8);
  *(longlong *)(param_1 + 200) = param_2;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(longlong *)(param_1 + 0x70) = param_1 + 0x88;
  *(undefined8 *)(param_1 + 0x80) = 0x40;
  FUN_1401876b6(param_1);
  return;
}

