/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003ae9f */

undefined4 FUN_14003ae9f(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  undefined1 local_278 [32];
  undefined1 local_258 [32];
  undefined1 local_238 [32];
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
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
  undefined1 local_98 [34];
  undefined1 local_76;
  undefined1 local_75;
  char local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  char local_6e;
  char local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  char local_65;
  char local_64;
  char local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  char local_59;
  char local_58;
  char local_57;
  char local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  char local_51;
  char local_50;
  char local_4f;
  char local_4e;
  char local_4d;
  undefined1 local_4c;
  char local_4b;
  char local_4a;
  char local_49;
  char local_48;
  char local_47;
  char local_46;
  char local_45;
  char local_44;
  char local_43;
  undefined1 local_42;
  char local_41;
  char local_40;
  undefined1 local_3f;
  char local_3e;
  char local_3d;
  undefined1 local_3c;
  char local_3b;
  char local_3a;
  char local_39;
  undefined1 local_38;
  char local_37;
  char local_36;
  char local_35;
  char local_34;
  undefined1 local_33;
  char local_32;
  char local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_140048c20(local_98);
  lVar5 = (longlong)DAT_140f17af4;
  FUN_1400032ac(local_278,local_98);
  local_4c = 1;
  FUN_1400027d2(local_1b8,"WOLF-EXT-CLI.exe");
  local_42 = 0;
  FUN_140055480(local_1d8,local_1b8,local_278);
  local_4d = FUN_1400448cb(local_1d8,&DAT_140a114d0,lVar5);
  if (local_4d == '\0') {
LAB_14003b357:
    cVar2 = '\0';
LAB_14003b359:
    cVar3 = '\0';
  }
  else {
    lVar5 = (longlong)DAT_140f17af0;
    local_76 = 1;
    FUN_1400032ac(local_258,local_98);
    local_74 = 1;
    local_75 = 0;
    local_72 = 1;
    local_73 = 1;
    FUN_1400027d2(local_178,"FunnyGameXLL-x32.dll");
    local_3f = 0;
    local_40 = 1;
    local_41 = 1;
    FUN_140055480(local_198,local_178,local_258);
    local_4a = 1;
    local_4b = 1;
    cVar2 = FUN_1400448cb(local_198,&DAT_140658ad0,lVar5);
    if (cVar2 == '\0') goto LAB_14003b357;
    lVar5 = (longlong)DAT_140f17aec;
    local_70 = 1;
    local_71 = 1;
    FUN_1400032ac(local_238,local_98);
    local_6d = 1;
    local_6e = 1;
    local_6f = 0;
    local_6a = 1;
    local_6b = 1;
    local_6c = 1;
    FUN_1400027d2(local_138,"FunnyGameXLL-x64.dll");
    local_3b = 1;
    local_3c = 0;
    local_3d = 1;
    local_3e = 1;
    FUN_140055480(local_158,local_138,local_238);
    cVar2 = '\x01';
    local_47 = 1;
    local_48 = 1;
    local_49 = 1;
    cVar3 = FUN_1400448cb(local_158,&DAT_1402120d0,lVar5);
    if (cVar3 == '\0') goto LAB_14003b359;
    lVar5 = (longlong)DAT_140f17afc;
    local_67 = 1;
    local_68 = 1;
    local_69 = 1;
    FUN_1400032ac(local_218,local_98);
    local_63 = 1;
    local_64 = 1;
    local_65 = 1;
    local_66 = 0;
    local_5f = 1;
    local_60 = 1;
    local_61 = 1;
    local_62 = 1;
    FUN_1400027d2(local_f8,"Win32Injector-x32.exe");
    local_36 = 1;
    local_37 = 1;
    local_38 = 0;
    local_39 = 1;
    local_3a = 1;
    FUN_140055480(local_118,local_f8,local_218);
    cVar2 = '\x01';
    local_43 = 1;
    local_44 = 1;
    local_45 = 1;
    local_46 = 1;
    cVar3 = FUN_1400448cb(local_118,&DAT_140d3eed0,lVar5);
    if (cVar3 != '\0') {
      lVar5 = (longlong)DAT_140f17af8;
      local_5b = 1;
      local_5c = 1;
      local_5d = 1;
      local_5e = 1;
      FUN_1400032ac(local_1f8,local_98);
      local_56 = 1;
      local_57 = 1;
      local_58 = 1;
      local_59 = 1;
      local_5a = 0;
      local_52 = 1;
      local_53 = 1;
      local_54 = 1;
      local_55 = 1;
      FUN_1400027d2(local_b8,"Win32Injector-x64.exe");
      local_31 = 1;
      local_32 = 1;
      local_33 = 0;
      local_34 = 1;
      local_35 = 1;
      FUN_140055480(local_d8,local_b8,local_1f8);
      cVar2 = '\x01';
      local_4e = 1;
      local_4f = 1;
      local_50 = 1;
      local_51 = 1;
      uVar4 = FUN_1400448cb(local_d8,&DAT_140bf5ad0,lVar5);
      cVar3 = '\x01';
      cVar6 = '\x01';
      goto code_r0x00014003b361;
    }
    cVar3 = '\x01';
  }
  cVar6 = '\0';
  uVar4 = 0;
code_r0x00014003b361:
  local_51 = cVar6;
  local_50 = cVar6;
  local_4f = cVar3;
  local_4e = cVar2;
  if (cVar6 != '\0') {
    FUN_140001056(local_d8);
  }
  local_33 = 0;
  local_35 = cVar6;
  local_34 = cVar6;
  local_32 = cVar3;
  local_31 = cVar2;
  if (cVar6 != '\0') {
    FUN_14000109c(local_b8);
  }
  cVar1 = local_4d;
  local_56 = local_4d;
  local_5a = 0;
  local_43 = local_4d;
  local_59 = cVar6;
  local_58 = cVar3;
  local_57 = cVar2;
  local_46 = cVar3;
  local_45 = cVar3;
  local_44 = cVar2;
  if (cVar3 != '\0') {
    FUN_140001056(local_118);
  }
  local_36 = cVar1;
  local_38 = 0;
  local_3a = cVar3;
  local_39 = cVar3;
  local_37 = cVar2;
  if (cVar3 != '\0') {
    FUN_14000109c(local_f8);
  }
  local_63 = cVar1;
  local_66 = 0;
  local_47 = cVar1;
  local_65 = cVar3;
  local_64 = cVar2;
  local_49 = cVar2;
  local_48 = cVar2;
  if (cVar2 != '\0') {
    FUN_140001056(local_158);
  }
  local_3b = cVar1;
  local_3c = 0;
  local_3e = cVar2;
  local_3d = cVar2;
  if (cVar2 != '\0') {
    FUN_14000109c(local_138);
  }
  local_6d = cVar1;
  local_6f = 0;
  local_4a = cVar1;
  local_4b = cVar1;
  local_6e = cVar2;
  if (cVar1 != '\0') {
    FUN_140001056(local_198);
  }
  local_3f = 0;
  local_40 = cVar1;
  local_41 = cVar1;
  if (cVar1 != '\0') {
    FUN_14000109c(local_178);
  }
  local_74 = cVar1;
  local_75 = 0;
  FUN_140001056(local_1d8);
  local_42 = 0;
  FUN_14000109c(local_1b8);
  local_4c = 0;
  FUN_140001056(local_98);
  return uVar4;
}

