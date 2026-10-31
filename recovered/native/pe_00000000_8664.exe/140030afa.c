/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140030afa */

void FUN_140030afa(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_58 [40];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  iVar1 = *(int *)(param_2 + 0x10);
  lVar2 = *(longlong *)(&DAT_1401c80e8 + (longlong)iVar1 * 0x10);
  FUN_140030a1c(local_58,lVar2,param_1 + 8);
  FUN_140019fc2(param_4,(&PTR_s_trace_1401c80e0)[(longlong)iVar1 * 2],
                (&PTR_s_trace_1401c80e0)[(longlong)iVar1 * 2] + lVar2);
  FUN_140030a90(local_58);
  return;
}

