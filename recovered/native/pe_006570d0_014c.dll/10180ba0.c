/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10180ba0 */

void FUN_10180ba0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 ****ppppuVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  undefined1 local_118 [49];
  undefined1 local_e7;
  undefined4 ***local_98 [4];
  undefined4 local_88;
  uint local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined4 ***local_74 [5];
  uint local_60;
  int local_5c;
  undefined4 ***local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined1 local_31;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 local_21;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_118;
  local_14 = 0xffffffff;
  local_18 = &LAB_10181190;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_5c = FUN_1010330d();
  local_21 = *(undefined1 *)(local_5c + 0x6d);
  *(undefined1 *)(local_5c + 0x6d) = 0;
  local_40 = (undefined4 *)0x0;
  local_3c = (undefined4 *)0x0;
  local_38 = 0;
  local_14 = 0;
  FUN_100c58b0(&local_80);
  local_30 = local_7c;
  do {
    if (local_80 == local_30) {
      local_14 = 0xffffffff;
      FUN_100c7334();
      puVar3 = (undefined4 *)0x0;
      do {
        if (puVar3 == (undefined4 *)0x200) {
          *(undefined1 *)(local_5c + 0x6d) = local_21;
          local_14 = 0xffffffff;
          FUN_100e4c8c();
          *unaff_FS_OFFSET = local_1c;
          return;
        }
        local_30 = puVar3;
        FUN_1025b2d0(local_118,puVar3 + 0x40e7682,0x80);
        local_28 = local_3c;
        puVar3 = local_40;
        while (puVar3 != local_28) {
          local_14 = 0;
          local_2c = puVar3;
          FUN_1006ad36(local_98);
          local_14 = 2;
          FUN_10001e84(&DAT_10356101,0);
          local_14 = 3;
          puVar4 = (undefined4 *)FUN_1009c7aa(local_74);
          puVar3 = puVar4 + 4;
          if (7 < (uint)puVar4[5]) {
            puVar4 = (undefined4 *)*puVar4;
          }
          FUN_10005a0c(local_58,puVar4,*puVar3,&local_80);
          local_14 = 4;
          ppppuVar5 = local_58;
          if (0xf < local_44) {
            ppppuVar5 = (undefined4 ****)local_58[0];
          }
          iVar1 = FUN_1026af60(ppppuVar5,local_118);
          local_14 = 0xffffffff;
          FUN_10001fee();
          FUN_10001f04();
          FUN_10001f04();
          if (iVar1 == 0) {
            local_28 = *(undefined4 **)(local_5c + 0x2c);
            if (local_28[0x15] != 0) {
              local_e7 = 1;
            }
            puVar3 = local_2c;
            if (7 < (uint)local_2c[5]) {
              puVar3 = (undefined4 *)*local_2c;
            }
            local_14 = 0;
            FUN_10005a0c(local_58,puVar3,local_2c[4],local_98);
            local_14 = 1;
            ppppuVar5 = local_58;
            if (0xf < local_44) {
              ppppuVar5 = (undefined4 ****)local_58[0];
            }
            FUN_1018fa0c(ppppuVar5,0,local_118,0);
            local_14 = 0xffffffff;
            FUN_10001fee();
            break;
          }
          puVar3 = local_2c + 6;
        }
        puVar3 = local_30 + 0x20;
      } while( true );
    }
    local_14 = 6;
    local_28 = local_80;
    FUN_1006a7d0(local_80 + 6,0);
    puVar3 = local_3c;
    local_14 = 7;
    puVar4 = local_40;
    if (local_40 == local_3c) {
code_r0x10180c82:
      local_14 = 7;
      FUN_1006ad36(local_118);
      local_14 = 10;
      FUN_10001e84(&DAT_10356101,0);
      local_14 = 0xb;
      uVar2 = FUN_1009c7aa(local_74);
      FUN_10002e46(uVar2);
      local_14 = 0xffffffff;
      FUN_10001f04();
      FUN_10001f04();
      local_14 = 8;
      puVar3 = (undefined4 *)0x0;
      while (puVar3 != (undefined4 *)0x200) {
        local_2c = puVar3;
        FUN_1025b2d0(local_118,puVar3 + 0x40e7682,0x80);
        ppppuVar5 = local_98;
        if (7 < local_84) {
          ppppuVar5 = (undefined4 ****)local_98[0];
        }
        local_14 = 8;
        FUN_10005a0c(local_74,ppppuVar5,local_88,&local_31);
        local_14 = 9;
        ppppuVar5 = local_74;
        if (0xf < local_60) {
          ppppuVar5 = (undefined4 ****)local_74[0];
        }
        iVar1 = FUN_1026af60(ppppuVar5,local_118);
        local_14 = 0xffffffff;
        FUN_10001fee();
        if (iVar1 == 0) {
          local_14 = 8;
          FUN_100e73ea(local_58);
          break;
        }
        puVar3 = local_2c + 0x20;
      }
      local_14 = 0xffffffff;
      FUN_10001f04();
    }
    else {
      do {
        ppppuVar5 = local_58;
        if (7 < local_44) {
          ppppuVar5 = (undefined4 ****)local_58[0];
        }
        iVar1 = FUN_1006d1a8(ppppuVar5,local_48);
        puVar6 = puVar4;
      } while ((iVar1 != 0) && (puVar4 = puVar4 + 6, puVar6 = puVar3, puVar4 != puVar3));
      if (puVar6 == local_3c) goto code_r0x10180c82;
    }
    local_14 = 0xffffffff;
    FUN_10001f04();
    local_80 = local_28 + 0xc;
  } while( true );
}

