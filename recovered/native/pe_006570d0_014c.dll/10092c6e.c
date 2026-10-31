/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10092c6e */

bool __thiscall FUN_10092c6e(int param_1,int param_2)

{
  ushort *puVar1;
  
  if (*(char *)(param_1 + 0x4c) != '\0') {
    return false;
  }
  puVar1 = (ushort *)(param_2 + 2);
  if (puVar1 != *(ushort **)(param_1 + 4)) {
    if (((*(uint *)(param_1 + 0x38) & 8) == 0) && ((*puVar1 & 0xfffe) == 0x28)) {
      return true;
    }
    if ((*(uint *)(param_1 + 0x38) & 0x10) == 0) {
      return (*puVar1 - 0x7b & 0xfffd) == 0;
    }
  }
  return false;
}

