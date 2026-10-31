/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026995a */

undefined4 FUN_1026995a(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_103a4e8c != 0) {
    return 0;
  }
  iVar1 = FUN_10279eb7();
  if (iVar1 == 0) {
    FUN_10274120(0);
    return 0xffffffff;
  }
  iVar2 = FUN_10269b25(iVar1);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    DAT_103a4e8c = iVar2;
    DAT_103a4e90 = iVar2;
  }
  FUN_10274120(0);
  FUN_10274120(iVar1);
  return uVar3;
}

