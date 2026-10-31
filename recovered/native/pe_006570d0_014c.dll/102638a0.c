/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102638a0 */

/* WARNING: Removing unreachable block (ram,0x10263c08) */

ulonglong FUN_102638a0(uint *param_1,uint *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  uint extraout_ECX;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  bool bVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined1 local_228 [460];
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  uint *local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  undefined8 local_24;
  uint local_1c;
  int local_18;
  undefined8 local_14;
  uint *local_c;
  uint *local_8;
  
  uVar9 = *param_1;
  if ((uVar9 != 0) && (local_2c = (uint *)*param_2, local_2c != (uint *)0x0)) {
    local_c = (uint *)(uVar9 - 1);
    uVar10 = (int)local_2c - 1;
    if (uVar10 == 0) {
      local_30 = (uint *)param_2[1];
      if (local_30 == (uint *)0x1) {
        uVar9 = param_1[1];
        *param_1 = 0;
        _memcpy_s(param_1 + 1,0x1cc,local_228,0);
        return (ulonglong)uVar9;
      }
      if (local_c != (uint *)0x0) {
        local_14 = 0;
        local_58 = 0;
        local_58._0_4_ = 0;
        local_8 = (uint *)0x0;
        if (local_c == (uint *)0xffffffff) {
          local_14._4_4_ = (uint *)0x0;
          local_2c = (uint *)0x0;
          local_c = (uint *)0xffffffff;
          puVar6 = local_14._4_4_;
          uVar10 = (uint)local_58;
        }
        else {
          local_c = param_1 + uVar9;
          puVar6 = param_1;
          uVar10 = (uint)local_58;
          do {
            puVar11 = puVar6;
            puVar3 = (uint *)__aulldvrm(*local_c,uVar10,local_30,0);
            local_c = local_c + -1;
            uVar9 = uVar9 - 1;
            puVar6 = local_8;
            uVar10 = extraout_ECX;
            local_2c = puVar11;
            local_8 = puVar3;
          } while (uVar9 != 0);
        }
        *param_1 = 0;
        _memcpy_s(param_1 + 1,0x1cc,local_228,0);
        param_1[1] = uVar10;
        param_1[2] = (uint)local_2c;
        *param_1 = (local_2c != (uint *)0x0) + 1;
        return CONCAT44(puVar6,local_8);
      }
      uVar9 = param_1[1];
      *param_1 = 0;
      _memcpy_s(param_1 + 1,0x1cc,local_228,0);
      uVar10 = uVar9 % (uint)local_30;
      param_1[1] = uVar10;
      *param_1 = (uint)(uVar10 != 0);
      return (ulonglong)uVar9 / ZEXT48(local_30);
    }
    if (uVar10 <= local_c) {
      iVar8 = (int)local_c - uVar10;
      if (iVar8 <= (int)local_c) {
        puVar6 = param_1 + uVar9;
        puVar3 = param_2 + (int)local_2c;
        uVar9 = (uint)local_c;
        do {
          if (*puVar3 != *puVar6) {
            if (*puVar6 <= *puVar3) goto LAB_10263a46;
            break;
          }
          uVar9 = uVar9 - 1;
          puVar3 = puVar3 + -1;
          puVar6 = puVar6 + -1;
        } while (iVar8 <= (int)uVar9);
      }
      iVar8 = iVar8 + 1;
LAB_10263a46:
      if (iVar8 != 0) {
        local_8 = (uint *)param_2[(int)local_2c + -1];
        local_3c = param_2[(int)local_2c];
        local_34 = 0x1f;
        if (local_3c != 0) {
          for (; local_3c >> local_34 == 0; local_34 = local_34 + -1) {
          }
        }
        if (local_3c == 0) {
          local_34 = 0x20;
        }
        else {
          local_34 = 0x1f - local_34;
        }
        local_38 = 0x20 - local_34;
        if (local_34 != 0) {
          local_3c = local_3c << ((byte)local_34 & 0x1f) | (uint)local_8 >> ((byte)local_38 & 0x1f);
          local_8 = (uint *)((int)local_8 << ((byte)local_34 & 0x1f));
          if ((uint *)0x2 < local_2c) {
            local_8 = (uint *)((uint)local_8 |
                              param_2[(int)local_2c + -2] >> ((byte)local_38 & 0x1f));
          }
        }
        iVar1 = iVar8 + -1;
        local_14 = 0;
        local_58 = CONCAT44(iVar1,(uint)local_58);
        local_14._0_4_ = 0;
        if (iVar1 < 0) {
          local_14._4_4_ = (uint *)0x0;
          uVar10 = (uint)local_14._4_4_;
          uVar9 = (uint)local_14;
        }
        else {
          local_44 = iVar1 + (int)local_2c;
          local_48 = param_1 + iVar8;
          local_30 = param_1 + (local_44 - 1);
          local_5c = 0;
          do {
            if (local_c < local_44) {
              uVar9 = 0;
            }
            else {
              uVar9 = local_30[2];
            }
            local_1c = local_30[1];
            uVar10 = *local_30;
            local_50 = CONCAT44(uVar9,(undefined4)local_50);
            local_24 = CONCAT44(uVar9,(int)local_24);
            local_28 = (uint *)uVar10;
            if (local_34 != 0) {
              bVar5 = (byte)local_38;
              uVar13 = __allshl();
              uVar9 = (uint)((ulonglong)uVar13 >> 0x20);
              local_1c = (uint)uVar13 | uVar10 >> (bVar5 & 0x1f);
              local_28 = (uint *)(uVar10 << ((byte)local_34 & 0x1f));
              local_24 = CONCAT44(uVar9,(uint)local_24);
              if (2 < local_44) {
                local_28 = (uint *)((uint)local_28 | local_30[-1] >> ((byte)local_38 & 0x1f));
              }
            }
            uVar10 = local_3c;
            local_14 = __aulldiv(local_1c,uVar9,local_3c,0);
            local_18 = (int)(local_14 >> 0x20);
            uVar9 = (uint)local_14;
            local_40 = uVar9;
            uVar10 = __aullrem(local_1c,local_24._4_4_,uVar10,0);
            local_1c = 0;
            uVar2 = (ulonglong)uVar10;
            if (local_18 != 0) {
              lVar14 = __allmul(uVar9 + 1,local_18 + -1 + (uint)(0xfffffffe < uVar9),local_3c,0);
              uVar2 = lVar14 + (ulonglong)uVar10;
              uVar9 = 0xffffffff;
              local_40 = 0xffffffff;
              local_18 = 0;
              local_14 = 0xffffffff;
            }
            local_1c = (uint)(uVar2 >> 0x20);
            uVar10 = local_40;
            if (local_1c == 0) {
              while( true ) {
                local_1c = (uint)(uVar2 >> 0x20);
                uVar4 = (uint)uVar2;
                local_24 = CONCAT44(local_28,(uint)local_24);
                uVar13 = __allmul(local_8,0,uVar9,local_18);
                uVar7 = (uint)((ulonglong)uVar13 >> 0x20);
                uVar10 = uVar9;
                if ((uVar7 < uVar4) || ((uVar7 <= uVar4 && ((uint)uVar13 <= local_24._4_4_))))
                break;
                bVar12 = uVar9 != 0;
                uVar9 = uVar9 - 1;
                local_18 = local_18 + -1 + (uint)bVar12;
                local_14 = CONCAT44(local_18,uVar9);
                uVar10 = uVar9;
                if (local_1c + CARRY4(uVar4,local_3c) != 0) break;
                uVar2 = (ulonglong)(uVar4 + local_3c);
              }
            }
            local_40 = uVar10;
            if ((local_18 != 0) || (uVar9 != 0)) {
              local_24._4_4_ = 0;
              local_24._0_4_ = 0;
              if (local_2c != (uint *)0x0) {
                local_28 = local_2c;
                puVar3 = local_48;
                puVar6 = param_2;
                do {
                  puVar6 = puVar6 + 1;
                  lVar14 = (local_14 & 0xffffffff) * (ulonglong)*puVar6;
                  uVar9 = (uint)lVar14;
                  uVar10 = (uint)local_24 + uVar9;
                  local_24._0_4_ =
                       local_24._4_4_ +
                       (int)((ulonglong)lVar14 >> 0x20) + (int)local_14._4_4_ * *puVar6 +
                       (uint)CARRY4((uint)local_24,uVar9);
                  local_24._4_4_ = 0;
                  if (*puVar3 < uVar10) {
                    bVar12 = 0xfffffffe < (uint)local_24;
                    local_24._0_4_ = (uint)local_24 + 1;
                    local_24._4_4_ = (uint)bVar12;
                  }
                  *puVar3 = *puVar3 - uVar10;
                  puVar3 = puVar3 + 1;
                  local_28 = (uint *)((int)local_28 + -1);
                  uVar9 = local_40;
                } while (local_28 != (uint *)0x0);
              }
              if ((local_24._4_4_ != 0) || (local_50._4_4_ < (uint)local_24)) {
                if (local_2c != (uint *)0x0) {
                  local_50 = 0;
                  puVar3 = local_48;
                  puVar11 = local_2c;
                  puVar6 = param_2;
                  do {
                    puVar6 = puVar6 + 1;
                    uVar9 = *puVar3;
                    uVar10 = *puVar6;
                    uVar7 = uVar9 + *puVar6;
                    *puVar3 = uVar7 + local_50._4_4_;
                    local_50 = (ulonglong)
                               ((uint)CARRY4(uVar9,uVar10) + (uint)CARRY4(uVar7,local_50._4_4_)) <<
                               0x20;
                    puVar11 = (uint *)((int)puVar11 + -1);
                    puVar3 = puVar3 + 1;
                    uVar9 = local_40;
                  } while (puVar11 != (uint *)0x0);
                }
                uVar9 = uVar9 - 1;
              }
              local_c = (uint *)(local_44 - 1);
              local_24 = 0;
            }
            local_48 = local_48 + -1;
            iVar8 = local_58._4_4_ + -1;
            local_44 = local_44 - 1;
            local_58 = CONCAT44(iVar8,(uint)local_58);
            local_30 = local_30 + -1;
            uVar10 = local_5c;
            local_5c = uVar9;
          } while (-1 < iVar8);
        }
        uVar7 = (int)local_c + 1;
        if (uVar7 < *param_1) {
          puVar6 = param_1 + (int)local_c + 2;
          uVar4 = uVar7;
          do {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
            uVar4 = uVar4 + 1;
          } while (uVar4 < *param_1);
        }
        *param_1 = uVar7;
        while ((uVar7 != 0 && (param_1[uVar7] == 0))) {
          uVar7 = uVar7 - 1;
          *param_1 = uVar7;
        }
        return CONCAT44(uVar10,uVar9);
      }
    }
  }
  return 0;
}

