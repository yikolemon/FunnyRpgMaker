/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000a06a */

void FUN_14000a06a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != *(undefined8 **)(param_1 + 0x10)) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0xf;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    return;
  }
  FUN_14000a09e();
  return;
}

