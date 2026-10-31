/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ef197 */

void FUN_1801ef197(longlong param_1,uint *param_2)

{
  uint uVar1;
  
  if (*param_2 < *(uint *)(param_1 + 0x1f8)) {
    uVar1 = (**(code **)(param_1 + 0x308))();
  }
  else {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
      return;
    }
    uVar1 = 0;
  }
  *param_2 = uVar1;
  return;
}

