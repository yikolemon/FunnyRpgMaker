/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003b1ba */

undefined8 FUN_14003b1ba(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined1 local_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = param_2;
  local_20 = param_3;
  FUN_1400193d2(local_78,param_2," excludes ");
  puVar3 = local_20;
  if (0xf < (ulonglong)local_20[3]) {
    puVar3 = (undefined8 *)*local_20;
  }
  puVar2 = (undefined4 *)FUN_14000b1f8(local_78,puVar3,local_20[2]);
  local_58 = *puVar2;
  uStack_54 = puVar2[1];
  uStack_50 = puVar2[2];
  uStack_4c = puVar2[3];
  local_48 = puVar2[4];
  uStack_44 = puVar2[5];
  uStack_40 = puVar2[6];
  uStack_3c = puVar2[7];
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0xf;
  *(undefined1 *)puVar2 = 0;
  FUN_14003ca04(param_1,&local_58,0x6c);
  local_30 = param_1;
  FUN_1400017de(local_78);
  uVar1 = local_30;
  FUN_1400017de(local_28);
  FUN_1400017de(local_20);
  return uVar1;
}

