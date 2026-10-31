/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046385b */

void __fastcall
FUN_0046385b(int *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,char param_6)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_7c [3];
  char local_79;
  int *local_78;
  int local_74;
  int local_70;
  int local_6c;
  byte *local_68;
  uint local_64;
  undefined4 *local_60;
  int local_5c;
  byte local_58 [20];
  byte local_44 [16];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_6c = param_5;
  local_14 = DAT_0050e8c0 ^ (uint)auStack_7c;
  iVar9 = *param_1;
  local_79 = param_6;
  local_74 = iVar9;
  local_70 = param_2;
  if ((param_6 == '\0') && (cVar2 = FUN_00463d78(param_1[1]), cVar2 == '\0')) {
    FUN_00462854(&local_30,*param_4);
    iVar9 = local_74;
    FUN_0046385b((int *)param_1[1],local_70,param_3,&local_30,local_6c,'\x01');
  }
  cVar2 = FUN_00462bbb((int)param_4);
  local_78 = param_1;
  if (cVar2 == '\0') {
    iVar4 = FUN_0046381a(local_70);
    iVar5 = FUN_0046381a(param_3);
    iVar9 = local_74;
    FUN_0046475d(param_4,iVar4 + iVar5);
    cVar2 = FUN_00462bbb((int)param_4);
    if (cVar2 != '\0') goto LAB_00463915;
    if (*(char *)(iVar9 + 8) != '\0') {
      *(undefined4 *)*param_4 = 0;
      *(undefined1 *)((int)local_78 + 0xd) = 0;
    }
  }
  else {
LAB_00463915:
    param_1[5] = 0;
    param_1[6] = 0;
    local_30 = *param_4;
    uStack_2c = param_4[1];
    uStack_28 = param_4[2];
    uStack_24 = param_4[3];
    uStack_20 = param_4[4];
    uStack_1c = param_4[5];
    uStack_18 = param_4[6];
    pbVar6 = (byte *)FUN_0046479a((int)&local_30);
    local_64 = FUN_0046381a(local_70);
    if (local_64 <= (uint)param_4[2]) {
      if (*(char *)(iVar9 + 0xf9) != '\0') {
        FUN_0046479e((undefined4 *)local_44);
        piVar1 = local_78;
        FUN_004647ac((int)local_78,(byte *)(iVar9 + 0x120),local_44);
        iVar9 = local_74;
        FUN_004647ac((int)piVar1,local_44,(byte *)(local_74 + 0x10c));
      }
      local_60 = param_4;
      if (local_64 == 0) {
        if (local_79 == '\0') goto LAB_00463b85;
LAB_00463b34:
        piVar1 = local_78;
        if (((local_78[5] == 0) || (0 < local_78[9])) || (local_78[local_78[5] * 5 + 4] < 0)) {
          FUN_0046479e((undefined4 *)local_44);
          local_44[0] = 0x31;
          local_44[1] = 0;
          local_44[2] = 0;
          local_44[3] = 0;
          local_34 = piVar1[4];
          FUN_0046479e((undefined4 *)local_58);
          FUN_004647ac((int)piVar1,local_44,local_58);
        }
        FUN_00464bfd((int)piVar1);
        puVar11 = local_60;
      }
      else {
        local_5c = iVar9 + 0xf0;
        uVar12 = 0;
        uVar10 = 0x80;
        local_68 = pbVar6;
        do {
          piVar1 = local_78;
          if ((uVar10 & *pbVar6) != 0) {
            FUN_004649ab(local_44,local_70,uVar12,local_74,local_6c,local_78[4],'\x01');
            FUN_004649ab(local_58,local_70,uVar12,local_74,local_6c,piVar1[4],'\0');
            bVar3 = FUN_00464ac8(local_44);
            if (((bVar3 != 0) || (bVar3 = FUN_00464ac8(local_58), bVar3 != 0)) ||
               (uVar7 = FUN_00464ad0(local_5c,local_44,local_58), (char)uVar7 != '\0')) {
              FUN_004647ac((int)local_78,local_44,local_58);
              *pbVar6 = *pbVar6 & ~(byte)uVar10;
            }
          }
          uVar10 = uVar10 >> 1;
          bVar13 = (~uVar12 & 7) == 0;
          if (bVar13) {
            uVar10 = 0x80;
          }
          pbVar6 = pbVar6 + bVar13;
          uVar12 = uVar12 + 1;
        } while (local_64 != uVar12);
        if (local_79 != '\0') goto LAB_00463b34;
        uVar10 = 0;
        uVar12 = 0x80;
        pbVar6 = local_68;
        do {
          iVar9 = local_70;
          piVar1 = local_78;
          if ((uVar12 & *pbVar6) != 0) {
            local_68 = pbVar6;
            FUN_004649ab(local_44,local_70,uVar10,local_74,local_6c,local_78[4],'\x01');
            FUN_004649ab(local_58,iVar9,uVar10,local_74,local_6c,piVar1[4],'\0');
            pbVar6 = local_68;
            FUN_004647ac((int)piVar1,local_44,local_58);
          }
          uVar12 = uVar12 >> 1;
          bVar13 = (~uVar10 & 7) == 0;
          if (bVar13) {
            uVar12 = 0x80;
          }
          pbVar6 = pbVar6 + bVar13;
          uVar10 = uVar10 + 1;
        } while (local_64 != uVar10);
LAB_00463b85:
        piVar1 = local_78;
        FUN_00464bfd((int)local_78);
        puVar11 = local_60;
        uVar10 = piVar1[5];
        if (uVar10 != 0) {
          pbVar6 = (byte *)(local_78 + 7);
          uVar12 = 0;
          do {
            bVar3 = FUN_00464e5f(pbVar6);
            if (bVar3 == 0) {
              puVar8 = (undefined1 *)FUN_004631af(local_70,*(uint *)(pbVar6 + 4));
              bVar13 = FUN_00464e67(pbVar6);
              *(undefined4 *)(puVar8 + (uint)bVar13 * 4 + 0xc) = *(undefined4 *)(pbVar6 + 0xc);
              *puVar8 = 1;
              uVar10 = local_78[5];
            }
            uVar12 = uVar12 + 1;
            pbVar6 = pbVar6 + 0x14;
          } while (uVar12 < uVar10);
        }
      }
      *(undefined1 *)(local_78 + 3) = 1;
      if (DAT_0050e8c0 == (local_14 ^ (uint)auStack_7c)) {
        FUN_00464e6e((int)puVar11);
        return;
      }
      goto LAB_00463c39;
    }
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)auStack_7c)) {
    return;
  }
LAB_00463c39:
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)auStack_7c);
}

