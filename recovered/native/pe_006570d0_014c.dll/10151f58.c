/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10151f58 */

void __fastcall FUN_10151f58(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) + param_2;
  FUN_1025b2d0(iVar1,iVar1 + param_3,(*(int *)(param_1 + 0x10) - (param_2 + param_3)) + 1);
  *(undefined2 *)(param_1 + 0x57) = 0x101;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - param_3;
  return;
}

