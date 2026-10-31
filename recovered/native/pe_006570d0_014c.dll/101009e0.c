/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101009e0 */

void FUN_101009e0(void)

{
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_1012cae0;
  local_1c = ExceptionList;
  local_14 = 2;
  ExceptionList = &local_1c;
  FUN_10101c74();
  local_14 = 0xffffffff;
  if (*(int *)(local_24 + 0x14) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0x14));
  }
  if (*(int *)(local_24 + 8) == 0) {
    ExceptionList = local_1c;
  }
  else {
    FUN_100fa2cb(*(int *)(local_24 + 8));
    ExceptionList = local_1c;
  }
  return;
}

