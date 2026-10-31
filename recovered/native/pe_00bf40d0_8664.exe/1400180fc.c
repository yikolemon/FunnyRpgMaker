/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400180fc */

void FUN_1400180fc(void)

{
  HANDLE local_28;
  DWORD local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (DAT_14013c988 == 0) {
    if (DAT_14013c994 == '\0') {
      DAT_14013c994 = '\x01';
      local_18 = FUN_1400863a0(1);
      local_28 = FUN_1400937b8((LPSECURITY_ATTRIBUTES)0x0,0,(LPCWSTR)FUN_14001884e,local_18,0,
                               local_20);
      if (local_28 == (HANDLE)0x0) {
        local_20[0] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_14008b2a0(6);
      }
      FUN_1400182f0(&local_28);
      if (local_20[0] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14009ca6c();
      }
    }
    local_18 = FUN_1400863a0(1);
    local_28 = FUN_1400937b8((LPSECURITY_ATTRIBUTES)0x0,0,(LPCWSTR)FUN_1400190c8,local_18,0,local_20
                            );
    if (local_28 == (HANDLE)0x0) {
      local_20[0] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14008b2a0(6);
    }
    FUN_140018362(&local_28);
    if (local_20[0] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14009ca6c();
    }
  }
  return;
}

