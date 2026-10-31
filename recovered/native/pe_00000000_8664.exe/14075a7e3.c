/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075a7e3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075a7e3(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  int unaff_retaddr;
  
  pcVar1 = (char *)(ulonglong)_DAT_1e88908b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_1e88908b1039d74c;
  *(uint *)(pcVar1 + 0x1e88) = param_2 | 0x800;
  if ((pcVar1[0x1e86] & 1U) == 0) {
    *(uint *)(pcVar1 + 0x1e88) = param_2 | 0x804;
    if (((*(int *)(pcVar1 + 0x1528) == unaff_retaddr) || (*(int *)(pcVar1 + 0x1528) == 0)) &&
       (pcVar1[0x1538] = '\x01', pcVar1[0x1539] = '\x01', *(int *)(pcVar1 + 0x1554) == unaff_retaddr
       )) {
      pcVar1[0x155c] = '\x01';
      return;
    }
  }
  return;
}

