/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006f2c4 */

void FUN_14006f2c4(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    FUN_1400634c2(lVar1,*param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_14006f306(param_1,lVar1);
  return;
}

