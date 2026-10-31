/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a1a7c */

undefined4 FUN_1802a1a7c(void)

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
    uVar1 = PTR_PTR_180415ff8._0_4_;
    uVar3 = PTR_PTR_180415ff8._4_4_;
    uVar4 = PTR_DAT_180416000._0_4_;
    uVar5 = PTR_DAT_180416000._4_4_;
    if (DAT_18042116c != 0) goto LAB_1802a1aca;
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
LAB_1802a1aca:
  uVar1 = FUN_1802a1e74();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_180272d50(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_180272d50(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}

