/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b2f4c */

undefined4 FUN_1404b2f4c(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *in_stack_00000030;
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
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (in_stack_00000030 == (char *)0x0) {
    uVar1 = s___AV__collate_G_std___1406274c8._0_4_;
    uVar3 = s___AV__collate_G_std___1406274c8._4_4_;
    uVar4 = s___AV__collate_G_std___1406274c8._8_4_;
    uVar5 = s___AV__collate_G_std___1406274c8._12_4_;
    if (DAT_14063263c != 0) goto LAB_1404b2f9a;
  }
  else {
    uVar1 = *(undefined4 *)in_stack_00000030;
    uVar3 = *(undefined4 *)(in_stack_00000030 + 4);
    uVar4 = *(undefined4 *)(in_stack_00000030 + 8);
    uVar5 = *(undefined4 *)(in_stack_00000030 + 0xc);
  }
  local_20 = '\x01';
  local_30 = (char  [4])uVar1;
  acStack_2c = (char  [4])uVar3;
  acStack_28 = (char  [4])uVar4;
  acStack_24 = (char  [4])uVar5;
LAB_1404b2f9a:
  uVar1 = FUN_1404b3344();
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

