/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180113b98 */

longlong FUN_180113b98(longlong param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0xaa);
  if ((-1 < sVar1) && ((int)sVar1 < *(int *)(DAT_180419160 + 0xd78))) {
    return (ulonglong)(uint)(int)sVar1 * 0x30 + *(longlong *)(DAT_180419160 + 0xd80);
  }
  return DAT_180419160 + 0x21a8;
}

