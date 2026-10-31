/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10259050 */

void FUN_10259050(PSLIST_HEADER param_1)

{
  _SINGLE_LIST_ENTRY *p_Var1;
  PSINGLE_LIST_ENTRY p_Var2;
  
  p_Var2 = InterlockedFlushSList(param_1);
  while (p_Var2 != (PSINGLE_LIST_ENTRY)0x0) {
    p_Var1 = p_Var2->Next;
    thunk_FUN_10274120(p_Var2);
    p_Var2 = p_Var1;
  }
  return;
}

