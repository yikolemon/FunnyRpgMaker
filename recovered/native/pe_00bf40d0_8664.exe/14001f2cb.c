/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001f2cb */

void FUN_14001f2cb(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0x98);
  if (*(code **)(param_1[2] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[2] + 0x10))(param_1);
  }
  FUN_14001c53d(lVar1,(longlong)param_1);
  return;
}

