/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000daa4 */

undefined1 * FUN_1000daa4(int param_1)

{
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_10012a50;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1022bea0(0);
  *(undefined4 *)(local_24 + 4) = 0;
  local_24[8] = 0;
  *(undefined4 *)(local_24 + 0xc) = 0;
  local_24[0x10] = 0;
  *(undefined4 *)(local_24 + 0x14) = 0;
  *(undefined2 *)(local_24 + 0x18) = 0;
  *(undefined4 *)(local_24 + 0x1c) = 0;
  *(undefined2 *)(local_24 + 0x20) = 0;
  *(undefined4 *)(local_24 + 0x24) = 0;
  local_24[0x28] = 0;
  *(undefined4 *)(local_24 + 0x2c) = 0;
  local_24[0x30] = 0;
  local_14 = 6;
  if (param_1 != 0) {
    FUN_1022b950(local_24,param_1);
    ExceptionList = local_1c;
    return local_24;
  }
  FUN_102284d0("bad locale name");
  if (*(int *)(local_18 + 0x2c) != 0) {
    thunk_FUN_10274120(*(int *)(local_18 + 0x2c));
  }
  *(undefined4 *)(local_18 + 0x2c) = 0;
  return local_18;
}

