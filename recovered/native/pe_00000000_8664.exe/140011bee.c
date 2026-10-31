/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140011bee */

void FUN_140011bee(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    FUN_140005640(lVar1,*param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_140011c30(param_1,lVar1);
  return;
}

