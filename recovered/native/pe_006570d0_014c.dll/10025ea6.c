/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10025ea6 */

int FUN_10025ea6(void)

{
  undefined4 uVar1;
  int iVar2;
  int local_28 [2];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059860;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1022bea0(0);
  local_14 = 0;
  local_28[0] = DAT_1039c92c;
  uVar1 = FUN_1000d88a();
  iVar2 = FUN_1000d916(uVar1);
  if ((iVar2 == 0) && (iVar2 = local_28[0], local_28[0] == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1000da81();
  }
  local_14 = 0xffffffff;
  FUN_1022bee0();
  ExceptionList = local_1c;
  return iVar2;
}

