/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017755f */

void FUN_14017755f(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,param_3,param_2,0);
  if (iVar1 != 0) {
    return;
  }
  FUN_14012e0a0(param_2,&DAT_140eb0f80,param_1 + 0x100);
  return;
}

