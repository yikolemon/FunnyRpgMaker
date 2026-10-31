/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140120a20 */

void FUN_140120a20(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,int param_6,undefined4 param_7,undefined8 param_8)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  PVOID pvVar5;
  int iVar6;
  longlong lVar7;
  PVOID pvVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  longlong lVar14;
  byte *pbVar15;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  int local_140;
  undefined1 *local_138;
  longlong local_130;
  undefined1 local_128;
  uint local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  int *local_f8;
  longlong local_f0;
  uint local_e8;
  uint local_d8;
  undefined1 local_d0 [8];
  uint local_c8 [2];
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0 [4];
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined4 local_80;
  int local_78 [10];
  ulonglong local_50;
  
  local_50 = DAT_1401c9640 ^ (ulonglong)auStack_178;
  local_110 = param_8;
  local_108 = param_3;
  local_100 = param_2;
  local_f8 = param_1;
  if (*param_1 != -0x7ffffffd) {
    lVar7 = FUN_14011d6e0();
    if (*(longlong *)(lVar7 + 0x10) != 0) {
      lVar7 = FUN_14011d6e0();
      pvVar5 = *(PVOID *)(lVar7 + 0x10);
      pvVar8 = EncodePointer((PVOID)0x0);
      if (((pvVar5 != pvVar8) && (*param_1 != -0x1fbcb0b3)) && (*param_1 != -0x1fbcbcae)) {
        local_140 = param_6;
        local_148 = local_110;
        local_150 = CONCAT44(local_150._4_4_,param_7);
        local_158 = param_5;
        iVar6 = FUN_140107320(param_1,param_2,local_108,param_4);
        if (iVar6 != 0) goto LAB_140120d69;
      }
    }
    FUN_14011dda0(local_78,param_5,*(undefined8 *)(param_4 + 8));
    if (local_78[0] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140115938();
    }
    local_150 = CONCAT44(local_150._4_4_,param_7);
    local_158 = param_5;
    FUN_140106f40(&local_f0,local_78,param_6,param_4);
    local_118 = local_e8;
    if (local_e8 < local_d8) {
      do {
        lVar7 = 0;
        iVar6 = *(int *)(local_f0 + 0x18);
        if ((iVar6 <= param_6) && (param_6 <= *(int *)(local_f0 + 0x1c))) {
          iVar3 = *(int *)(local_f0 + 0x24);
          local_88 = *(longlong *)(param_4 + 8);
          local_110 = CONCAT44(local_110._4_4_,*(undefined4 *)(local_f0 + 0x20));
          local_80 = **(undefined4 **)(param_4 + 0x10);
          local_c0 = 0;
          local_b8 = 0;
          local_b0[0] = 0;
          local_ac = 0;
          local_a4 = 0;
          local_98 = 0;
          uStack_90 = 0;
          if (iVar3 == 0) {
            local_c8[0] = 0;
          }
          else {
            uVar11 = *(byte *)(iVar3 + local_88) & 0xf;
            local_c0 = ((longlong)iVar3 - (longlong)(char)(&DAT_1401661e0)[uVar11]) + local_88;
            local_c8[0] = *(uint *)(local_c0 + -4) >> ((&DAT_1401661f0)[uVar11] & 0x1f);
            local_b8 = local_c0;
            FUN_14011e080(local_c8);
          }
          FUN_14011de90(local_c8,0);
          FUN_14011de90(local_c8,local_c8[0] - 1);
          lVar14 = (longlong)local_ac._4_4_;
          if ((local_ac._4_4_ != 0) && (lVar9 = FUN_1401070c0(), lVar9 + lVar14 != 0)) {
            lVar14 = (longlong)local_ac._4_4_;
            if (local_ac._4_4_ != 0) {
              lVar7 = FUN_1401070c0();
              lVar7 = lVar7 + lVar14;
            }
            if (*(char *)(lVar7 + 0x10) != '\0') goto LAB_140120ca6;
          }
          if ((local_ac & 0x40) == 0) {
            uVar10 = FUN_140106f10(local_100,param_4,param_5,local_d0);
            lVar7 = (longlong)local_a4._4_4_;
            local_158 = FUN_1401070c0();
            local_138 = local_b0;
            local_158 = local_158 + lVar7;
            local_128 = 0;
            local_140 = (int)local_110;
            local_148 = CONCAT44(local_148._4_4_,iVar6);
            local_150 = param_5;
            local_130 = param_4;
            FUN_140106d90(local_100,local_f8,local_108,uVar10);
          }
        }
LAB_140120ca6:
        pbVar15 = *(byte **)(local_f0 + 8);
        lVar7 = (longlong)(char)(&DAT_1401661e0)[*pbVar15 & 0xf];
        bVar1 = (&DAT_1401661f0)[*pbVar15 & 0xf];
        pbVar12 = pbVar15 + -lVar7;
        uVar11 = *(uint *)(pbVar12 + -4);
        *(byte **)(local_f0 + 8) = pbVar12;
        *(uint *)(local_f0 + 0x18) = uVar11 >> (bVar1 & 0x1f);
        cVar2 = (&DAT_1401661e0)[*pbVar12 & 0xf];
        pbVar13 = pbVar15 + (-lVar7 - (longlong)cVar2);
        *(uint *)(local_f0 + 0x1c) =
             *(uint *)(pbVar13 + -4) >> ((&DAT_1401661f0)[*pbVar12 & 0xf] & 0x1f);
        *(byte **)(local_f0 + 8) = pbVar13;
        pbVar15 = pbVar15 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_1401661e0)[*pbVar13 & 0xf]) -
                            lVar7);
        *(uint *)(local_f0 + 0x20) =
             *(uint *)(pbVar15 + -4) >> ((&DAT_1401661f0)[*pbVar13 & 0xf] & 0x1f);
        *(byte **)(local_f0 + 8) = pbVar15;
        uVar4 = *(undefined4 *)pbVar15;
        *(byte **)(local_f0 + 8) = pbVar15 + 4;
        local_118 = local_118 + 1;
        *(undefined4 *)(local_f0 + 0x24) = uVar4;
      } while (local_118 < local_d8);
    }
  }
LAB_140120d69:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_50 ^ (ulonglong)auStack_178);
}

