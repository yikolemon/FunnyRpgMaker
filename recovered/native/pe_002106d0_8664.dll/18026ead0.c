/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026ead0 */

void FUN_18026ead0(PSLIST_HEADER param_1)

{
  PSLIST_ENTRY p_Var1;
  PSLIST_ENTRY_conflict p_Var2;
  
  p_Var2 = InterlockedFlushSList(param_1);
  while (p_Var2 != (PSLIST_ENTRY_conflict)0x0) {
    p_Var1 = p_Var2->Next;
    thunk_FUN_180290e40(p_Var2);
    p_Var2 = p_Var1;
  }
  return;
}

