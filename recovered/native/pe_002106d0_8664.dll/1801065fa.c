/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801065fa */

void FUN_1801065fa(longlong param_1)

{
  FUN_1802a89a0(param_1,0xff,0x136);
  if (*(longlong *)(param_1 + 0x140) != 0) {
    *(undefined8 *)(param_1 + 0x138) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    *(undefined8 *)(param_1 + 0x148) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  return;
}

