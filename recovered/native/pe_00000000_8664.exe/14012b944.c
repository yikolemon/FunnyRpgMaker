/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012b944 */

void FUN_14012b944(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + 0x98);
  if (*(code **)(param_1[2] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[2] + 0x10))(param_1);
  }
  FUN_140128b39(uVar1,param_1);
  return;
}

