/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022e352 */

bool FUN_14022e352(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  
  if ((*(char *)(param_1 + 0x74) == '\0') &&
     (pbVar1 = (byte *)(param_2 + 1), pbVar1 != *(byte **)(param_1 + 8))) {
    if (((*(ulonglong *)(param_1 + 0x60) & 8) == 0) && ((*pbVar1 & 0xfe) == 0x28)) {
      return true;
    }
    if ((*(ulonglong *)(param_1 + 0x60) & 0x10) == 0) {
      return (*pbVar1 + 0x85 & 0xfd) == 0;
    }
  }
  return false;
}

