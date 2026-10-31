/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140012366 */

void FUN_140012366(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    FUN_140004bf8(lVar1,0);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_1400123a4(param_1,lVar1,param_2);
  return;
}

