/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f6fc0 */

void FUN_1800f6fc0(longlong *param_1)

{
  longlong *local_30;
  char local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_30 = param_1 + 4;
  FUN_180044980();
  local_28 = '\x01';
  if (*(char *)((longlong)param_1 + 0xc2) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xc2) = 1;
    (**(code **)(*param_1 + 0x20))(param_1,&local_30);
  }
  if (*(int *)((longlong)param_1 + 0xbc) == 0) {
    do {
      FUN_18023daa0(param_1 + 0xe,local_30);
    } while (*(int *)((longlong)param_1 + 0xbc) == 0);
  }
  if (local_28 == '\x01') {
    FUN_18023d6e0(local_30);
  }
  return;
}

