/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003a1c8 */

void __thiscall FUN_1003a1c8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_34 [20];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059e70;
  local_1c = ExceptionList;
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(&DAT_1028f2a8 + iVar1 * 8);
  ExceptionList = &local_1c;
  FUN_1003a106(iVar2,param_1 + 4,param_4);
  local_14 = 0;
  FUN_1001909c((&PTR_s_trace_1028f2a4)[iVar1 * 2],(&PTR_s_trace_1028f2a4)[iVar1 * 2] + iVar2);
  local_14 = 0xffffffff;
  FUN_1003a17a();
  ExceptionList = local_1c;
  return;
}

