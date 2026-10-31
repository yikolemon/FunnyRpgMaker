/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004189fd */

void FUN_004189fd(void)

{
  void **ppvVar1;
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
  local_18 = &LAB_0041a060;
  local_1c = ExceptionList;
  if (DAT_0051ba40 == 0) {
    ExceptionList = &local_1c;
    ppvVar1 = &local_30;
    if (DAT_0051ba48 == '\0') {
      DAT_0051ba48 = '\x01';
      local_30 = (void *)FUN_0047f230(1);
      local_14 = 1;
      local_24 = local_30;
      local_2c = __beginthreadex((void *)0x0,0,(_StartAddress *)&LAB_004190c6,local_30,0,&local_28);
      if (local_2c == 0) {
        local_28 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00483bb0(6);
      }
      local_30 = (void *)0x0;
      local_14 = 2;
      FUN_00418c10(&local_2c);
      local_14 = 0xffffffff;
      ppvVar1 = (void **)local_20;
      if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00493bd8();
      }
    }
    local_20 = (undefined1 *)ppvVar1;
    local_14 = 0xffffffff;
    local_30 = (void *)FUN_0047f230(1);
    local_14 = 4;
    local_24 = local_30;
    local_2c = __beginthreadex((void *)0x0,0,(_StartAddress *)&LAB_004199f6,local_30,0,&local_28);
    if (local_2c == 0) {
      local_28 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00483bb0(6);
    }
    local_30 = (void *)0x0;
    local_14 = 5;
    FUN_00418c3a(&local_2c);
    local_14 = 0xffffffff;
    if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00493bd8();
    }
  }
  ExceptionList = local_1c;
  return;
}

