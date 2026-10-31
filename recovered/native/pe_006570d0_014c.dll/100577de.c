/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100577de */

char * FUN_100577de(char *param_1,byte param_2)

{
  char *pcVar1;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_18;
  local_c = 0xffffffff;
  local_10 = &LAB_1005ad60;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10001f66("FF");
  pcVar1 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pcVar1 = *(char **)param_1;
  }
  *pcVar1 = "0123456789ABCDEF"[param_2 >> 4];
  pcVar1 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pcVar1 = *(char **)param_1;
  }
  pcVar1[1] = "0123456789ABCDEF"[param_2 & 0xf];
  ExceptionList = local_14;
  return param_1;
}

