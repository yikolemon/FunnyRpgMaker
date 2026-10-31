/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10134323 */

uint FUN_10134323(ushort param_1,short param_2,ushort param_3,ushort param_4)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (iVar1 < 0) {
    if ((int)(short)param_1 < (short)param_3 - iVar1) {
      return (uint)param_3;
    }
  }
  else if ((param_2 != 0) && ((short)param_4 - iVar1 < (int)(short)param_1)) {
    return (uint)param_4;
  }
  return iVar1 + (uint)param_1;
}

