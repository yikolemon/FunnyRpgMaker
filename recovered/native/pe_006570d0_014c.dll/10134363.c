/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10134363 */

uint FUN_10134363(ushort param_1,short param_2,ushort param_3,ushort param_4)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (iVar1 < 1) {
    if ((param_2 < 0) && ((short)param_4 + iVar1 < (int)(short)param_1)) {
      return (uint)param_4;
    }
  }
  else if ((int)(short)param_1 < (short)param_3 + iVar1) {
    return (uint)param_3;
  }
  return (uint)param_1 - iVar1;
}

