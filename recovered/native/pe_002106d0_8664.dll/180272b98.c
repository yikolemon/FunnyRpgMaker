/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180272b98 */

int FUN_180272b98(undefined8 param_1,undefined1 *param_2,longlong param_3,longlong param_4,
                 undefined4 *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
  if (param_5 == (undefined4 *)0x0) {
    uVar3 = PTR_PTR_180415ff8._0_4_;
    uVar4 = PTR_PTR_180415ff8._4_4_;
    uVar5 = PTR_DAT_180416000._0_4_;
    uVar6 = PTR_DAT_180416000._4_4_;
    if (DAT_18042116c == 0) goto LAB_180272be5;
  }
  else {
    uVar3 = *param_5;
    uVar4 = param_5[1];
    uVar5 = param_5[2];
    uVar6 = param_5[3];
LAB_180272be5:
    local_20 = '\x01';
    local_30 = uVar3;
    uStack_2c = uVar4;
    uStack_28 = uVar5;
    uStack_24 = uVar6;
  }
  if (((param_4 == 0) || (param_2 == (undefined1 *)0x0)) || (param_3 == 0)) {
    local_1c = 0x16;
  }
  else {
    iVar1 = FUN_180275aa4();
    if (iVar1 < 0) {
      *param_2 = 0;
    }
    if (iVar1 != -2) goto LAB_180272c56;
    local_1c = 0x22;
  }
  local_18 = '\x01';
  FUN_180290c30(0,0,0,0,0,local_48);
  iVar1 = -1;
LAB_180272c56:
  uVar3 = local_1c;
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_180272d50(local_48);
    *(undefined4 *)(lVar2 + 0x20) = uVar3;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_180272d50(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return iVar1;
}

