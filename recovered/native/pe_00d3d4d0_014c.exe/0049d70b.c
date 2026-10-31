/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049d70b */

void __cdecl FUN_0049d70b(uint param_1)

{
  EnterCriticalSection
            ((LPCRITICAL_SECTION)((param_1 & 0x3f) * 0x38 + (&DAT_00521cc8)[(int)param_1 >> 6]));
  return;
}

