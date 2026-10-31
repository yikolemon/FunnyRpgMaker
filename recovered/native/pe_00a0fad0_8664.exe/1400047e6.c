/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400047e6 */

undefined8
FUN_1400047e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined1 local_100 [64];
  longlong local_c0 [7];
  longlong *local_88;
  undefined1 local_80 [32];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_60 = param_3;
  local_30 = param_4;
  local_28 = param_2;
  FUN_140051544(local_c0);
  local_58 = *local_30;
  uStack_54 = local_30[1];
  uStack_50 = local_30[2];
  uStack_4c = local_30[3];
  local_48 = local_30[4];
  uStack_44 = local_30[5];
  uStack_40 = local_30[6];
  uStack_3c = local_30[7];
  *(undefined8 *)(local_30 + 4) = 0;
  *(undefined8 *)(local_30 + 6) = 0xf;
  *(undefined1 *)local_30 = 0;
  FUN_14002ca6e(local_100,local_c0);
  FUN_140006874(local_80,local_28);
  uVar1 = FUN_14002b40a(param_1,local_80,local_100,&local_58);
  uVar1 = FUN_1400515d5(uVar1);
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x20))(local_88,local_88 != local_c0);
  }
  FUN_1400017de(local_28);
  FUN_1400017de(local_30);
  return uVar1;
}

