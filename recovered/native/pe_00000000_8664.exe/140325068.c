/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140325068 */

longlong FUN_140325068(longlong param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0xaa);
  if ((-1 < sVar1) && ((int)sVar1 < *(int *)(DAT_14062a630 + 0xd78))) {
    return (ulonglong)(uint)(int)sVar1 * 0x30 + *(longlong *)(DAT_14062a630 + 0xd80);
  }
  return DAT_14062a630 + 0x21a8;
}

