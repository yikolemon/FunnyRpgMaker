/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b0aca */

undefined8 * FUN_1402b0aca(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined4 local_2c;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_2c = 1;
  local_20 = param_1;
  FUN_14028145c(param_1,param_2,&DAT_1406290a0,&local_2c,param_3,&DAT_1404cb55c);
  *local_20 = &DAT_1404caa28;
  *(undefined1 *)(local_20 + 0xb) = 0;
  local_28 = local_20 + 0xc;
  local_20[0xc] = 0;
  local_20[0xd] = 0;
  local_20[0xe] = 0;
  *(undefined2 *)(local_20 + 0xf) = 0;
  *(undefined1 *)((longlong)local_20 + 0x7a) = 0;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    uVar1 = FUN_140281564(local_20,param_2);
    *(undefined1 *)(local_20 + 0xb) = uVar1;
  }
  return local_20;
}

