/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000a848 */

void FUN_14000a848(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  
  FUN_14000a8ba();
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = FUN_14000a942(param_1,0x20);
  *(undefined1 *)(param_1 + 0x58) = uVar1;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_14000a9f0(param_1,*(uint *)(param_1 + 0x10) | 4,0);
  }
  if (param_3 != '\0') {
    FUN_1400d3b20(param_1);
    return;
  }
  return;
}

