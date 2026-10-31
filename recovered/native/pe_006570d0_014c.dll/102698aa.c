/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102698aa */

int thunk_FUN_10269a14(void)

{
  int iVar1;
  
  iVar1 = DAT_103a4e8c;
  if (DAT_103a4e8c == 0) {
    if (DAT_103a4e88 != 0) {
      iVar1 = FUN_1026995a();
      if (iVar1 == 0) {
        return DAT_103a4e8c;
      }
      iVar1 = FUN_10269c48();
      if (iVar1 == 0) {
        return DAT_103a4e8c;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}

