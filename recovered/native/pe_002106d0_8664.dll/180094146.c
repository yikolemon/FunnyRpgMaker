/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180094146 */

bool FUN_180094146(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  
  if ((*(char *)(param_1 + 0x74) == '\0') &&
     (puVar1 = (ushort *)(param_2 + 2), puVar1 != *(ushort **)(param_1 + 8))) {
    if (((*(ulonglong *)(param_1 + 0x60) & 8) == 0) && ((*puVar1 & 0xfffe) == 0x28)) {
      return true;
    }
    if ((*(ulonglong *)(param_1 + 0x60) & 0x10) == 0) {
      return (*puVar1 - 0x7b & 0xfffd) == 0;
    }
  }
  return false;
}

