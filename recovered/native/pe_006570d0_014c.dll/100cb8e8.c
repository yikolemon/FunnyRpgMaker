/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cb8e8 */

void FUN_100cb8e8(undefined4 param_1)

{
  uintptr_t uVar1;
  uint *local_30;
  void *local_2c;
  uintptr_t *local_28;
  void *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100cc510;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = (void *)FUN_10228350(0x38);
  local_14 = 0;
  FUN_100cbc64(param_1);
  local_2c = local_24;
  local_14 = 1;
  local_30 = local_28 + 1;
  uVar1 = __beginthreadex((void *)0x0,0,(_StartAddress *)&LAB_100cb9da,local_24,0,local_30);
  *local_28 = uVar1;
  if (uVar1 != 0) {
    ExceptionList = local_1c;
    return;
  }
  *local_30 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_1022d330(6);
}

