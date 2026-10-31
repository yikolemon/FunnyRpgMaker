/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001378a */

undefined8 FUN_14001378a(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 local_230 [16];
  undefined1 local_220 [8];
  undefined1 local_218 [224];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_140009eb0(local_230,1);
  FUN_14001818a(param_3,&local_58,1);
  uVar1 = FUN_1400058b9(local_220,&local_58);
  FUN_1400052b8(uVar1,&DAT_1401728dd);
  FUN_1400017de(&local_58);
  (**(code **)(*param_1 + 0x40))(param_1,&local_58,param_3);
  FUN_1400058b9(local_220,&local_58);
  FUN_1400017de(&local_58);
  if ((*(longlong *)(param_3 + 0x18) == 0) &&
     (*(longlong *)(param_3 + 0x370) != *(longlong *)(param_3 + 0x378))) {
    FUN_140018884(local_220,param_3 + 0x370,param_1[1] + 2);
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_58,param_3);
  FUN_1400058b9(local_220,&local_58);
  FUN_1400017de(&local_58);
  FUN_1400165ec(param_1,&local_58,param_3,2);
  FUN_1400058b9(local_220,&local_58);
  FUN_1400017de(&local_58);
  (**(code **)(*param_1 + 0x20))(param_1,&local_58,param_3,2);
  FUN_1400058b9(local_220,&local_58);
  FUN_1400017de(&local_58);
  FUN_14000169c(local_138,&DAT_1401728dd);
  FUN_14000169c(local_118,&DAT_1401728dc);
  FUN_1400170f8(local_218,local_f8);
  FUN_140018a64(&local_58,local_f8,local_118,local_138);
  FUN_1400191d4(&local_78,&local_58,0,CONCAT44(uStack_44,local_48) + -1,&local_31);
  FUN_1400065bc(&local_58);
  local_48 = (undefined4)local_68;
  uStack_44 = local_68._4_4_;
  uStack_40 = (undefined4)uStack_60;
  uStack_3c = uStack_60._4_4_;
  local_58 = local_78;
  uStack_54 = uStack_74;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  local_68 = 0;
  uStack_60 = 0xf;
  local_78 = local_78 & 0xffffff00;
  FUN_1400017de(&local_78);
  FUN_14000169c(local_d8,&DAT_1401728a6);
  FUN_14000169c(local_b8,&DAT_1401728dd);
  FUN_140006874(local_98,&local_58);
  FUN_140018a64(&local_78,local_98,local_b8,local_d8);
  FUN_14000ed8c(param_2,&local_78,&DAT_1401728dd);
  FUN_1400017de(&local_78);
  FUN_1400017de(&local_58);
  FUN_140009ff0(local_230);
  return param_2;
}

