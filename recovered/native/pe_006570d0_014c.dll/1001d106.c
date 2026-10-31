/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001d106 */

bool __thiscall FUN_1001d106(int param_1,int param_2)

{
  byte *pbVar1;
  
  if (*(char *)(param_1 + 0x4c) != '\0') {
    return false;
  }
  pbVar1 = (byte *)(param_2 + 1);
  if (pbVar1 != *(byte **)(param_1 + 4)) {
    if (((*(uint *)(param_1 + 0x38) & 8) == 0) && ((*pbVar1 & 0xfe) == 0x28)) {
      return true;
    }
    if ((*(uint *)(param_1 + 0x38) & 0x10) == 0) {
      return (*pbVar1 + 0x85 & 0xfd) == 0;
    }
  }
  return false;
}

