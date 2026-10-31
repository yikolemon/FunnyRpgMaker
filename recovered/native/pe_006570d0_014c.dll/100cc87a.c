/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cc87a */

undefined1 FUN_100cc87a(undefined4 param_1)

{
  int iVar1;
  undefined1 local_28 [4];
  undefined1 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ce460;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100cc933();
  FUN_100446d6();
  local_14 = 0;
  iVar1 = FUN_100cd1f0(param_1);
  if (iVar1 == DAT_1039cc90) {
    local_24 = 0;
  }
  else {
    FUN_100cd6c8(local_28,param_1);
  }
  local_14 = 0xffffffff;
  FUN_1022c200(&DAT_10388cc8);
  ExceptionList = local_1c;
  return local_24;
}

