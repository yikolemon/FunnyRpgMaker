/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021b641 */

void FUN_18021b641(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 param_5,char param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  byte *pbVar13;
  bool bVar14;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined1 local_108;
  char local_f5;
  undefined4 local_f4;
  undefined8 local_f0;
  longlong *local_e8;
  ulonglong local_e0;
  byte *local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined1 local_b8 [32];
  undefined4 local_98 [6];
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_f4 = param_5;
  local_48 = DAT_180402640 ^ (ulonglong)auStack_138;
  lVar1 = *param_1;
  local_f0 = param_2;
  if ((param_6 == '\0') && (cVar5 = FUN_18000d3bc(param_1[1]), cVar5 == '\0')) {
    FUN_18021a39b(&local_78,*param_4);
    local_118 = local_f4;
    local_110 = CONCAT31(local_110._1_3_,1);
    FUN_18021b641(param_1[1],local_f0,param_3,&local_78);
  }
  cVar5 = FUN_18021a7c3(param_4);
  if (cVar5 == '\0') {
    lVar7 = FUN_18021b5f1(local_f0);
    lVar8 = FUN_18021b5f1(param_3);
    FUN_18021c664(param_4,lVar7 + lVar8);
    cVar5 = FUN_18021a7c3(param_4);
    if (cVar5 != '\0') goto LAB_18021b711;
    if (*(char *)(lVar1 + 0xc) != '\0') {
      *(undefined4 *)*param_4 = 0;
      *(undefined1 *)((longlong)param_1 + 0x19) = 0;
    }
  }
  else {
LAB_18021b711:
    param_1[4] = 0;
    local_78 = *(undefined4 *)param_4;
    uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_70 = *(undefined4 *)(param_4 + 1);
    uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
    local_68 = *(undefined4 *)(param_4 + 2);
    uStack_64 = *(undefined4 *)((longlong)param_4 + 0x14);
    uStack_60 = *(undefined4 *)(param_4 + 3);
    uStack_5c = *(undefined4 *)((longlong)param_4 + 0x1c);
    local_58 = *(undefined4 *)(param_4 + 4);
    uStack_54 = *(undefined4 *)((longlong)param_4 + 0x24);
    uStack_50 = *(undefined4 *)(param_4 + 5);
    uStack_4c = *(undefined4 *)((longlong)param_4 + 0x2c);
    local_d8 = (byte *)FUN_18021c6a9();
    local_e0 = FUN_18021b5f1(local_f0);
    if (local_e0 <= (ulonglong)param_4[2]) {
      if (*(char *)(lVar1 + 0x141) != '\0') {
        FUN_18021c6ae(local_98);
        FUN_18021c6b9(param_1,lVar1 + 0x178,local_98);
        FUN_18021c6b9(param_1,local_98,lVar1 + 0x158);
      }
      uVar3 = local_f0;
      local_c8 = param_4;
      if (local_e0 == 0) {
        if (param_6 == '\0') goto LAB_18021ba1a;
LAB_18021b9bf:
        if ((((int)param_1[4] == 0) || (0 < (int)param_1[7])) ||
           ((int)param_1[(ulonglong)((int)param_1[4] - 1) * 4 + 7] < 0)) {
          FUN_18021c6ae(local_98);
          local_98[0] = 0x31;
          local_80 = *(undefined4 *)((longlong)param_1 + 0x1c);
          FUN_18021c6ae(local_b8);
          FUN_18021c6b9(param_1,local_98,local_b8);
        }
        FUN_18021cb71(param_1);
      }
      else {
        local_f5 = param_6;
        local_c0 = lVar1 + 0x138;
        uVar10 = 0;
        uVar12 = 0x80;
        pbVar13 = local_d8;
        local_e8 = param_1;
        local_d0 = lVar1;
        do {
          uVar2 = local_f4;
          if ((uVar12 & *pbVar13) != 0) {
            local_110 = *(undefined4 *)((longlong)param_1 + 0x1c);
            local_118 = local_f4;
            local_108 = 1;
            FUN_18021c8e0(local_98,uVar3,uVar10,lVar1);
            param_1 = local_e8;
            local_110 = *(undefined4 *)((longlong)local_e8 + 0x1c);
            local_118 = uVar2;
            local_108 = 0;
            FUN_18021c8e0(local_b8,uVar3,uVar10,lVar1);
            cVar5 = FUN_18021ca1c(local_98);
            if (((cVar5 != '\0') || (cVar5 = FUN_18021ca1c(local_b8), cVar5 != '\0')) ||
               (cVar5 = FUN_18021ca24(local_c0,local_98,local_b8), cVar5 != '\0')) {
              FUN_18021c6b9(param_1,local_98,local_b8);
              *pbVar13 = *pbVar13 & ~(byte)uVar12;
            }
          }
          uVar4 = local_f0;
          uVar12 = uVar12 >> 1;
          bVar14 = (~(uint)uVar10 & 7) == 0;
          if (bVar14) {
            uVar12 = 0x80;
          }
          pbVar13 = pbVar13 + bVar14;
          uVar10 = uVar10 + 1;
        } while (local_e0 != uVar10);
        if (local_f5 != '\0') goto LAB_18021b9bf;
        uVar10 = 0;
        uVar12 = 0x80;
        pbVar13 = local_d8;
        do {
          lVar1 = local_d0;
          uVar2 = local_f4;
          if ((uVar12 & *pbVar13) != 0) {
            local_110 = *(undefined4 *)((longlong)param_1 + 0x1c);
            local_118 = local_f4;
            local_108 = 1;
            FUN_18021c8e0(local_98,uVar4,uVar10,local_d0);
            param_1 = local_e8;
            local_110 = *(undefined4 *)((longlong)local_e8 + 0x1c);
            local_118 = uVar2;
            local_108 = 0;
            FUN_18021c8e0(local_b8,uVar4,uVar10,lVar1);
            FUN_18021c6b9(param_1,local_98,local_b8);
          }
          uVar12 = uVar12 >> 1;
          bVar14 = (~(uint)uVar10 & 7) == 0;
          if (bVar14) {
            uVar12 = 0x80;
          }
          pbVar13 = pbVar13 + bVar14;
          uVar10 = uVar10 + 1;
        } while (local_e0 != uVar10);
LAB_18021ba1a:
        FUN_18021cb71(param_1);
        uVar12 = *(uint *)(param_1 + 4);
        if (uVar12 != 0) {
          plVar11 = param_1 + 5;
          uVar10 = 0;
          do {
            cVar5 = FUN_18021cdd4(plVar11);
            if (cVar5 == '\0') {
              puVar9 = (undefined1 *)FUN_18021ae88(local_f0,plVar11[1]);
              bVar6 = FUN_18021cddc(plVar11);
              *(undefined4 *)(puVar9 + (ulonglong)bVar6 * 4 + 0xc) =
                   *(undefined4 *)((longlong)plVar11 + 0x14);
              *puVar9 = 1;
              uVar12 = *(uint *)(param_1 + 4);
            }
            uVar10 = uVar10 + 1;
            plVar11 = plVar11 + 4;
          } while (uVar10 < uVar12);
        }
      }
      *(undefined1 *)(param_1 + 3) = 1;
      if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_138)) {
        FUN_18021cde3(local_c8);
        return;
      }
      goto LAB_18021bae8;
    }
  }
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_138)) {
    return;
  }
LAB_18021bae8:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_138);
}

