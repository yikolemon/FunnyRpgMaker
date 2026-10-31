/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ac170 */

uint FUN_1401ac170(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if (*(int *)(param_2 + 8) != 0) {
    pbVar2 = (byte *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_2 + 8));
    uVar1 = *pbVar2 & 0xf;
    return *(uint *)(pbVar2 + (-4 - (longlong)(char)(&DAT_140eb2890)[uVar1])) >>
           ((&DAT_140eb28a0)[uVar1] & 0x1f);
  }
  return 0;
}

