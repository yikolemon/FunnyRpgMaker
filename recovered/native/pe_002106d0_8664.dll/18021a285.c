/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021a285 */

void FUN_18021a285(longlong param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1801cc3a4(*(undefined4 *)(*(longlong *)(param_1 + 0x328) + 0x17c),0x3e80000);
  *param_2 = uVar1;
  *param_3 = *(int *)(*(longlong *)(param_1 + 0x328) + 0x180) << 0x10;
  *param_4 = *(int *)(*(longlong *)(param_1 + 0x328) + 0x184) << 0x10;
  return;
}

