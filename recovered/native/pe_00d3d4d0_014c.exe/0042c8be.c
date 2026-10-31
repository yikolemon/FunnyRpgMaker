/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042c8be */

void * FUN_0042c8be(void)

{
  undefined1 *puVar1;
  undefined1 auStack_28c [296];
  undefined1 local_164 [308];
  void *local_30;
  void *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  local_18 = &LAB_0042e770;
  local_1c = ExceptionList;
  local_30 = ExceptionList;
  local_20 = auStack_28c;
  local_28 = local_164;
  ExceptionList = &local_1c;
  FUN_0042b0ae(local_28);
  local_14 = 0;
  local_24 = auStack_28c;
  FUN_0042aa90(auStack_28c);
  puVar1 = local_24;
  *(undefined4 *)(local_24 + 0x254) = 0x40240000;
  *(undefined4 *)(puVar1 + 0x250) = 0;
  *(undefined4 *)(puVar1 + 600) = 1;
  puVar1[0x25c] = 1;
  local_14 = 0xffffffff;
  FUN_0042b8b0(local_2c);
  ExceptionList = local_1c;
  return local_2c;
}

