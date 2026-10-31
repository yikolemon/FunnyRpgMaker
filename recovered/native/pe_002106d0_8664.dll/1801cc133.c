/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cc133 */

void FUN_1801cc133(undefined8 param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_3 + 0x18) + 0x60);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_2);
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  FUN_1801c9b65(param_1,*(undefined8 *)(param_2 + 0x38));
  *(undefined8 *)(param_2 + 0x38) = 0;
  FUN_1801c9b65(param_1,param_2);
  return;
}

