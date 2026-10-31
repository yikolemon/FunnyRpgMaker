/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027a490 */

int FUN_1027a490(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  if ((*param_1 != 0) && (param_1[1] == 0x3a)) {
    uVar1 = uVar2 - 0x20;
    if (0x19 < uVar2 - 0x61) {
      uVar1 = uVar2;
    }
    return uVar1 - 0x40;
  }
  return 0;
}

