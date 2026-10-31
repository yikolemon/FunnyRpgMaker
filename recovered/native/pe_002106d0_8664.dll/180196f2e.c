/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180196f2e */

void FUN_180196f2e(longlong param_1,undefined8 param_2)

{
  float fVar1;
  
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    fVar1 = (float)FUN_180196f76();
    if (fVar1 < DAT_180327370) {
      FUN_1801970be(param_1,param_2);
      return;
    }
  }
  FUN_180196fa8(param_1,param_2);
  return;
}

