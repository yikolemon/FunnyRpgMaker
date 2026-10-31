/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180227e73 */

void FUN_180227e73(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,param_3,param_2,0);
  if (iVar1 != 0) {
    return;
  }
  FUN_1801cf0cc(param_2,&DAT_18034cc10,param_1 + 0x100);
  return;
}

