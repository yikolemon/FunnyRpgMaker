/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400327f0 */

void FUN_1400327f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    FUN_14000169c(lVar1,*param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    return;
  }
  FUN_140032832(param_1,lVar1);
  return;
}

