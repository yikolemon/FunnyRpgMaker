/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140106d90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140106d90(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,undefined8 param_6,int param_7,int param_8,longlong param_9,
                  undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStackY_e8;
  local_b8._0_8_ = _DAT_140166200;
  local_b8.ExceptionRecord = _UNK_140166208;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)FUN_14011ea60;
  local_b8.ExceptionAddress = _DAT_140166210;
  local_b8._24_8_ = _UNK_140166218;
  local_b8.ExceptionInformation[2] = param_5;
  local_b8.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_b8.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_b8.ExceptionInformation[5] = *(longlong *)(param_9 + 0x18) + param_10[1];
  local_b8.ExceptionInformation[9] = *(longlong *)(param_9 + 0x20) + param_10[1];
  local_b8.ExceptionInformation[0xb] = (ULONG_PTR)param_8;
  local_b8.ExceptionInformation[10] = _DAT_140166270;
  local_b8.ExceptionInformation[0xc]._0_4_ = _DAT_140166280;
  local_b8.ExceptionInformation[0xc]._4_4_ = _UNK_140166284;
  local_b8.ExceptionInformation[0xd]._0_4_ = _UNK_140166288;
  local_b8.ExceptionInformation[0xd]._4_4_ = _UNK_14016628c;
  local_b8.ExceptionInformation[0xe] = DAT_140166290;
  local_b8.ExceptionInformation[8] = 0x19930520;
  local_b8.ExceptionInformation[1] = param_4;
  local_b8.ExceptionInformation[4] = param_3;
  local_b8.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStackY_e8);
}

