/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003af76 */

void FUN_18003af76(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_58 [40];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  iVar1 = *(int *)(param_2 + 0x10);
  lVar2 = *(longlong *)(&DAT_1802b0858 + (longlong)iVar1 * 0x10);
  FUN_18003ae98(local_58,lVar2,param_1 + 8);
  FUN_180018bde(param_4,(&PTR_s_trace_1802b0850)[(longlong)iVar1 * 2],
                (&PTR_s_trace_1802b0850)[(longlong)iVar1 * 2] + lVar2);
  FUN_18003af0c(local_58);
  return;
}

