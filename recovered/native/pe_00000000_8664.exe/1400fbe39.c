/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400fbe39 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1400fbe39(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  char *local_170;
  char *local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
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
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_198;
  cVar2 = FUN_1400c51fb("Data Types");
  if (cVar2 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x618,"Widgets/Data Types");
    local_6e = 1;
    local_70 = 0x32;
    local_78 = 1;
    local_7a = 0x32;
    local_88 = 1;
    local_8c = 0x32;
    local_94 = 0x3fffffff;
    local_9c = 0x3fffffff;
    local_a4 = 1;
    local_a8 = 0x32;
    local_b0 = 0x7fffffff;
    local_b8 = 0x7fffffff;
    local_d8 = 0xc000000000000000;
    local_e8 = 0x3fffffffffffff9b;
    local_e0 = 0x3fffffffffffffff;
    local_f0 = 0x3fffffffffffffff;
    local_c8 = 1;
    local_100 = 1;
    local_d0 = 0x32;
    local_108 = 0x32;
    local_120 = 0x7fffffffffffff9b;
    local_118 = 0x7fffffffffffffff;
    local_128 = 0x7fffffffffffffff;
    local_148 = 0x3ff0000000000000;
    local_150 = 0xc30c6bf526340000;
    local_158 = 0x430c6bf526340000;
    local_62 = 1;
    local_67 = 1;
    local_63 = 0x32;
    local_68 = 0x32;
    puVar3 = (undefined8 *)0x0;
    local_61 = 0;
    local_64 = 0x80;
    local_65 = 0x7f;
    local_66 = 0;
    local_69 = 0;
    local_6a = 0xff;
    local_6c = 0;
    local_72 = 0x8000;
    local_74 = 0x7fff;
    local_76 = 0;
    local_7c = 0;
    local_7e = 0xffff;
    local_84 = 0;
    local_90 = 0xc0000000;
    local_98 = 0x3fffff9b;
    local_a0 = 0;
    local_ac = 0;
    local_b4 = 0x7fffff9b;
    local_c0 = 0;
    local_f8 = 0;
    local_110 = 0;
    local_130._4_4_ = 0;
    local_130._0_4_ = 0x3f800000;
    local_134 = 0xd01502f9;
    local_138 = 0x501502f9;
    local_140 = 0;
    FUN_1400811b6("imgui_demo.cpp",0x648,"Widgets/Data Types/Drags");
    FUN_1400b1021("Drags");
    FUN_1400aeb6a("Clamp integers to 0..50",&DAT_140f313ec);
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_14009cf92(
                 "As with every widget in dear imgui, we never modify values unless there is a user interaction.\nYou can override the clamping limits by using Ctrl+Click to input a value."
                 );
    uVar1 = DAT_14021001c;
    local_178 = (undefined8 *)&local_61;
    local_170 = &local_63;
    if (DAT_140f313ec == '\0') {
      local_178 = puVar3;
      local_170 = (char *)puVar3;
    }
    local_160 = 0;
    local_168 = (char *)0x0;
    FUN_1400b57de("drag s8",0,&DAT_140f18034,DAT_14021001c);
    local_178 = (undefined8 *)&local_66;
    local_170 = &local_68;
    if (DAT_140f313ec == '\0') {
      local_178 = puVar3;
      local_170 = (char *)puVar3;
    }
    local_160 = 0;
    local_168 = "%u ms";
    FUN_1400b57de("drag u8",1,&DAT_140f18035,uVar1);
    local_178 = (undefined8 *)&local_6c;
    local_170 = (char *)&local_70;
    if (DAT_140f313ec == '\0') {
      local_178 = puVar3;
      local_170 = (char *)puVar3;
    }
    local_160 = 0;
    local_168 = (char *)0x0;
    FUN_1400b57de("drag s16",2,&DAT_140f18036,uVar1);
    local_178 = (undefined8 *)&local_76;
    local_170 = (char *)&local_7a;
    if (DAT_140f313ec == '\0') {
      local_178 = puVar3;
      local_170 = (char *)puVar3;
    }
    local_160 = 0;
    local_168 = "%u ms";
    FUN_1400b57de("drag u16",3,&DAT_140f18038,uVar1);
    local_170 = (char *)(undefined4 *)0x0;
    if (DAT_140f313ec != '\0') {
      local_170 = (char *)&local_8c;
    }
    local_178 = (undefined8 *)(undefined4 *)0x0;
    if (DAT_140f313ec != '\0') {
      local_178 = (undefined8 *)&local_84;
    }
    local_160 = 0;
    local_168 = (char *)0x0;
    FUN_1400b57de("drag s32",4,&DAT_140f1803c,uVar1);
    local_170 = (char *)(undefined4 *)0x0;
    if (DAT_140f313ec != '\0') {
      local_170 = (char *)&local_8c;
    }
    local_178 = (undefined8 *)(undefined4 *)0x0;
    if (DAT_140f313ec != '\0') {
      local_178 = (undefined8 *)&local_84;
    }
    local_160 = 0;
    local_168 = "0x%08X";
    FUN_1400b57de("drag s32 hex",4,&DAT_140f1803c,uVar1);
    local_170 = (char *)(undefined4 *)0x0;
    if (DAT_140f313ec != '\0') {
      local_170 = (char *)&local_a8;
    }
    local_178 = (undefined8 *)(undefined4 *)0x0;
    if (DAT_140f313ec != '\0') {
      local_178 = (undefined8 *)&local_a0;
    }
    local_160 = 0;
    local_168 = "%u ms";
    FUN_1400b57de("drag u32",5,&DAT_140f18040,uVar1);
    local_170 = (char *)(undefined8 *)0x0;
    if (DAT_140f313ec != '\0') {
      local_170 = (char *)&local_d0;
    }
    local_178 = (undefined8 *)0x0;
    if (DAT_140f313ec != '\0') {
      local_178 = &local_c0;
    }
    local_160 = 0;
    local_168 = (char *)0x0;
    FUN_1400b57de("drag s64",6,&DAT_140f18048,uVar1);
    local_170 = (char *)(undefined8 *)0x0;
    if (DAT_140f313ec != '\0') {
      local_170 = (char *)&local_108;
    }
    local_178 = (undefined8 *)0x0;
    if (DAT_140f313ec != '\0') {
      local_178 = &local_f8;
    }
    local_160 = 0;
    local_168 = (char *)0x0;
    FUN_1400b57de("drag u64",7,&DAT_140f18050,uVar1);
    uVar1 = DAT_140211700;
    local_160 = 0;
    local_168 = "%f";
    local_178 = (undefined8 *)((longlong)&local_130 + 4U);
    local_170 = (char *)&local_130;
    FUN_1400b57de("drag float",8,&DAT_140f18058,DAT_140211700);
    local_160 = 0x20;
    local_168 = "%f";
    local_178 = (undefined8 *)((longlong)&local_130 + 4U);
    local_170 = (char *)&local_130;
    FUN_1400b57de("drag float log",8,&DAT_140f18058,uVar1);
    uVar1 = DAT_140e8d5c0;
    local_160 = 0;
    local_168 = "%.10f grams";
    local_170 = (char *)0x0;
    local_178 = &local_140;
    FUN_1400b57de("drag double",9,&DAT_140f18060,DAT_140e8d5c0);
    local_160 = 0x20;
    local_168 = "0 < %.10f < 1";
    local_170 = (char *)&local_148;
    local_178 = &local_140;
    FUN_1400b57de("drag double log",9,&DAT_140f18060,uVar1);
    FUN_1400811b6("imgui_demo.cpp",0x65c,"Widgets/Data Types/Sliders");
    FUN_1400b1021("Sliders");
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = "%d";
    local_178 = (undefined8 *)&local_65;
    FUN_1400b9b88("slider s8 full",0,&DAT_140f18034,&local_64);
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = "%u";
    local_178 = (undefined8 *)&local_6a;
    FUN_1400b9b88("slider u8 full",1,&DAT_140f18035,&local_69);
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = "%d";
    local_178 = (undefined8 *)&local_74;
    FUN_1400b9b88("slider s16 full",2,&DAT_140f18036,&local_72);
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = "%u";
    local_178 = (undefined8 *)&local_7e;
    FUN_1400b9b88("slider u16 full",3,&DAT_140f18038,&local_7c);
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = "%d";
    local_178 = (undefined8 *)&local_8c;
    FUN_1400b9b88("slider s32 low",4,&DAT_140f1803c,&local_84);
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = "%d";
    local_178 = (undefined8 *)&local_9c;
    FUN_1400b9b88("slider s32 high",4,&DAT_140f1803c,&local_98);
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = "%d";
    local_178 = (undefined8 *)&local_94;
    FUN_1400b9b88("slider s32 full",4,&DAT_140f1803c,&local_90);
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = "0x%04X";
    local_178 = (undefined8 *)&local_8c;
    FUN_1400b9b88("slider s32 hex",4,&DAT_140f1803c,&local_84);
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = "%u";
    local_178 = (undefined8 *)&local_a8;
    FUN_1400b9b88("slider u32 low",5,&DAT_140f18040,&local_a0);
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = "%u";
    local_178 = (undefined8 *)&local_b8;
    FUN_1400b9b88("slider u32 high",5,&DAT_140f18040,&local_b4);
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = "%u";
    local_178 = (undefined8 *)&local_b0;
    FUN_1400b9b88("slider u32 full",5,&DAT_140f18040,&local_ac);
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = "%lld";
    local_178 = &local_d0;
    FUN_1400b9b88("slider s64 low",6,&DAT_140f18048,&local_c0);
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = "%lld";
    local_178 = &local_f0;
    FUN_1400b9b88("slider s64 high",6,&DAT_140f18048,&local_e8);
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = "%lld";
    local_178 = &local_e0;
    FUN_1400b9b88("slider s64 full",6,&DAT_140f18048,&local_d8);
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = "%llu ms";
    local_178 = &local_108;
    FUN_1400b9b88("slider u64 low",7,&DAT_140f18050,&local_f8);
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = "%llu ms";
    local_178 = &local_128;
    FUN_1400b9b88("slider u64 high",7,&DAT_140f18050,&local_120);
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = "%llu ms";
    local_178 = &local_118;
    FUN_1400b9b88("slider u64 full",7,&DAT_140f18050,&local_110);
    local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
    local_170 = (char *)0x0;
    local_178 = &local_130;
    FUN_1400b9b88("slider float low",8,&DAT_140f18058,(undefined4 *)((longlong)&local_130 + 4U));
    local_168._0_4_ = 0x20;
    local_170 = "%.10f";
    local_178 = &local_130;
    FUN_1400b9b88("slider float low log",8,&DAT_140f18058,(undefined4 *)((longlong)&local_130 + 4U))
    ;
    local_168._0_4_ = 0;
    local_170 = "%e";
    local_178 = (undefined8 *)&local_138;
    FUN_1400b9b88("slider float high",8,&DAT_140f18058,&local_134);
    local_168._0_4_ = 0;
    local_170 = "%.10f grams";
    local_178 = &local_148;
    FUN_1400b9b88("slider double low",9,&DAT_140f18060,&local_140);
    local_168._0_4_ = 0x20;
    local_170 = "%.10f";
    local_178 = &local_148;
    FUN_1400b9b88("slider double low log",9,&DAT_140f18060,&local_140);
    local_168._0_4_ = 0;
    local_170 = "%e grams";
    local_178 = &local_158;
    FUN_1400b9b88("slider double high",9,&DAT_140f18060,&local_150);
    FUN_1400b1021("Sliders (reverse)");
    local_168._0_4_ = 0;
    local_170 = "%d";
    local_178 = (undefined8 *)&local_64;
    FUN_1400b9b88("slider s8 reverse",0,&DAT_140f18034,&local_65);
    local_168._0_4_ = 0;
    local_170 = "%u";
    local_178 = (undefined8 *)&local_69;
    FUN_1400b9b88("slider u8 reverse",1,&DAT_140f18035,&local_6a);
    local_168._0_4_ = 0;
    local_170 = "%d";
    local_178 = (undefined8 *)&local_84;
    FUN_1400b9b88("slider s32 reverse",4,&DAT_140f1803c,&local_8c);
    local_168._0_4_ = 0;
    local_170 = "%u";
    local_178 = (undefined8 *)&local_a0;
    FUN_1400b9b88("slider u32 reverse",5,&DAT_140f18040,&local_a8);
    local_168._0_4_ = 0;
    local_170 = "%lld";
    local_178 = &local_c0;
    FUN_1400b9b88("slider s64 reverse",6,&DAT_140f18048,&local_d0);
    local_168._0_4_ = 0;
    local_170 = "%llu ms";
    local_178 = &local_f8;
    FUN_1400b9b88("slider u64 reverse",7,&DAT_140f18050,&local_108);
    FUN_1400811b6("imgui_demo.cpp",0x67e,"Widgets/Data Types/Inputs");
    FUN_1400b1021("Inputs");
    FUN_1400aeb6a("Show step buttons",&DAT_140f18068);
    thunk_FUN_1400af8bf("ImGuiInputTextFlags_ReadOnly",&DAT_140f313f0,0x200);
    thunk_FUN_1400af8bf("ImGuiInputTextFlags_ParseEmptyRefVal",&DAT_140f313f0,0x2000);
    thunk_FUN_1400af8bf("ImGuiInputTextFlags_DisplayEmptyRefVal",&DAT_140f313f0,0x4000);
    puVar4 = (undefined8 *)&local_62;
    if (DAT_140f18068 == '\0') {
      puVar4 = puVar3;
    }
    local_168._0_4_ = DAT_140f313f0;
    local_170 = "%d";
    local_178 = (undefined8 *)0x0;
    FUN_1400be984("input s8",0,&DAT_140f18034,puVar4);
    puVar4 = (undefined8 *)&local_67;
    if (DAT_140f18068 == '\0') {
      puVar4 = puVar3;
    }
    local_168._0_4_ = DAT_140f313f0;
    local_170 = "%u";
    local_178 = (undefined8 *)0x0;
    FUN_1400be984("input u8",1,&DAT_140f18035,puVar4);
    puVar4 = (undefined8 *)&local_6e;
    if (DAT_140f18068 == '\0') {
      puVar4 = puVar3;
    }
    local_168._0_4_ = DAT_140f313f0;
    local_170 = "%d";
    local_178 = (undefined8 *)0x0;
    FUN_1400be984("input s16",2,&DAT_140f18036,puVar4);
    puVar4 = (undefined8 *)&local_78;
    if (DAT_140f18068 == '\0') {
      puVar4 = puVar3;
    }
    local_168._0_4_ = DAT_140f313f0;
    local_170 = "%u";
    local_178 = (undefined8 *)0x0;
    FUN_1400be984("input u16",3,&DAT_140f18038,puVar4);
    puVar4 = (undefined8 *)0x0;
    if (DAT_140f18068 != '\0') {
      puVar4 = (undefined8 *)&local_88;
    }
    local_168._0_4_ = DAT_140f313f0;
    local_170 = "%d";
    local_178 = (undefined8 *)0x0;
    FUN_1400be984("input s32",4,&DAT_140f1803c,puVar4);
    puVar4 = (undefined8 *)&local_88;
    if (DAT_140f18068 == '\0') {
      puVar4 = puVar3;
    }
    local_168._0_4_ = DAT_140f313f0;
    local_170 = "%04X";
    local_178 = (undefined8 *)0x0;
    FUN_1400be984("input s32 hex",4,&DAT_140f1803c,puVar4);
    puVar4 = (undefined8 *)0x0;
    if (DAT_140f18068 != '\0') {
      puVar4 = (undefined8 *)&local_a4;
    }
    local_168._0_4_ = DAT_140f313f0;
    local_170 = "%u";
    local_178 = (undefined8 *)0x0;
    FUN_1400be984("input u32",5,&DAT_140f18040,puVar4);
    puVar4 = (undefined8 *)&local_a4;
    if (DAT_140f18068 == '\0') {
      puVar4 = puVar3;
    }
    local_168._0_4_ = DAT_140f313f0;
    local_170 = "%08X";
    local_178 = (undefined8 *)0x0;
    FUN_1400be984("input u32 hex",5,&DAT_140f18040,puVar4);
    puVar4 = &local_c8;
    if (DAT_140f18068 == '\0') {
      puVar4 = puVar3;
    }
    local_168._0_4_ = DAT_140f313f0;
    local_170 = (char *)0x0;
    local_178 = (undefined8 *)0x0;
    FUN_1400be984("input s64",6,&DAT_140f18048,puVar4);
    puVar4 = &local_100;
    if (DAT_140f18068 == '\0') {
      puVar4 = puVar3;
    }
    local_168._0_4_ = DAT_140f313f0;
    local_170 = (char *)0x0;
    local_178 = (undefined8 *)0x0;
    FUN_1400be984("input u64",7,&DAT_140f18050,puVar4);
    puVar4 = &local_130;
    if (DAT_140f18068 == '\0') {
      puVar4 = puVar3;
    }
    local_168._0_4_ = DAT_140f313f0;
    local_170 = (char *)0x0;
    local_178 = (undefined8 *)0x0;
    FUN_1400be984("input float",8,&DAT_140f18058,puVar4);
    puVar4 = &local_148;
    if (DAT_140f18068 == '\0') {
      puVar4 = puVar3;
    }
    local_168 = (char *)CONCAT44(local_168._4_4_,DAT_140f313f0);
    local_170 = (char *)0x0;
    local_178 = (undefined8 *)0x0;
    FUN_1400be984("input double",9,&DAT_140f18060,puVar4);
    FUN_1400c66d9();
  }
  if (DAT_140f17b40 != (local_60 ^ (ulonglong)auStack_198)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_60 ^ (ulonglong)auStack_198);
  }
  return;
}

