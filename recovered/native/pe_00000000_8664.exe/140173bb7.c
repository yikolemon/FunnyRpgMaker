/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140173bb7 */

void FUN_140173bb7(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x50434c54,param_2,0);
  if (iVar1 != 0) {
    return;
  }
  FUN_14012e0a0(param_2,&DAT_140eb11f0,param_1 + 0x310);
  return;
}

