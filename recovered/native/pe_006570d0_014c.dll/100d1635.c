/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d1635 */

void FUN_100d1635(void)

{
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ddba0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_14 = 0;
  FUN_100446d6();
  local_14 = 1;
  FUN_100446d6();
  local_14 = 2;
  FUN_100d1752();
  FUN_100d1752();
  FUN_100d1752();
  FUN_100d1752();
  FUN_100d17aa();
  local_14 = 0xffffffff;
  FUN_1022c200(&DAT_10388da4);
  FUN_1022c200(&DAT_10388d74);
  FUN_1022c200(&DAT_10388dd4);
  ExceptionList = local_1c;
  return;
}

