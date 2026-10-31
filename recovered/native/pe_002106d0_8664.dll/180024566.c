/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180024566 */

void FUN_180024566(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_180024602();
  if (*(longlong *)(lVar1 + 8) != 0) {
    FUN_1800246d0(param_1,lVar1,param_4);
    return;
  }
  return;
}

