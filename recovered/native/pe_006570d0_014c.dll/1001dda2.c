/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001dda2 */

int FUN_1001dda2(byte param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(char)param_1;
  if ((param_2 == 8 || 9 < (byte)(param_1 - 0x30)) && ((param_1 & 0xf8) != 0x30 || param_2 != 8)) {
    if (param_2 == 0x10) {
      if ((byte)(param_1 + 0x9f) < 6) {
        iVar1 = iVar1 + -0x57;
      }
      else {
        iVar1 = iVar1 + -0x37;
        if (5 < (byte)(param_1 + 0xbf)) {
          iVar1 = -1;
        }
      }
    }
    else {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = iVar1 + -0x30;
  }
  return iVar1;
}

