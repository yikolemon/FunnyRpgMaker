/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011ea20 */

uint FUN_14011ea20(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if (*(int *)(param_2 + 8) != 0) {
    pbVar2 = (byte *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_2 + 8));
    uVar1 = *pbVar2 & 0xf;
    return *(uint *)(pbVar2 + (-4 - (longlong)(char)(&DAT_1401661e0)[uVar1])) >>
           ((&DAT_1401661f0)[uVar1] & 0x1f);
  }
  return 0;
}

