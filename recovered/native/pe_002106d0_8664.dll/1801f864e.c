/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f864e */

void FUN_1801f864e(short *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  
  *param_1 = (*(short *)((longlong)param_2 + 2) - (short)param_3) + 4;
  param_1[1] = (short)*param_2 - (short)param_4;
  lVar1 = (ulonglong)param_3 * 8;
  *(longlong *)(param_1 + 4) = *(longlong *)(param_2 + 10) + lVar1;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 2) + lVar1;
  *(longlong *)(param_1 + 0xc) = lVar1 + *(longlong *)(param_2 + 0xc);
  *(ulonglong *)(param_1 + 0x10) = (ulonglong)param_3 + *(longlong *)(param_2 + 4);
  *(ulonglong *)(param_1 + 0x14) = (ulonglong)param_4 * 2 + *(longlong *)(param_2 + 6);
  param_1[0x18] = (short)param_3;
  return;
}

