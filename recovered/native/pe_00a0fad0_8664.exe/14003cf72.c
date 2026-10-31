/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003cf72 */

undefined8
FUN_14003cf72(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = param_2;
  local_20 = param_4;
  FUN_14002577f(local_88,param_3);
  FUN_1400193d2(local_68,local_28,&DAT_140172797);
  FUN_140018470(local_a8);
  FUN_14000ed8c(local_c8,local_a8," required ");
  puVar2 = local_20;
  if (0xf < (ulonglong)local_20[3]) {
    puVar2 = (undefined8 *)*local_20;
  }
  puVar1 = (undefined4 *)FUN_14000b1f8(local_c8,puVar2,local_20[2]);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  local_38 = puVar1[4];
  uStack_34 = puVar1[5];
  uStack_30 = puVar1[6];
  uStack_2c = puVar1[7];
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 *)(puVar1 + 6) = 0xf;
  *(undefined1 *)puVar1 = 0;
  FUN_14000ed8c(local_e8,&local_48," missing");
  FUN_140025690(param_1,local_e8);
  FUN_1400017de(&local_48);
  FUN_1400017de(local_c8);
  FUN_1400017de(local_a8);
  FUN_1400017de(local_68);
  FUN_1400017de(local_88);
  FUN_1400017de(local_28);
  FUN_1400017de(local_20);
  return param_1;
}

