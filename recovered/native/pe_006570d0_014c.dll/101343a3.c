/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101343a3 */

uint FUN_101343a3(ushort param_1,ushort param_2,undefined4 param_3,ushort param_4)

{
  uint uVar1;
  
  if ((param_2 == 0) || (uVar1 = (uint)param_4, (int)(uint)param_1 <= (int)(uVar1 - param_2))) {
    uVar1 = (uint)param_2 + (uint)param_1;
  }
  return uVar1;
}

