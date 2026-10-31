/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140483cf0 */

undefined4
FUN_140483cf0(undefined8 param_1,longlong param_2,longlong param_3,char *param_4,undefined8 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_98 [2];
  undefined1 local_88;
  char local_80 [4];
  char acStack_7c [4];
  char acStack_78 [4];
  char acStack_74 [4];
  char local_70;
  undefined4 local_6c;
  char local_68;
  undefined4 local_64;
  char local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined8 *local_28;
  
  local_98[0] = 0;
  local_88 = 0;
  local_70 = '\0';
  local_68 = '\0';
  local_60 = '\0';
  if (param_4 == (char *)0x0) {
    uVar1 = s___AV__collate_G_std___1406274c8._0_4_;
    uVar3 = s___AV__collate_G_std___1406274c8._4_4_;
    uVar4 = s___AV__collate_G_std___1406274c8._8_4_;
    uVar5 = s___AV__collate_G_std___1406274c8._12_4_;
    if (DAT_14063263c != 0) goto LAB_140483d39;
  }
  else {
    uVar1 = *(undefined4 *)param_4;
    uVar3 = *(undefined4 *)(param_4 + 4);
    uVar4 = *(undefined4 *)(param_4 + 8);
    uVar5 = *(undefined4 *)(param_4 + 0xc);
  }
  local_70 = '\x01';
  local_80 = (char  [4])uVar1;
  acStack_7c = (char  [4])uVar3;
  acStack_78 = (char  [4])uVar4;
  acStack_74 = (char  [4])uVar5;
LAB_140483d39:
  local_res20 = param_5;
  local_res8 = param_2;
  local_res10 = param_1;
  local_res18 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    local_68 = '\x01';
    local_6c = 0x16;
    FUN_1404a2100(0,0,0,0,0,local_98);
    uVar1 = 0xffffffff;
  }
  else {
    local_48 = &local_res8;
    local_40 = local_98;
    local_38 = &local_res10;
    local_30 = &local_res18;
    local_28 = &local_res20;
    local_58 = param_2;
    local_50 = param_2;
    uVar1 = operator()<>(&param_5,&local_50,&local_48,&local_58);
  }
  uVar3 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVar2 = FUN_140484220(local_98);
    *(undefined4 *)(lVar2 + 0x20) = uVar3;
  }
  if (local_60 != '\0') {
    lVar2 = FUN_140484220(local_98);
    *(undefined4 *)(lVar2 + 0x24) = local_64;
  }
  return uVar1;
}

