/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003c99c */

void FUN_14003c99c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_118 [32];
  undefined8 local_f8 [2];
  longlong local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 **local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1400045b6(param_1,local_b8);
  FUN_14001679e(local_98,param_1,0);
  FUN_14003de8b(local_50,local_98,local_b8);
  local_60 = local_50;
  if (7 < local_38) {
    local_60 = local_50[0];
  }
  local_58 = local_40;
  FUN_140017160(local_f8,&local_60,&local_70);
  FUN_140001056(local_50);
  FUN_140001056(local_98);
  FUN_140001056(local_b8);
  if ((local_f8 != param_1) && (local_e8 == 0)) {
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    FUN_14001617e(local_f8,puVar2,param_1[2]);
  }
  local_78 = FUN_140004704(param_1 + 9,param_1[4]);
  FUN_140005a64(local_50);
  FUN_14003e010(&local_60,local_50);
  FUN_140005ad0(local_50,local_50,local_50[0][1]);
  thunk_FUN_14018e090(local_50[0],0x50);
  FUN_14000f088(local_d8,local_f8);
  uVar1 = FUN_14003e090(&local_60,"SaveSelectGamePath");
  FUN_14000a108(uVar1,local_d8);
  FUN_14001039e(local_c8,&local_78);
  uVar1 = FUN_14003e090(&local_60,"SaveLaunchFollow");
  FUN_14000a108(uVar1,local_c8);
  FUN_14003e176(&local_60,local_50,0xffffffff,0x20,0,0);
  local_70 = local_50;
  if (0xf < local_38) {
    local_70 = local_50[0];
  }
  local_68 = local_40;
  FUN_1400045b6(param_1,local_118);
  local_2a = 1;
  FUN_1400027d2(local_98,"Launcher/app.config");
  local_29 = 0;
  FUN_140055480(local_b8,local_98,local_118);
  FUN_14003e0e4(local_b8,&local_70);
  FUN_140001056(local_b8);
  local_29 = 0;
  FUN_14000109c(local_98);
  local_2a = 0;
  FUN_14000109c(local_50);
  FUN_140004b06(&local_60);
  FUN_14000109c(local_f8);
  return;
}

