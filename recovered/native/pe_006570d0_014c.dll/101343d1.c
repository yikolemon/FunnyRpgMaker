/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101343d1 */

uint FUN_101343d1(ushort param_1,ushort param_2,ushort param_3)

{
  uint uVar1;
  
  if ((param_2 == 0) || (uVar1 = (uint)param_3, uVar1 + param_2 <= (uint)param_1)) {
    uVar1 = (uint)param_1 - (uint)param_2;
  }
  return uVar1;
}

