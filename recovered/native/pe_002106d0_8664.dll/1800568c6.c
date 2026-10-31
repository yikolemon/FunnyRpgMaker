/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800568c6 */

void FUN_1800568c6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    FUN_18004c358(lVar1,0);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_180056904(param_1,lVar1,param_2);
  return;
}

