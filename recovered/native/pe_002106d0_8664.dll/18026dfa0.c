/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026dfa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18026dfa0(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,ULONG_PTR param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStackY_e8;
  local_b8._0_8_ = _DAT_18034e620;
  local_b8.ExceptionRecord = _UNK_18034e628;
  local_b8.ExceptionAddress = _DAT_18034e630;
  local_b8._24_8_ = _UNK_18034e638;
  local_b8.ExceptionInformation[9] = _UNK_18034e688;
  local_b8.ExceptionInformation[10] = _DAT_18034e690;
  local_b8.ExceptionInformation[0xb] = _UNK_18034e698;
  local_b8.ExceptionInformation[0xe] = DAT_18034e6b0;
  local_b8.ExceptionInformation[0xc]._0_4_ = _DAT_18034e6a0;
  local_b8.ExceptionInformation[0xc]._4_4_ = _UNK_18034e6a4;
  local_b8.ExceptionInformation[0xd]._0_4_ = _UNK_18034e6a8;
  local_b8.ExceptionInformation[0xd]._4_4_ = _UNK_18034e6ac;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)FUN_18028dfb0;
  local_b8.ExceptionInformation[2] = param_5;
  local_b8.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_b8.ExceptionInformation[5] = param_6;
  local_b8.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_b8.ExceptionInformation[8] = 0x19930520;
  local_b8.ExceptionInformation[1] = param_4;
  local_b8.ExceptionInformation[4] = param_3;
  local_b8.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStackY_e8);
}

