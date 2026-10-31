/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cccb5 */

void FUN_100cccb5(void)

{
  void *local_30;
  uintptr_t local_2c;
  uint local_28;
  void *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ce490;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_30 = (void *)FUN_10228350(1);
  local_14 = 1;
  local_24 = local_30;
  local_2c = __beginthreadex((void *)0x0,0,(_StartAddress *)&LAB_100cd9e2,local_30,0,&local_28);
  if (local_2c == 0) {
    local_28 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_1022d330(6);
  }
  local_30 = (void *)0x0;
  local_14 = 2;
  FUN_10021780();
  local_14 = 0xffffffff;
  if (local_28 == 0) {
    ExceptionList = local_1c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102716bc();
}

