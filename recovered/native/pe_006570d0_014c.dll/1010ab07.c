/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010ab07 */

void FUN_1010ab07(short *param_1)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  while( true ) {
    if (*(int *)(iVar1 + 0x14a8) <= (int)*param_1) break;
    if ((*(byte *)(*(int *)(iVar1 + 0x14cc) + 0xf) & 1) == 0) {
      FUN_100fcef5("Missing End()");
      FUN_1010ad44();
    }
    else if ((*(int *)(iVar1 + 0x2308) == 0) ||
            (*(int *)(*(int *)(iVar1 + 0x2308) + 0x158) != *(int *)(iVar1 + 0x14cc))) {
      FUN_100fcef5("Missing EndChild()");
      FUN_1010c644();
    }
    else {
      FUN_100fcef5("Missing EndTable()");
      FUN_1016304e();
    }
  }
  if (*(int *)(iVar1 + 0x14a8) == (int)*param_1) {
    FUN_1011158d();
    return;
  }
  return;
}

