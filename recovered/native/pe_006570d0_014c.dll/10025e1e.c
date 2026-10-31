/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10025e1e */

bool FUN_10025e1e(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_24 [4];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059850;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1022bea0(0);
  local_14 = 0;
  uVar1 = FUN_1000d88a();
  iVar2 = FUN_1000d916(uVar1);
  local_14 = 0xffffffff;
  FUN_1022bee0();
  ExceptionList = local_1c;
  return iVar2 != 0;
}

