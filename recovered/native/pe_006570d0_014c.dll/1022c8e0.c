/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c8e0 */

DWORD FUN_1022c8e0(void)

{
  LARGE_INTEGER LVar1;
  LARGE_INTEGER local_c;
  
  local_c.s = DAT_1039ce20.s;
  LVar1.s = local_c.s;
  local_c.s.LowPart = DAT_1039ce20.s.LowPart;
  local_c.s.HighPart = DAT_1039ce20.s.HighPart;
  if (local_c.s.LowPart == 0 && local_c.s.HighPart == 0) {
    local_c.s = LVar1.s;
    QueryPerformanceFrequency(&local_c);
    DAT_1039ce20.s = local_c.s;
    return local_c.s.LowPart;
  }
  return local_c.s.LowPart;
}

