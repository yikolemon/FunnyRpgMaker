/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017ac75 */

void FUN_18017ac75(longlong param_1)

{
  int iVar1;
  
  *(code **)(param_1 + 0x4870) = FUN_18017ade0;
  *(code **)(param_1 + 0x4878) = FUN_18017b2cf;
  *(code **)(param_1 + 0x4880) = FUN_18017b3bb;
  iVar1 = FUN_18017b457();
  if (iVar1 != 0) {
    *(code **)(param_1 + 0x4870) = FUN_18017b46b;
    *(code **)(param_1 + 0x4878) = FUN_18017bc7a;
    *(code **)(param_1 + 0x4880) = FUN_18017bec1;
  }
  return;
}

