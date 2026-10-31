/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044b230 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14044b230(void)

{
  uint uVar1;
  
  uVar1 = (*(code *)s_GetModuleFileNameW_14059df4c._4_8_)();
  if (uVar1 == 0) {
    uVar1 = (*_DAT_14059df60)();
    return (ulonglong)uVar1 << 0x20;
  }
  return (ulonglong)uVar1;
}

