/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023e530 */

void FUN_18023e530(void)

{
  DWORD *pDVar1;
  WORD WVar2;
  BOOL BVar3;
  DWORD DVar4;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Buffer;
  WORD WVar5;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX p_Var6;
  undefined1 auStack_78 [32];
  DWORD local_58 [14];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_58[0] = 0x30;
  Buffer = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0;
  BVar3 = GetLogicalProcessorInformationEx
                    (RelationProcessorPackage,
                     (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)(local_58 + 2),local_58);
  p_Var6 = Buffer;
  if (BVar3 == 0) {
    do {
      DVar4 = GetLastError();
      if (DVar4 != 0x7a) {
        if (p_Var6 != (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0) {
          thunk_FUN_1802464a0(p_Var6);
        }
        goto LAB_18023e6fc;
      }
      Buffer = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)FUN_180247140(local_58[0],&DAT_1802df3f0);
      if (p_Var6 != (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0) {
        thunk_FUN_1802464a0(p_Var6);
      }
      if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0) goto LAB_18023e6fc;
      BVar3 = GetLogicalProcessorInformationEx(RelationProcessorPackage,Buffer,local_58);
      p_Var6 = Buffer;
    } while (BVar3 == 0);
  }
  else {
    p_Var6 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)(local_58 + 2);
  }
  if (local_58[0] != 0) {
    do {
      WVar2 = (p_Var6->u).Processor.GroupCount;
      WVar5 = 0;
      pDVar1 = &p_Var6->Size;
      if (WVar2 != 0) {
        do {
          WVar5 = WVar5 + 1;
        } while (WVar5 != WVar2);
      }
      p_Var6 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)
               ((longlong)&p_Var6->Relationship + (ulonglong)*pDVar1);
      local_58[0] = local_58[0] - *pDVar1;
    } while (local_58[0] != 0);
    local_58[0] = 0;
  }
  if (Buffer != (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0) {
    thunk_FUN_1802464a0(Buffer);
  }
LAB_18023e6fc:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_78);
}

