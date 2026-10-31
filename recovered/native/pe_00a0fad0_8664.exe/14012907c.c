/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012907c */

int FUN_14012907c(ushort *param_1)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  uVar3 = *param_1;
  iVar4 = 0;
  do {
    param_1 = param_1 + 1;
    if (uVar3 == 0) {
      return iVar4;
    }
    if ((ushort)(uVar3 - 0x61) < 6) {
      sVar1 = -0x27;
LAB_1401290a9:
      uVar2 = uVar3 + sVar1;
    }
    else {
      uVar2 = uVar3;
      if ((ushort)(uVar3 - 0x41) < 6) {
        sVar1 = -7;
        goto LAB_1401290a9;
      }
    }
    uVar3 = *param_1;
    iVar4 = iVar4 * 0x10 + -0x30 + (uint)uVar2;
  } while( true );
}

