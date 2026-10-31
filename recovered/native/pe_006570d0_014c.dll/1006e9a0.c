/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006e9a0 */

void FUN_1006e9a0(void)

{
  char cVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  bool bVar3;
  undefined4 ****local_15c;
  undefined4 ****local_158;
  undefined4 ****ppppuStack_154;
  undefined1 auStack_150 [2];
  undefined1 local_14e;
  undefined1 local_14d;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined1 local_14a;
  undefined1 local_149;
  undefined4 ****local_148;
  undefined4 ***local_144;
  undefined8 local_140;
  undefined4 **local_138;
  undefined4 local_134;
  int local_130;
  undefined1 local_12c [8];
  undefined4 **local_124 [6];
  undefined4 ****local_10c [4];
  undefined4 local_fc;
  uint local_f8;
  undefined1 local_f4 [24];
  undefined4 ****local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [32];
  undefined1 local_40 [24];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_150;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c2750;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  ppppuStack_154 = (undefined4 ****)0x0;
  local_158 = (undefined4 ****)0x1033b718;
  local_15c = (undefined4 ****)0x1006e9f4;
  FUN_10001e84();
  local_18 = 4;
  local_15c = local_dc;
  local_158 = (undefined4 ****)local_144;
  ppppuStack_154 = (undefined4 ****)local_60;
  FUN_10001cfb();
  local_18 = 5;
  ppppuStack_154 = local_dc;
  local_158 = (undefined4 ****)0x1006ea22;
  FUN_1006a850();
  local_18 = 0xffffffff;
  ppppuStack_154 = (undefined4 ****)0x1006ea40;
  FUN_10001f04();
  ppppuStack_154 = (undefined4 ****)0x1006ea4b;
  FUN_10001f04();
  local_18 = 7;
  local_24 = (undefined1 *)&local_15c;
  local_148 = &local_158;
  FUN_1006a8e6(local_12c);
  local_15c = (undefined4 ****)&local_140;
  local_140 = CONCAT44(ppppuStack_154,local_158);
  local_158 = (undefined4 ****)0x0;
  ppppuStack_154 = (undefined4 ****)0x0;
  local_18 = 0xffffffff;
  ppppuStack_154 = (undefined4 ****)FUN_10056526();
  local_18 = 9;
  local_24 = (undefined1 *)&local_15c;
  local_148 = &local_158;
  FUN_1006a8e6(local_12c);
  local_15c = (undefined4 ****)&local_138;
  local_134 = 0;
  local_138 = (undefined4 ***)0x0;
  local_18 = 0xffffffff;
  FUN_10056526();
  local_18 = 0xb;
  local_144 = local_144 + 0x7d;
  local_24 = auStack_150;
  while( true ) {
    ppppuStack_154 = (undefined4 ****)&local_138;
    local_158 = (undefined4 ****)&local_140;
    local_15c = (undefined4 ****)0x1006eb61;
    cVar1 = FUN_1006ce73();
    if (cVar1 != '\0') break;
    ppppuStack_154 = (undefined4 ****)(undefined4 ***)local_140;
    local_158 = (undefined4 ****)0x1006eb7a;
    FUN_1009c722();
    local_18 = 0xc;
    ppppuStack_154 = (undefined4 ****)local_40;
    local_158 = (undefined4 ****)0x1006eb94;
    FUN_10002e46();
    local_18 = 0xd;
    ppppuStack_154 = (undefined4 ****)0x0;
    local_158 = (undefined4 ****)0x103321e0;
    local_15c = (undefined4 ****)0x1006ebae;
    FUN_10001e84();
    local_18 = 0x12;
    ppppuStack_154 = (undefined4 ****)local_124;
    local_158 = (undefined4 ****)0x1006ebc5;
    FUN_1006a96a();
    local_18 = 0x13;
    local_158 = local_dc;
    if (7 < local_c8) {
      local_158 = local_dc[0];
    }
    ppppuStack_154 = (undefined4 ****)local_cc;
    local_15c = (undefined4 ****)0x1006ebef;
    local_130 = FUN_1006d1a8();
    local_148 = (undefined4 ****)CONCAT31(local_148._1_3_,local_130 == 0);
    if (local_130 == 0) {
      local_14b = 1;
      local_18 = 0x14;
      ppppuStack_154 = (undefined4 ****)0x0;
      local_158 = (undefined4 ****)0x103321d0;
      local_15c = (undefined4 ****)0x1006ec1f;
      FUN_10001e84();
      local_14d = 1;
      local_14c = 0;
      local_14e = 1;
      local_18 = 0x16;
      ppppuStack_154 = (undefined4 ****)local_78;
      local_158 = (undefined4 ****)0x1006ec50;
      FUN_1006ad36();
      local_14a = 1;
      local_149 = 0;
      local_18 = 0x17;
      local_158 = local_10c;
      if (7 < local_f8) {
        local_158 = local_10c[0];
      }
      ppppuStack_154 = (undefined4 ****)local_fc;
      local_15c = (undefined4 ****)0x1006ec7f;
      iVar2 = FUN_1006d1a8();
      bVar3 = iVar2 != 0;
    }
    else {
      bVar3 = false;
    }
    local_14a = local_148._0_1_;
    local_149 = local_148._0_1_;
    local_18 = 0xffffffff;
    if (local_130 == 0) {
      ppppuStack_154 = (undefined4 ****)0x1006eca9;
      FUN_10001f04();
    }
    local_14d = local_148._0_1_;
    local_14c = local_148._0_1_;
    if (local_130 == 0) {
      ppppuStack_154 = (undefined4 ****)0x1006ecc1;
      FUN_10001f04();
    }
    ppppuStack_154 = (undefined4 ****)0x1006ecc9;
    FUN_10001f04();
    ppppuStack_154 = (undefined4 ****)0x1006ecd1;
    FUN_10001f04();
    if (bVar3) {
      local_18 = 0xd;
      ppppuStack_154 = (undefined4 ****)local_f4;
      local_158 = (undefined4 ****)0x1006ecf0;
      FUN_10002e46();
      local_18 = 0xe;
      ppppuStack_154 = (undefined4 ****)local_f4;
      local_158 = (undefined4 ****)0x1006ed0a;
      FUN_10002e46();
      local_18 = 0xf;
      ppppuStack_154 = (undefined4 ****)0x0;
      local_158 = (undefined4 ****)0x10332446;
      local_15c = (undefined4 ****)0x1006ed24;
      FUN_10001e84();
      local_18 = 0x11;
      ppppuStack_154 = local_dc;
      local_158 = (undefined4 ****)0x1006ed3e;
      FUN_1009c7aa();
      local_18 = 0xffffffff;
      ppppuStack_154 = (undefined4 ****)0x1006ed53;
      FUN_10001f04();
      local_18 = 0xf;
      ppppuStack_154 = (undefined4 ****)local_90;
      local_158 = (undefined4 ****)local_124;
      local_15c = (undefined4 ****)0x1006ed6f;
      FUN_1009c7f8();
      local_18 = 0x10;
      ppppuStack_154 = local_dc;
      local_158 = (undefined4 *****)0x1006ed87;
      FUN_1009ca92();
      local_18 = 0xffffffff;
      ppppuStack_154 = (undefined4 ****)0x1006ed9a;
      FUN_1009c908();
      ppppuStack_154 = (undefined4 ****)0x1006eda5;
      FUN_10001f04();
      ppppuStack_154 = (undefined4 ****)0x1006edad;
      FUN_10001f04();
    }
    ppppuStack_154 = (undefined4 ****)0x1006edb5;
    FUN_10001f04();
    ppppuStack_154 = (undefined4 ****)0x1006edc0;
    FUN_1006c378();
    local_18 = 0xb;
    ppppuStack_154 = (undefined4 ****)0x1006edd2;
    FUN_1006ab8e();
  }
  local_18 = 0xffffffff;
  ppppuStack_154 = (undefined4 ****)0x1006edea;
  FUN_10056526();
  ppppuStack_154 = (undefined4 ****)0x1006edf2;
  FUN_10056526();
  ppppuStack_154 = (undefined4 ****)0x1006edfa;
  FUN_10056526();
  *unaff_FS_OFFSET = local_20;
  return;
}

