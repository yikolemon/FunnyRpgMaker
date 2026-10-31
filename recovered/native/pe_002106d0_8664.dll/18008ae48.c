/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008ae48 */

void FUN_18008ae48(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    FUN_180081664(lVar1,0);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_18008ae86(param_1,lVar1,param_2);
  return;
}

