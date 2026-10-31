/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012f1f4 */

undefined4 FUN_14012f1f4(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_stack_00000030;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
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
  if (in_stack_00000030 == (undefined4 *)0x0) {
    uVar1 = PTR_PTR_1401ca798._0_4_;
    uVar3 = PTR_PTR_1401ca798._4_4_;
    uVar4 = PTR_DAT_1401ca7a0._0_4_;
    uVar5 = PTR_DAT_1401ca7a0._4_4_;
    if (DAT_140354b80 != 0) goto LAB_14012f242;
  }
  else {
    uVar1 = *in_stack_00000030;
    uVar3 = in_stack_00000030[1];
    uVar4 = in_stack_00000030[2];
    uVar5 = in_stack_00000030[3];
  }
  local_20 = '\x01';
  local_30 = uVar1;
  uStack_2c = uVar3;
  uStack_28 = uVar4;
  uStack_24 = uVar5;
LAB_14012f242:
  uVar1 = FUN_14012f5ec();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_14010bc10(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_14010bc10(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}

