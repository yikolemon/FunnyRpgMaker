/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005c104 */

undefined4 FUN_1005c104(void)

{
  undefined4 uVar1;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  int *local_2c;
  int local_28 [2];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c19b0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1005c1aa();
  local_14 = 0;
  local_38 = &stack0x00000004;
  local_34 = &stack0x00000008;
  local_30 = &stack0x0000000c;
  local_2c = local_28;
  uVar1 = FUN_1005c22f();
  local_14 = 0xffffffff;
  FUN_10060a06(local_28,*(undefined4 *)(local_28[0] + 4));
  FUN_102283a0(local_28[0],0x18);
  ExceptionList = local_1c;
  return uVar1;
}

