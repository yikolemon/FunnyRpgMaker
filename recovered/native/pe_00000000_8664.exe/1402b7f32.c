/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b7f32 */

undefined8 * FUN_1402b7f32(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 local_44;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined2 local_24;
  undefined1 local_22;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_22 = 0;
  local_24 = 0;
  local_44 = 4;
  local_20 = param_1;
  FUN_14028145c(param_1,param_2,&DAT_140629138,&local_44,param_3,&local_24);
  *local_20 = &DAT_1404cbb68;
  *(undefined4 *)(local_20 + 0xb) = 0;
  *(undefined1 *)((longlong)local_20 + 0x5c) = 0;
  local_40 = local_20 + 0xc;
  FUN_140212724(local_40,"o long");
  local_20[0x10] = DAT_1404c9190;
  local_20[0x11] = 0;
  *(undefined4 *)(local_20 + 0x12) = 0;
  local_38 = local_20 + 0x13;
  local_20[0x13] = 0;
  local_20[0x14] = 0;
  local_20[0x15] = 0;
  local_30 = local_20 + 0x16;
  local_20[0x16] = 0;
  local_20[0x17] = 0;
  local_20[0x18] = 0;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_140281564(local_20,param_2);
  }
  return local_20;
}

