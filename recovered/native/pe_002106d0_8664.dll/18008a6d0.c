/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008a6d0 */

void FUN_18008a6d0(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    FUN_180081b9a(lVar1,*param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_18008a712(param_1,lVar1);
  return;
}

