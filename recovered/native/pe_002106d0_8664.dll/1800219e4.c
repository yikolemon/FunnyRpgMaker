/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800219e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800219e4(void)

{
  longlong local_a8 [7];
  longlong *local_70;
  undefined *local_68;
  char local_60;
  undefined *local_58;
  char local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  while( true ) {
    local_58 = &DAT_1803fd490;
    local_50 = 0;
    FUN_180044980(&DAT_1803fd490);
    local_50 = '\x01';
    while (DAT_1804174e8 == 0) {
      FUN_18023daa0(&DAT_180417538,local_58);
    }
    FUN_1800181b0(local_a8,*(undefined8 *)
                            (DAT_1804174d0 + (DAT_1804174d8 - 1U & _DAT_1804174e0) * 8));
    FUN_180021caa(&DAT_1804174c8);
    FUN_180021c7a(&local_58);
    local_68 = &DAT_1803fd4e0;
    local_60 = 0;
    FUN_180044980(&DAT_1803fd4e0);
    local_60 = '\x01';
    FUN_18023daf0(&DAT_180417580);
    FUN_180021c7a(&local_68);
    if (local_70 == (longlong *)0x0) break;
    (**(code **)(*local_70 + 0x10))();
    if (local_60 == '\x01') {
      FUN_18023d6e0(local_68);
    }
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x20))(local_70,local_70 != local_a8);
    }
    if (local_50 == '\x01') {
      FUN_18023d6e0(local_58);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802398e0();
}

