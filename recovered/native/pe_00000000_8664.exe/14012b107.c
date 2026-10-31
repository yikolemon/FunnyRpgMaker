/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012b107 */

void FUN_14012b107(undefined8 param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_3 + 0x18) + 0x60);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_2);
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  FUN_140128b39(param_1,*(undefined8 *)(param_2 + 0x38));
  *(undefined8 *)(param_2 + 0x38) = 0;
  FUN_140128b39(param_1,param_2);
  return;
}

