/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047f340 */

undefined4 __fastcall FUN_0047f340(undefined4 param_1)

{
  LPCRITICAL_SECTION p_Var1;
  
  LOCK();
  DAT_0050e904 = DAT_0050e904 + 1;
  UNLOCK();
  if (DAT_0050e904 == 0) {
    p_Var1 = (LPCRITICAL_SECTION)&DAT_0051ba68;
    do {
      FUN_004843a0(p_Var1);
      p_Var1 = p_Var1 + 1;
    } while (p_Var1 != (LPCRITICAL_SECTION)&DAT_0051bb28);
  }
  return param_1;
}

