/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100edc66 */

void __fastcall FUN_100edc66(int param_1)

{
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100f5190;
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  ExceptionList = &local_14;
  local_1c = param_1;
  FUN_10060a06(param_1 + 0xc,*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
  FUN_102283a0(*(undefined4 *)(param_1 + 0xc),0x18);
  ExceptionList = local_14;
  return;
}

