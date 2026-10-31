/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cc970 */

void FUN_1801cc970(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + 0x98);
  if (*(code **)(param_1[2] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[2] + 0x10))(param_1);
  }
  FUN_1801c9b65(uVar1,param_1);
  return;
}

