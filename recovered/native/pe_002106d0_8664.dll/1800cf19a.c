/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cf19a */

longlong FUN_1800cf19a(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong local_80;
  longlong local_78 [7];
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(bool *)param_1 = 0 < param_3;
  local_20 = param_1;
  if (0 < param_3) {
    local_80 = param_1;
    FUN_1800181b0();
    local_38 = param_3;
    FUN_1800cf4a2(&local_30,&local_80);
    uVar3 = uStack_28;
    if (*(int *)(local_20 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18028c2e0();
    }
    uVar1 = (undefined4)local_30;
    uVar2 = local_30._4_4_;
    local_30 = 0;
    uStack_28 = 0;
    *(undefined4 *)(local_20 + 8) = uVar1;
    *(undefined4 *)(local_20 + 0xc) = uVar2;
    *(undefined4 *)(local_20 + 0x10) = uVar3;
    *(undefined4 *)(local_20 + 0x14) = uStack_24;
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x20))(local_40,local_40 != local_78);
    }
  }
  return local_20;
}

