/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10068416 */

undefined4 FUN_10068416(undefined4 param_1)

{
  undefined4 local_2c;
  int local_28 [2];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1ae0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1005c1aa();
  local_14 = 0;
  FUN_1006233c();
  FUN_100687e5(param_1,local_28);
  local_14 = 0xffffffff;
  FUN_10060a06(local_28,*(undefined4 *)(local_28[0] + 4));
  FUN_102283a0(local_28[0],0x18);
  ExceptionList = local_1c;
  return local_2c;
}

