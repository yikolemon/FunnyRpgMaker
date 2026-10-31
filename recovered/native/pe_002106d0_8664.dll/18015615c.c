/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015615c */

void FUN_18015615c(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30) + (longlong)param_2;
  FUN_1802a82f0(lVar1,lVar1 + param_3,
                (longlong)((*(int *)(param_1 + 0x18) - (param_2 + param_3)) + 1));
  *(undefined2 *)(param_1 + 0x73) = 0x101;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - param_3;
  return;
}

