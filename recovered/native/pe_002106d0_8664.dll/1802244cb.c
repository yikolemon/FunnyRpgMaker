/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802244cb */

void FUN_1802244cb(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x50434c54,param_2,0);
  if (iVar1 != 0) {
    return;
  }
  FUN_1801cf0cc(param_2,&DAT_18034ce80,param_1 + 0x310);
  return;
}

