/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022f0a8 */

int FUN_14022f0a8(undefined8 param_1,byte param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(char)param_2;
  if ((param_3 == 8 || 9 < (byte)(param_2 - 0x30)) && ((param_2 & 0xf8) != 0x30 || param_3 != 8)) {
    iVar1 = -1;
    if (param_3 == 0x10) {
      if ((byte)(param_2 + 0x9f) < 6) {
        return iVar2 + -0x57;
      }
      iVar1 = -1;
      if ((byte)(param_2 + 0xbf) < 6) {
        iVar1 = iVar2 + -0x37;
      }
    }
    return iVar1;
  }
  return iVar2 + -0x30;
}

