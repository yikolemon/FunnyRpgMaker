/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404aee50 */

undefined4 FUN_1404aee50(undefined4 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  char local_30 [4];
  char acStack_2c [4];
  char acStack_28 [4];
  char acStack_24 [4];
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_14063263c == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = (char  [4])s___AV__collate_G_std___1406274c8._0_4_;
    acStack_2c = (char  [4])s___AV__collate_G_std___1406274c8._4_4_;
    acStack_28 = (char  [4])s___AV__collate_G_std___1406274c8._8_4_;
    acStack_24 = (char  [4])s___AV__collate_G_std___1406274c8._12_4_;
    param_1 = s___AV__collate_G_std___1406274c8._0_4_;
  }
  uVar1 = FUN_1404aeee8(param_1,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_140484220(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_140484220(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}

