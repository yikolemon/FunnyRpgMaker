/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007f912 */

void FUN_14007f912(longlong param_1)

{
  FUN_1401c5830(param_1,0xff,0x136);
  if (*(longlong *)(param_1 + 0x140) != 0) {
    *(undefined8 *)(param_1 + 0x138) = 0;
    FUN_140077b90();
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    *(undefined8 *)(param_1 + 0x148) = 0;
    FUN_140077b90();
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  return;
}

