/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003de56 */

void FUN_18003de56(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 local_48 [40];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVar1 = FUN_180024602();
  if (*(longlong *)(lVar1 + 8) != 0) {
    FUN_18003dedc(param_1,lVar1,param_4);
    return;
  }
  FUN_18003ae98(local_48,0,param_1 + 8,param_4);
  FUN_18003af0c(local_48);
  return;
}

