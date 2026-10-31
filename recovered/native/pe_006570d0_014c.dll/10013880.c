/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10013880 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_10013880(void)

{
  _DAT_1039c758 = NamedPipe::vftable;
  if (DAT_1039c75c != (HANDLE)0xffffffff) {
    CloseHandle(DAT_1039c75c);
    DAT_1039c75c = (HANDLE)0xffffffff;
  }
  return;
}

