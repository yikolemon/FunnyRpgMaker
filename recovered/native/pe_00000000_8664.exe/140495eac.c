/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140495eac */

int FUN_140495eac(undefined4 param_1)

{
  int iVar1;
  longlong lVar2;
  FILE *in_RCX;
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
  if (in_RCX == (FILE *)0x0) {
    iVar1 = common_flush_all(false);
    goto LAB_140495f31;
  }
  iVar1 = FUN_140495f80(param_1,local_48);
  if (iVar1 == 0) {
    if ((*(uint *)((longlong)&in_RCX->_base + 4) >> 0xb & 1) != 0) {
      iVar1 = _fileno(in_RCX);
      iVar1 = _commit(iVar1);
      if (iVar1 != 0) goto LAB_140495f0c;
    }
    iVar1 = 0;
  }
  else {
LAB_140495f0c:
    iVar1 = -1;
  }
LAB_140495f31:
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
  return iVar1;
}

