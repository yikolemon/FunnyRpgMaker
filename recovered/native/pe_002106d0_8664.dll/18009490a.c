/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009490a */

int FUN_18009490a(undefined8 param_1,ushort param_2,int param_3)

{
  int iVar1;
  
  if ((param_3 == 8 || 9 < (ushort)(param_2 - 0x30)) && ((param_2 & 0xfff8) != 0x30 || param_3 != 8)
     ) {
    iVar1 = -1;
    if (param_3 == 0x10) {
      if ((ushort)(param_2 - 0x61) < 6) {
        return param_2 - 0x57;
      }
      iVar1 = -1;
      if ((ushort)(param_2 - 0x41) < 6) {
        iVar1 = param_2 - 0x37;
      }
    }
    return iVar1;
  }
  return param_2 - 0x30;
}

