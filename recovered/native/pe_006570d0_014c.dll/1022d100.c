/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022d100 */

void FUN_1022d100(void)

{
  DWORD *pDVar1;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX p_Var2;
  int iVar3;
  DWORD DVar4;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Buffer;
  WORD WVar5;
  DWORD local_38 [12];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_38[0] = 0x2c;
  Buffer = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)(local_38 + 1);
  iVar3 = GetLogicalProcessorInformationEx(RelationProcessorPackage,Buffer,local_38);
  p_Var2 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0;
  while( true ) {
    if (iVar3 != 0) {
      if (local_38[0] != 0) {
        do {
          pDVar1 = &Buffer->Size;
          WVar5 = 0;
          if ((Buffer->u).Processor.GroupCount != 0) {
            do {
              WVar5 = WVar5 + 1;
            } while (WVar5 != (Buffer->u).Processor.GroupCount);
          }
          Buffer = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((int)&Buffer->Relationship + *pDVar1);
          local_38[0] = local_38[0] - *pDVar1;
        } while (local_38[0] != 0);
        local_38[0] = 0;
      }
      if (p_Var2 != (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0) {
        thunk_FUN_10274120(p_Var2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    DVar4 = GetLastError();
    if (DVar4 != 0x7a) break;
    Buffer = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)FUN_10235280(local_38[0],&DAT_102b9900);
    if (p_Var2 != (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0) {
      thunk_FUN_10274120(p_Var2);
    }
    if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0) goto LAB_1022d205;
    iVar3 = GetLogicalProcessorInformationEx(RelationProcessorPackage,Buffer,local_38);
    p_Var2 = Buffer;
  }
  if (p_Var2 != (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0) {
    thunk_FUN_10274120(p_Var2);
  }
LAB_1022d205:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

