/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022db58 */

undefined4 FUN_18022db58(int *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  FUN_18022dbfe(param_2,iVar1 >> 6,iVar2 >> 6);
  *(int *)(param_2 + 0x40) = iVar1 * 4;
  *(int *)(param_2 + 0x44) = iVar2 * 4;
  return *(undefined4 *)(param_2 + 0x10);
}

