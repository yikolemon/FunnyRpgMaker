/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100604e4 */

void FUN_100604e4(void)

{
  undefined1 local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = local_2c;
  local_8 = 0xffffffff;
  local_c = &LAB_100c1a60;
  local_10 = ExceptionList;
  if ((DAT_1039cac0 == 0) && (DAT_1039ca4c < 0x30000)) {
    ExceptionList = &local_10;
    FUN_100b0810();
    local_8 = 0xffffffff;
    FUN_10001134();
  }
  ExceptionList = local_10;
  return;
}

