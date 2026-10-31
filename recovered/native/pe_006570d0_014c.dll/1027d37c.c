/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027d37c */

int FUN_1027d37c(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = *param_1;
  while (uVar1 != 0) {
    param_1 = param_1 + 1;
    if ((ushort)(uVar1 - 0x61) < 6) {
      uVar1 = uVar1 - 0x27;
    }
    else if ((ushort)(uVar1 - 0x41) < 6) {
      uVar1 = uVar1 - 7;
    }
    iVar2 = iVar2 * 0x10 + -0x30 + (uint)uVar1;
    uVar1 = *param_1;
  }
  return iVar2;
}

