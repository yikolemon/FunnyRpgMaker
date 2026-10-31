/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10093340 */

int FUN_10093340(ushort param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)param_1;
  if ((param_2 == 8 || 9 < (ushort)(param_1 - 0x30)) && ((param_1 & 0xfff8) != 0x30 || param_2 != 8)
     ) {
    if (param_2 == 0x10) {
      if ((ushort)(param_1 - 0x61) < 6) {
        iVar2 = uVar1 - 0x57;
      }
      else {
        iVar2 = uVar1 - 0x37;
        if (5 < (ushort)(param_1 - 0x41)) {
          iVar2 = -1;
        }
      }
    }
    else {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = uVar1 - 0x30;
  }
  return iVar2;
}

