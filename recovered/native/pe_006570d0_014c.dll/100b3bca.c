/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b3bca */

void __fastcall FUN_100b3bca(int param_1)

{
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c48d0;
  local_10 = ExceptionList;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_8 = 0xffffffff;
    ExceptionList = &local_10;
    local_18 = param_1;
    FUN_10060b3c();
    FUN_10004eae();
    ExceptionList = local_10;
  }
  return;
}

