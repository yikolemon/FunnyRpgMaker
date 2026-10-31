/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028e610 */

uint FUN_18028e610(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if (*(int *)(param_2 + 8) != 0) {
    pbVar2 = (byte *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_2 + 8));
    uVar1 = *pbVar2 & 0xf;
    return *(uint *)(pbVar2 + (-4 - (longlong)(char)(&DAT_18034e558)[uVar1])) >>
           ((&DAT_18034e568)[uVar1] & 0x1f);
  }
  return 0;
}

