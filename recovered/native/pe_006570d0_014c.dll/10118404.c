/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10118404 */

void FUN_10118404(void)

{
  int iVar1;
  undefined1 uStack_20;
  char local_1f;
  char local_1e;
  char local_1d;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&uStack_20;
  iVar1 = DAT_1039d74c + 0x2778;
  FUN_101131fa("LogButtons");
  local_1c = 0;
  local_1d = FUN_1012e1b7("Log To TTY",&local_1c);
  FUN_10114a0e(0,0xbf800000);
  local_1c = 0;
  local_1e = FUN_1012e1b7("Log To File",&local_1c);
  FUN_10114a0e(0,0xbf800000);
  local_1c = 0;
  local_1f = FUN_1012e1b7("Log To Clipboard",&local_1c);
  FUN_10114a0e(0,0xbf800000);
  FUN_1011177d(1,1);
  FUN_100fdb2e(&local_1c,&DAT_1033dac7,0,0,0xbf800000);
  FUN_100fb68f((undefined4)local_1c);
  FUN_1013d499("Default Depth",iVar1,(undefined4)DAT_102b8e20,DAT_102b8e20._4_4_,0,0);
  FUN_10111839();
  FUN_10113568();
  if (local_1d != '\0') {
    FUN_10118381(0xffffffff);
  }
  if (local_1e != '\0') {
    FUN_101183b4(0xffffffff,0);
  }
  if (local_1f != '\0') {
    FUN_10110666(0xffffffff);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&uStack_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

