/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403104fd */

undefined8 thunk_FUN_140497f34(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong alStack_48 [2];
  undefined1 uStack_38;
  char acStack_30 [4];
  char acStack_2c [4];
  char acStack_28 [4];
  char acStack_24 [4];
  char cStack_20;
  undefined4 uStack_1c;
  char cStack_18;
  undefined4 uStack_14;
  char cStack_10;
  
  alStack_48[0] = 0;
  cStack_20 = DAT_14063263c == 0;
  uStack_38 = 0;
  cStack_18 = '\0';
  cStack_10 = '\0';
  if ((bool)cStack_20) {
    acStack_30 = (char  [4])s___AV__collate_G_std___1406274c8._0_4_;
    acStack_2c = (char  [4])s___AV__collate_G_std___1406274c8._4_4_;
    acStack_28 = (char  [4])s___AV__collate_G_std___1406274c8._8_4_;
    acStack_24 = (char  [4])s___AV__collate_G_std___1406274c8._12_4_;
  }
  uVar1 = FUN_1404981ec();
  if (cStack_20 == '\x02') {
    *(uint *)(alStack_48[0] + 0x3a8) = *(uint *)(alStack_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (cStack_18 != '\0') {
    lVar2 = FUN_140484220(alStack_48);
    *(undefined4 *)(lVar2 + 0x20) = uStack_1c;
  }
  if (cStack_10 != '\0') {
    lVar2 = FUN_140484220(alStack_48);
    *(undefined4 *)(lVar2 + 0x24) = uStack_14;
  }
  return uVar1;
}

