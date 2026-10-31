/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003c066 */

undefined8
FUN_14003c066(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
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
  
  local_30 = 0xfffffffffffffffe;
  uVar2 = param_2 ^ 1;
  if (((param_3 ^ 1) == 0 && uVar2 == 0) && param_4 == 0) {
    FUN_140006fbc(&local_58,"Exactly 1 option from [",param_5);
    FUN_14000ed8c(local_1d8,&local_58,&DAT_1401705ae);
    FUN_14003b76e(param_1,local_1d8);
    FUN_1400017de(&local_58);
  }
  else if (((param_3 ^ 1) == 0 && uVar2 == 0) && 1 < param_4) {
    FUN_14001943c(local_b8,param_4);
    FUN_140006fbc(local_78,"Exactly 1 option from [",param_5);
    FUN_14000ed8c(local_98,local_78,"] is required but ");
    FUN_140018470(&local_58);
    FUN_14000ed8c(local_1b8,&local_58," were given");
    FUN_14003cc70(param_1,local_1b8,0x6a);
    FUN_1400017de(&local_58);
    FUN_1400017de(local_98);
    FUN_1400017de(local_78);
    FUN_1400017de(local_b8);
  }
  else if (uVar2 == 0 && param_4 == 0) {
    FUN_140006fbc(&local_58,"At least 1 option from [",param_5);
    FUN_14000ed8c(local_198,&local_58,&DAT_1401705ae);
    FUN_14003b76e(param_1,local_198);
    FUN_1400017de(&local_58);
  }
  else if (param_4 < param_2) {
    FUN_14001943c(local_78,param_4);
    FUN_14001943c(local_d8,param_2);
    FUN_140018136(local_f8,"Requires at least ",local_d8);
    FUN_14000ed8c(local_118,local_f8," options used but only ");
    FUN_140018470(local_98);
    FUN_14000ed8c(local_b8,local_98," were given from [");
    puVar1 = param_5 + 2;
    if (0xf < (ulonglong)param_5[3]) {
      param_5 = (undefined8 *)*param_5;
    }
    puVar3 = (undefined4 *)FUN_14000b1f8(local_b8,param_5,*puVar1);
    local_58 = *puVar3;
    uStack_54 = puVar3[1];
    uStack_50 = puVar3[2];
    uStack_4c = puVar3[3];
    local_48 = puVar3[4];
    uStack_44 = puVar3[5];
    uStack_40 = puVar3[6];
    uStack_3c = puVar3[7];
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 6) = 0xf;
    *(undefined1 *)puVar3 = 0;
    FUN_14000ed8c(local_178,&local_58,&DAT_1401705ae);
    FUN_14003cc70(param_1,local_178,0x6a);
    FUN_1400017de(&local_58);
    FUN_1400017de(local_b8);
    FUN_1400017de(local_98);
    FUN_1400017de(local_118);
    FUN_1400017de(local_f8);
    FUN_1400017de(local_d8);
    FUN_1400017de(local_78);
  }
  else if (param_3 == 1) {
    FUN_140006fbc(&local_58,"Requires at most 1 options be given from [",param_5);
    FUN_14000ed8c(local_158,&local_58,&DAT_1401705ae);
    FUN_14003cc70(param_1,local_158,0x6a);
    FUN_1400017de(&local_58);
  }
  else {
    FUN_14001943c(local_78,param_4);
    FUN_14001943c(local_d8,param_3);
    FUN_140018136(local_f8,"Requires at most ",local_d8);
    FUN_14000ed8c(local_118,local_f8," options be used but ");
    FUN_140018470(local_98);
    FUN_14000ed8c(local_b8,local_98," were given from [");
    puVar1 = param_5 + 2;
    if (0xf < (ulonglong)param_5[3]) {
      param_5 = (undefined8 *)*param_5;
    }
    puVar3 = (undefined4 *)FUN_14000b1f8(local_b8,param_5,*puVar1);
    local_58 = *puVar3;
    uStack_54 = puVar3[1];
    uStack_50 = puVar3[2];
    uStack_4c = puVar3[3];
    local_48 = puVar3[4];
    uStack_44 = puVar3[5];
    uStack_40 = puVar3[6];
    uStack_3c = puVar3[7];
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 6) = 0xf;
    *(undefined1 *)puVar3 = 0;
    FUN_14000ed8c(local_138,&local_58,&DAT_1401705ae);
    FUN_14003cc70(param_1,local_138,0x6a);
    FUN_1400017de(&local_58);
    FUN_1400017de(local_b8);
    FUN_1400017de(local_98);
    FUN_1400017de(local_118);
    FUN_1400017de(local_f8);
    FUN_1400017de(local_d8);
    FUN_1400017de(local_78);
  }
  return param_1;
}

