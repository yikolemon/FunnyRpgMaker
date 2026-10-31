/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042b7c0 */

void * FUN_0042b7c0(void)

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
  local_18 = &LAB_0042e710;
  local_1c = ExceptionList;
  local_30 = ExceptionList;
  local_20 = auStack_28c;
  local_28 = local_164;
  ExceptionList = &local_1c;
  FUN_00426128(local_28);
  local_14 = 0;
  local_24 = auStack_28c;
  FUN_00426746(auStack_28c);
  puVar1 = local_24;
  *(undefined4 *)(local_24 + 0x254) = 0x40240000;
  *(undefined4 *)(puVar1 + 0x250) = 0;
  *(undefined4 *)(puVar1 + 600) = 2;
  puVar1[0x25c] = 0;
  local_14 = 0xffffffff;
  FUN_0042b8b0(local_2c);
  ExceptionList = local_1c;
  return local_2c;
}

