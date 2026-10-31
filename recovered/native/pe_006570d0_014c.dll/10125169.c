/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10125169 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125169(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  uint local_7c;
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float local_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined8 local_24;
  float local_1c;
  float fStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_7c;
  local_78 = FUN_10111ef5();
  local_70 = FUN_100fcb39(0,0x3f800000);
  local_6c = *(float *)(param_2 + 0x10);
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  iVar3 = FUN_100fcb2d();
  local_4c = *(float *)(iVar3 + 0x60) + local_6c;
  local_74 = DAT_102b8c90 * local_4c;
  local_5c = local_6c;
  fStack_58 = local_6c;
  fStack_54 = local_6c;
  fStack_50 = local_6c;
  uVar9 = 0;
  fStack_48 = local_4c;
  fStack_44 = local_4c;
  fStack_40 = local_4c;
  do {
    if ((uVar9 & 0x1fff) == 0) {
      cVar2 = FUN_10192a4c(uVar9,uVar9 | 0x1fff);
      if (cVar2 == '\0') goto LAB_10125210;
      uVar9 = uVar9 | 0x1f00;
    }
    else {
LAB_10125210:
      iVar3 = 0;
      iVar10 = 0;
      local_7c = uVar9;
      do {
        uVar9 = iVar3 + local_7c;
        cVar2 = FUN_101902be(uVar9 & 0xffff);
        if (cVar2 != '\0') {
          puVar4 = (uint *)FUN_101902dc(uVar9 & 0xffff);
          if (puVar4 != (uint *)0x0) {
            iVar10 = iVar10 + (uint)((param_3 >> (*puVar4 >> 2 & 0xf) & 1) != 0);
          }
        }
        uVar9 = local_7c;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x100);
      if (0 < iVar10) {
        pcVar5 = "glyphs";
        if (iVar10 == 1) {
          pcVar5 = "glyph";
        }
        cVar2 = FUN_10147c9d(local_7c,"U+%04X..U+%04X (%d %s)",local_7c,local_7c + 0xff,iVar10,
                             pcVar5);
        if (cVar2 != '\0') {
          FUN_10114f9f(&local_1c);
          uVar8 = 0;
          local_3c = local_1c;
          fStack_38 = fStack_18;
          uStack_34 = 0;
          uStack_30 = 0;
          do {
            fVar11 = (float)(uVar8 & 0xf) * local_4c + local_3c;
            fVar12 = (float)(uVar8 >> 4) * fStack_48 + fStack_38;
            local_24 = CONCAT44(fVar12,fVar11);
            local_2c = CONCAT44(fVar12 + fStack_58,fVar11 + local_5c);
            uVar1 = uVar9 + uVar8;
            cVar2 = FUN_101902be(uVar1 & 0xffff);
            if (cVar2 == '\0') {
              FUN_1018b762(&local_24,&local_2c,_DAT_102b90b0,_UNK_102b90b4,_UNK_102b90b8,
                           _UNK_102b90bc);
            }
            else {
              pbVar6 = (byte *)FUN_101902dc(uVar1 & 0xffff);
              uVar7 = 0x64ffffff;
              if (pbVar6 == (byte *)0x0) {
                uVar7 = 0x32ffffff;
              }
              FUN_1018b762(&local_24,&local_2c,uVar7,0,0x3f800000,0);
              if ((pbVar6 != (byte *)0x0) && ((param_3 >> (*pbVar6 >> 2 & 0xf) & 1) != 0)) {
                FUN_1019381a(local_78,local_6c,&local_24,local_70,uVar1 & 0xffff,0);
                uVar9 = local_7c;
                cVar2 = FUN_10102f3a(&local_24,&local_2c,1);
                if (cVar2 != '\0') {
                  FUN_10115b98();
                  FUN_10125471(param_1,pbVar6);
                  thunk_FUN_1010ad44();
                }
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != 0x100);
          local_24 = CONCAT44(local_74,local_74);
          FUN_10131d8e(&local_24);
          FUN_10149387();
        }
      }
    }
    uVar9 = uVar9 + 0x100;
    if (0xffff < uVar9) {
      if (DAT_10388d00 == (local_14 ^ (uint)&local_7c)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
  } while( true );
}

