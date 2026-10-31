/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008dc4a */

void FUN_1008dc4a(void)

{
  int local_24 [2];
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)local_24;
  local_14 = &LAB_100c37a0;
  local_18 = ExceptionList;
  local_24[0] = 0x930;
  ExceptionList = &local_18;
  do {
    local_10 = 0;
    FUN_10001134();
    local_24[0] = local_24[0] + -0x18;
  } while (local_24[0] != -0x30);
  ExceptionList = local_18;
  return;
}

