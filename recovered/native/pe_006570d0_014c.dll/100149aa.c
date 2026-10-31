/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100149aa */

void FUN_100149aa(void)

{
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_18;
  local_c = 0xffffffff;
  local_10 = &LAB_10058dc0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_100446d6();
  local_c = 0;
  while (DAT_1039c754 != 0) {
    FUN_1022c750(&DAT_1039c7b0,&DAT_103843c0);
  }
  local_c = 0xffffffff;
  FUN_1022c200(&DAT_103843c0);
  ExceptionList = local_14;
  return;
}

