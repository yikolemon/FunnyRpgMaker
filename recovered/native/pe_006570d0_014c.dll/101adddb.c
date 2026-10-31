/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101adddb */

void FUN_101adddb(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_10147d77("Data Types");
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x618,"Widgets/Data Types");
    local_28 = 0x32;
    local_32 = 0x32;
    local_48 = 0xc0000000;
    local_8c = 0xc0000000;
    local_9c = 0x3fffffff;
    local_4c = 0x3fffffff;
    local_54 = 0x3fffffff;
    local_94 = 0x3fffffff;
    local_a4 = 0x3fffffff;
    local_44 = 0x32;
    local_60 = 0x32;
    local_88 = 0x32;
    local_c0 = 0x32;
    local_d4 = 0x7fffffff;
    local_a0 = 0xffffff9b;
    local_d8 = 0xffffff9b;
    local_68 = 0x7fffffff;
    local_70 = 0x7fffffff;
    local_cc = 0x7fffffff;
    local_dc = 0x7fffffff;
    local_98 = 0xffffffff;
    local_a8 = 0xffffffff;
    local_d0 = 0xffffffff;
    local_e0 = 0xffffffff;
    local_108 = 0x26340000;
    local_110 = 0x26340000;
    local_1a = 1;
    local_1f = 1;
    puVar7 = &local_1b;
    local_1b = 0x32;
    local_20 = 0x32;
    puVar4 = &local_19;
    local_19 = 0;
    local_1c = 0x80;
    local_1d = 0x7f;
    local_1e = 0;
    local_21 = 0;
    local_22 = 0xff;
    local_24 = 0;
    local_26 = 1;
    local_2a = 0x8000;
    local_2c = 0x7fff;
    local_2e = 0;
    local_30 = 1;
    local_34 = 0;
    local_36 = 0xffff;
    local_3c = 0;
    local_40 = 1;
    local_50 = 0x3fffff9b;
    local_58 = 0;
    local_5c = 1;
    local_64 = 0;
    local_6c = 0x7fffff9b;
    local_74 = 0;
    local_78 = 0;
    local_7c = 0;
    local_80 = 1;
    local_84 = 0;
    local_90 = 0;
    local_ac = 0;
    local_b0 = 0;
    local_b4 = 0;
    local_b8 = 1;
    local_bc = 0;
    local_c4 = 0;
    local_c8 = 0;
    local_e4 = 0;
    local_e8 = 0x3f800000;
    local_ec = 0xd01502f9;
    local_f0 = 0x501502f9;
    local_f8 = 0;
    local_100 = 0;
    local_fc = 0x3ff00000;
    local_104 = 0xc30c6bf5;
    local_10c = 0x430c6bf5;
    FUN_101032c6("imgui_demo.cpp",0x648,"Widgets/Data Types/Drags");
    FUN_10132656("Drags");
    FUN_1012ff1a("Clamp integers to 0..50",&DAT_103a3e68);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    if (DAT_103a3e68 == '\0') {
      puVar7 = (undefined1 *)0x0;
      puVar4 = (undefined1 *)0x0;
    }
    FUN_101375ae("drag s8",0,&DAT_1038aa4c,0x3e4ccccd,puVar4,puVar7,0,0);
    puVar7 = &local_20;
    puVar4 = &local_1e;
    if (DAT_103a3e68 == '\0') {
      puVar7 = (undefined1 *)0x0;
      puVar4 = (undefined1 *)0x0;
    }
    FUN_101375ae("drag u8",1,&DAT_1038aa4d,0x3e4ccccd,puVar4,puVar7,"%u ms",0);
    puVar3 = &local_28;
    puVar5 = &local_24;
    if (DAT_103a3e68 == '\0') {
      puVar3 = (undefined2 *)0x0;
      puVar5 = (undefined2 *)0x0;
    }
    FUN_101375ae("drag s16",2,&DAT_1038aa4e,0x3e4ccccd,puVar5,puVar3,0,0);
    puVar3 = &local_32;
    puVar5 = &local_2e;
    if (DAT_103a3e68 == '\0') {
      puVar3 = (undefined2 *)0x0;
      puVar5 = (undefined2 *)0x0;
    }
    FUN_101375ae("drag u16",3,&DAT_1038aa50,0x3e4ccccd,puVar5,puVar3,"%u ms",0);
    puVar6 = (undefined4 *)0x0;
    if (DAT_103a3e68 != '\0') {
      puVar6 = &local_44;
    }
    puVar2 = (undefined4 *)0x0;
    if (DAT_103a3e68 != '\0') {
      puVar2 = &local_3c;
    }
    FUN_101375ae("drag s32",4,&DAT_1038aa54,0x3e4ccccd,puVar2,puVar6,0,0);
    puVar6 = (undefined4 *)0x0;
    if (DAT_103a3e68 != '\0') {
      puVar6 = &local_44;
    }
    puVar2 = (undefined4 *)0x0;
    if (DAT_103a3e68 != '\0') {
      puVar2 = &local_3c;
    }
    FUN_101375ae("drag s32 hex",4,&DAT_1038aa54,0x3e4ccccd,puVar2,puVar6,"0x%08X",0);
    puVar6 = (undefined4 *)0x0;
    if (DAT_103a3e68 != '\0') {
      puVar6 = &local_60;
    }
    puVar2 = (undefined4 *)0x0;
    if (DAT_103a3e68 != '\0') {
      puVar2 = &local_58;
    }
    FUN_101375ae("drag u32",5,&DAT_1038aa58,0x3e4ccccd,puVar2,puVar6,"%u ms",0);
    puVar6 = (undefined4 *)0x0;
    if (DAT_103a3e68 != '\0') {
      puVar6 = &local_88;
    }
    puVar2 = (undefined4 *)0x0;
    if (DAT_103a3e68 != '\0') {
      puVar2 = &local_78;
    }
    FUN_101375ae("drag s64",6,&DAT_1038aa60,0x3e4ccccd,puVar2,puVar6,0,0);
    puVar6 = (undefined4 *)0x0;
    if (DAT_103a3e68 != '\0') {
      puVar6 = &local_c0;
    }
    puVar2 = (undefined4 *)0x0;
    if (DAT_103a3e68 != '\0') {
      puVar2 = &local_b0;
    }
    FUN_101375ae("drag u64",7,&DAT_1038aa68,0x3e4ccccd,puVar2,puVar6,0,0);
    FUN_101375ae("drag float",8,&DAT_1038aa70,0x3ba3d70a,&local_e4,&local_e8,"%f",0);
    FUN_101375ae("drag float log",8,&DAT_1038aa70,0x3ba3d70a,&local_e4,&local_e8,"%f",0x20);
    FUN_101375ae("drag double",9,&DAT_1038aa78,0x3a03126f,&local_f8,0,"%.10f grams",0);
    FUN_101375ae("drag double log",9,&DAT_1038aa78,0x3a03126f,&local_f8,&local_100,&DAT_1033e8ee,
                 0x20);
    FUN_101032c6("imgui_demo.cpp",0x65c,"Widgets/Data Types/Sliders");
    FUN_10132656("Sliders");
    FUN_1013cb9f("slider s8 full",0,&DAT_1038aa4c,&local_1c,&local_1d,&DAT_1033b386,0);
    FUN_1013cb9f("slider u8 full",1,&DAT_1038aa4d,&local_21,&local_22,&DAT_10330f17,0);
    FUN_1013cb9f("slider s16 full",2,&DAT_1038aa4e,&local_2a,&local_2c,&DAT_1033b386,0);
    FUN_1013cb9f("slider u16 full",3,&DAT_1038aa50,&local_34,&local_36,&DAT_10330f17,0);
    FUN_1013cb9f("slider s32 low",4,&DAT_1038aa54,&local_3c,&local_44,&DAT_1033b386,0);
    FUN_1013cb9f("slider s32 high",4,&DAT_1038aa54,&local_50,&local_54,&DAT_1033b386,0);
    FUN_1013cb9f("slider s32 full",4,&DAT_1038aa54,&local_48,&local_4c,&DAT_1033b386,0);
    FUN_1013cb9f("slider s32 hex",4,&DAT_1038aa54,&local_3c,&local_44,"0x%04X",0);
    FUN_1013cb9f("slider u32 low",5,&DAT_1038aa58,&local_58,&local_60,&DAT_10330f17,0);
    FUN_1013cb9f("slider u32 high",5,&DAT_1038aa58,&local_6c,&local_70,&DAT_10330f17,0);
    FUN_1013cb9f("slider u32 full",5,&DAT_1038aa58,&local_64,&local_68,&DAT_10330f17,0);
    FUN_1013cb9f("slider s64 low",6,&DAT_1038aa60,&local_78,&local_88,&DAT_1033a2ea,0);
    FUN_1013cb9f("slider s64 high",6,&DAT_1038aa60,&local_a0,&local_a8,&DAT_1033a2ea,0);
    FUN_1013cb9f("slider s64 full",6,&DAT_1038aa60,&local_90,&local_98,&DAT_1033a2ea,0);
    FUN_1013cb9f("slider u64 low",7,&DAT_1038aa68,&local_b0,&local_c0,"%llu ms",0);
    FUN_1013cb9f("slider u64 high",7,&DAT_1038aa68,&local_d8,&local_e0,"%llu ms",0);
    FUN_1013cb9f("slider u64 full",7,&DAT_1038aa68,&local_c8,&local_d0,"%llu ms",0);
    FUN_1013cb9f("slider float low",8,&DAT_1038aa70,&local_e4,&local_e8,0,0);
    FUN_1013cb9f("slider float low log",8,&DAT_1038aa70,&local_e4,&local_e8,"%.10f",0x20);
    FUN_1013cb9f("slider float high",8,&DAT_1038aa70,&local_ec,&local_f0,&DAT_1033a039,0);
    FUN_1013cb9f("slider double low",9,&DAT_1038aa78,&local_f8,&local_100,"%.10f grams",0);
    FUN_1013cb9f("slider double low log",9,&DAT_1038aa78,&local_f8,&local_100,"%.10f",0x20);
    FUN_1013cb9f("slider double high",9,&DAT_1038aa78,&local_108,&local_110,"%e grams",0);
    FUN_10132656("Sliders (reverse)");
    FUN_1013cb9f("slider s8 reverse",0,&DAT_1038aa4c,&local_1d,&local_1c,&DAT_1033b386,0);
    FUN_1013cb9f("slider u8 reverse",1,&DAT_1038aa4d,&local_22,&local_21,&DAT_10330f17,0);
    FUN_1013cb9f("slider s32 reverse",4,&DAT_1038aa54,&local_44,&local_3c,&DAT_1033b386,0);
    FUN_1013cb9f("slider u32 reverse",5,&DAT_1038aa58,&local_60,&local_58,&DAT_10330f17,0);
    FUN_1013cb9f("slider s64 reverse",6,&DAT_1038aa60,&local_88,&local_78,&DAT_1033a2ea,0);
    FUN_1013cb9f("slider u64 reverse",7,&DAT_1038aa68,&local_c0,&local_b0,"%llu ms",0);
    FUN_101032c6("imgui_demo.cpp",0x67e,"Widgets/Data Types/Inputs");
    FUN_10132656("Inputs");
    FUN_1012ff1a("Show step buttons",&DAT_1038aa80);
    thunk_FUN_10130d81("ImGuiInputTextFlags_ReadOnly",&DAT_103a3e6c,0x200);
    thunk_FUN_10130d81("ImGuiInputTextFlags_ParseEmptyRefVal",&DAT_103a3e6c,0x2000);
    thunk_FUN_10130d81("ImGuiInputTextFlags_DisplayEmptyRefVal",&DAT_103a3e6c,0x4000);
    puVar7 = &local_1a;
    if (DAT_1038aa80 == '\0') {
      puVar7 = (undefined1 *)0x0;
    }
    FUN_101412ec("input s8",0,&DAT_1038aa4c,puVar7,0,&DAT_1033b386,DAT_103a3e6c);
    puVar7 = &local_1f;
    if (DAT_1038aa80 == '\0') {
      puVar7 = (undefined1 *)0x0;
    }
    FUN_101412ec("input u8",1,&DAT_1038aa4d,puVar7,0,&DAT_10330f17,DAT_103a3e6c);
    puVar3 = &local_26;
    if (DAT_1038aa80 == '\0') {
      puVar3 = (undefined2 *)0x0;
    }
    FUN_101412ec("input s16",2,&DAT_1038aa4e,puVar3,0,&DAT_1033b386,DAT_103a3e6c);
    puVar3 = &local_30;
    if (DAT_1038aa80 == '\0') {
      puVar3 = (undefined2 *)0x0;
    }
    FUN_101412ec("input u16",3,&DAT_1038aa50,puVar3,0,&DAT_10330f17,DAT_103a3e6c);
    puVar6 = &local_40;
    puVar2 = (undefined4 *)0x0;
    if (DAT_1038aa80 != '\0') {
      puVar2 = puVar6;
    }
    FUN_101412ec("input s32",4,&DAT_1038aa54,puVar2,0,&DAT_1033b386,DAT_103a3e6c);
    if (DAT_1038aa80 == '\0') {
      puVar6 = (undefined4 *)0x0;
    }
    FUN_101412ec("input s32 hex",4,&DAT_1038aa54,puVar6,0,"%04X",DAT_103a3e6c);
    puVar6 = &local_5c;
    puVar2 = (undefined4 *)0x0;
    if (DAT_1038aa80 != '\0') {
      puVar2 = puVar6;
    }
    FUN_101412ec("input u32",5,&DAT_1038aa58,puVar2,0,&DAT_10330f17,DAT_103a3e6c);
    if (DAT_1038aa80 == '\0') {
      puVar6 = (undefined4 *)0x0;
    }
    FUN_101412ec("input u32 hex",5,&DAT_1038aa58,puVar6,0,"%08X",DAT_103a3e6c);
    puVar6 = &local_80;
    if (DAT_1038aa80 == '\0') {
      puVar6 = (undefined4 *)0x0;
    }
    FUN_101412ec("input s64",6,&DAT_1038aa60,puVar6,0,0,DAT_103a3e6c);
    puVar6 = &local_b8;
    if (DAT_1038aa80 == '\0') {
      puVar6 = (undefined4 *)0x0;
    }
    FUN_101412ec("input u64",7,&DAT_1038aa68,puVar6,0,0,DAT_103a3e6c);
    puVar6 = &local_e8;
    if (DAT_1038aa80 == '\0') {
      puVar6 = (undefined4 *)0x0;
    }
    FUN_101412ec("input float",8,&DAT_1038aa70,puVar6,0,0,DAT_103a3e6c);
    puVar6 = &local_100;
    if (DAT_1038aa80 == '\0') {
      puVar6 = (undefined4 *)0x0;
    }
    FUN_101412ec("input double",9,&DAT_1038aa78,puVar6,0,0,DAT_103a3e6c);
    FUN_10149387();
  }
  if (DAT_10388d00 != (local_18 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

