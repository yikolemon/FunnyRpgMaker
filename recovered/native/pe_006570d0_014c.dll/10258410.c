/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10258410 */

int FUN_10258410(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  puStack_10 = &LAB_102592b0;
  local_14 = ExceptionList;
  local_c = DAT_10388d00 ^ 0x10382858;
  if ((param_2 == 0) && (DAT_103a4d34 < 1)) {
    return 0;
  }
  local_8 = 0;
  ExceptionList = &local_14;
  if ((param_2 == 1) || (param_2 == 2)) {
    iVar1 = FUN_102583e0(param_1,param_2,param_3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    iVar1 = FUN_10258370(param_1,param_2,param_3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return 0;
    }
  }
  iVar1 = FUN_100011d0(param_1,param_2,param_3);
  if ((param_2 == 1) && (iVar1 == 0)) {
    FUN_100011d0(param_1,0,param_3);
    FUN_10258370(param_1,0,param_3);
    FUN_102583e0(param_1,0,param_3);
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_10258370(param_1,param_2,param_3);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_102583e0(param_1,param_2,param_3);
    }
  }
  ExceptionList = local_14;
  return iVar1;
}

