/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10060560 */

void FUN_10060560(void)

{
  undefined1 local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = local_2c;
  local_8 = 0xffffffff;
  local_c = &LAB_100c1a70;
  local_10 = ExceptionList;
  if (DAT_1039cac4 == 0) {
    ExceptionList = &local_10;
    FUN_100b0836();
    local_8 = 0xffffffff;
    FUN_10001134();
  }
  ExceptionList = local_10;
  return;
}

