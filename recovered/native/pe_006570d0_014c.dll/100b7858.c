/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b7858 */

undefined4 * __thiscall FUN_100b7858(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c4af0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_14 = 0;
  if (*(uint *)(param_2 + 0x18) < 0x10) {
    iVar1 = param_2 + 4;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  local_24 = param_1;
  FUN_1000254c(iVar1,*(undefined4 *)(param_2 + 0x14));
  ExceptionList = local_1c;
  return local_24;
}

