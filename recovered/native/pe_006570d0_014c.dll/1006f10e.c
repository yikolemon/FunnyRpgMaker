/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006f10e */

void FUN_1006f10e(void)

{
  char cVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined8 *local_15c;
  undefined4 **local_158;
  undefined4 *puStack_154;
  undefined8 **local_150;
  int local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [8];
  undefined4 **local_130 [4];
  undefined4 local_120;
  uint local_11c;
  undefined1 local_118 [24];
  undefined8 local_100 [7];
  undefined1 local_c8 [24];
  undefined1 local_b0 [132];
  undefined1 *local_2c;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_2c = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_150;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c2760;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  local_158 = (undefined4 **)0x1006f159;
  puStack_154 = (undefined4 *)FUN_100a31ee();
  local_18 = 5;
  local_24 = (undefined1 *)&local_15c;
  local_150 = (undefined8 **)&local_158;
  FUN_1006a8e6(local_138);
  local_15c = &local_148;
  local_148 = CONCAT44(puStack_154,local_158);
  local_158 = (undefined4 **)0x0;
  puStack_154 = (undefined4 *)0x0;
  local_18 = 0xffffffff;
  puStack_154 = (undefined4 *)FUN_10056526();
  local_18 = 7;
  local_24 = (undefined1 *)&local_15c;
  local_150 = (undefined8 **)&local_158;
  FUN_1006a8e6(local_138);
  local_15c = &local_140;
  local_140._4_4_ = 0;
  local_140._0_4_ = 0;
  local_18 = 0xffffffff;
  FUN_10056526();
  local_18 = 9;
  local_150 = (undefined8 **)(local_14c + 0x19c);
  local_14c = local_14c + 0x19;
  local_24 = (undefined1 *)&local_150;
  while( true ) {
    puStack_154 = (undefined4 *)&local_140;
    local_158 = (undefined4 **)&local_148;
    local_15c = (undefined8 *)0x1006f289;
    cVar1 = FUN_1006ce73();
    if (cVar1 != '\0') break;
    puStack_154 = (undefined4 *)local_148;
    local_158 = (undefined4 **)0x1006f29f;
    FUN_1009c722();
    local_18 = 10;
    puStack_154 = (undefined4 *)local_c8;
    local_158 = (undefined4 **)0x1006f2b9;
    FUN_10002e46();
    local_18 = 0xb;
    puStack_154 = (undefined4 *)0x0;
    local_158 = (undefined4 **)&DAT_10332fc5;
    local_15c = (undefined8 *)0x1006f2d3;
    FUN_10001e84();
    local_18 = 0xe;
    puStack_154 = (undefined4 *)local_118;
    local_158 = (undefined4 **)0x1006f2ea;
    FUN_1006a96a();
    local_18 = 0xf;
    local_158 = local_130;
    if (7 < local_11c) {
      local_158 = local_130[0];
    }
    puStack_154 = (undefined4 *)local_120;
    local_15c = (undefined8 *)0x1006f30e;
    iVar2 = FUN_1006d1a8();
    local_18 = 0xffffffff;
    puStack_154 = (undefined4 *)0x1006f322;
    FUN_10001f04();
    puStack_154 = (undefined4 *)0x1006f32a;
    FUN_10001f04();
    if (iVar2 == 0) {
      local_18 = 0xb;
      puStack_154 = (undefined4 *)local_118;
      local_158 = (undefined4 **)0x1006f349;
      FUN_1006ad36();
      local_18 = 0xc;
      puStack_154 = (undefined4 *)local_118;
      local_158 = (undefined4 **)0x1006f360;
      FUN_10003728();
      local_18 = 0xffffffff;
      puStack_154 = (undefined4 *)0x1006f37e;
      FUN_10001134();
      puStack_154 = (undefined4 *)0x1006f386;
      FUN_10001f04();
      local_18 = 0x10;
      puStack_154 = (undefined4 *)local_14c;
      local_158 = (undefined4 **)local_100;
      local_15c = (undefined8 *)0x1006f3a2;
      FUN_100a3284();
      local_18 = 0x11;
      puStack_154 = (undefined4 *)local_b0;
      local_158 = (undefined4 ***)0x1006f3bc;
      FUN_100a39a4();
      local_18 = 0xffffffff;
      puStack_154 = (undefined4 *)0x1006f3d2;
      FUN_100a33ea();
    }
    local_18 = 0xffffffff;
    puStack_154 = (undefined4 *)0x1006f3e5;
    FUN_10001f04();
    puStack_154 = (undefined4 *)0x1006f3ed;
    FUN_1006c378();
    local_18 = 9;
    puStack_154 = (undefined4 *)0x1006f3ff;
    FUN_100a34ce();
  }
  local_18 = 0xffffffff;
  puStack_154 = (undefined4 *)0x1006f428;
  FUN_10056526();
  puStack_154 = (undefined4 *)0x1006f430;
  FUN_10056526();
  puStack_154 = (undefined4 *)0x1006f438;
  FUN_10056526();
  *unaff_FS_OFFSET = local_20;
  return;
}

