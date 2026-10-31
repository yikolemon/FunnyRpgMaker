/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802317c1 */

int FUN_1802317c1(int *param_1,longlong *param_2,undefined4 param_3,uint *param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint *puVar10;
  byte bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  byte bVar16;
  byte bVar17;
  ulonglong *puVar18;
  longlong lVar19;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  int *local_c0;
  char local_b1;
  ulonglong local_b0;
  longlong local_a8;
  uint *local_a0;
  uint *local_98;
  ulonglong local_90;
  ulonglong *local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70;
  int local_68;
  longlong local_60;
  ulonglong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_e8;
  local_4c = 0;
  iVar6 = 6;
  if ((param_4 != (uint *)0x0 && param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    local_b1 = (char)param_1[1];
    *(undefined1 *)(param_1 + 1) = 0;
    local_a8 = *param_2;
    lVar7 = param_2[1];
    local_a0 = (uint *)CONCAT44(local_a0._4_4_,param_3);
    if (lVar7 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        uVar14 = uVar14 + 1;
        lVar7 = *(longlong *)(lVar7 + 0x10);
      } while (lVar7 != 0);
    }
    local_90 = (ulonglong)*param_4;
    uVar3 = param_4[1];
    local_c0 = &local_4c;
    local_c8 = 0;
    local_60 = local_a8;
    local_98 = (uint *)FUN_1801c9c3f(local_a8,0x28,0,uVar14);
    if (local_4c == 0) {
      local_c0 = &local_4c;
      local_c8 = 0;
      lVar7 = FUN_1801c9c3f(local_a8,4,0,uVar14);
      if (local_4c == 0) {
        puVar18 = (ulonglong *)(param_2 + 1);
        local_88 = puVar18;
        if (uVar14 == 0) {
          uVar13 = 0;
        }
        else {
          local_80 = (ulonglong)uVar14;
          uVar12 = 0;
          uVar13 = 0;
          puVar10 = local_98;
          do {
            uVar4 = *puVar18;
            local_b0 = uVar13;
            FUN_180233d68(puVar10);
            puVar10[1] = param_4[1];
            *puVar10 = *param_4;
            puVar10[2] = param_4[2];
            *(short *)(puVar10 + 6) = (short)param_4[6];
            *(undefined1 *)((longlong)puVar10 + 0x1a) = *(undefined1 *)((longlong)param_4 + 0x1a);
            local_c0 = &local_4c;
            local_c8 = 0;
            uVar8 = FUN_1801c9c3f(local_a8,param_4[2],0,*param_4);
            *(undefined8 *)(puVar10 + 4) = uVar8;
            if (local_4c != 0) goto LAB_1802318d4;
            iVar6 = FUN_18023205c(uVar4);
            *(int *)(lVar7 + uVar12 * 4) = iVar6;
            if (iVar6 == 1) {
              iVar6 = 1;
              if (*param_1 != 1) goto LAB_180231a42;
            }
            else if ((iVar6 == 2) && (*param_1 == 0)) {
              iVar6 = 1;
            }
            else {
LAB_180231a42:
              iVar6 = 0;
            }
            param_1[2] = iVar6;
            uVar13 = *(ulonglong *)(uVar4 + 0x10);
            *(undefined8 *)(uVar4 + 0x10) = 0;
            local_68 = param_1[2];
            local_70 = *(undefined8 *)param_1;
            local_78 = uVar12;
            local_58 = uVar4;
            local_4c = FUN_180231bda(&local_70,&local_60,(ulonglong)local_a0 & 0xffffffff,puVar10);
            if (local_4c != 0) goto LAB_1802318d9;
            puVar18 = (ulonglong *)(uVar4 + 0x10);
            *puVar18 = uVar13;
            *(ulonglong *)(local_58 + 0x10) = local_b0;
            if (*param_1 == 1) {
              iVar6 = *(int *)(lVar7 + local_78 * 4);
              if (iVar6 == 1) {
                uVar9 = 2;
              }
              else {
                if (iVar6 != 2) goto LAB_180231ad9;
                uVar9 = 1;
              }
              *(undefined4 *)(lVar7 + local_78 * 4) = uVar9;
            }
LAB_180231ad9:
            uVar12 = local_78 + 1;
            puVar10 = puVar10 + 10;
            uVar13 = local_58;
          } while (local_80 != uVar12);
        }
        *local_88 = uVar13;
        if (0 < (int)local_90) {
          lVar15 = *(longlong *)(param_4 + 4);
          local_a0 = local_98 + 4;
          local_b0 = 0;
          do {
            if (0 < (int)uVar3) {
              lVar19 = local_b0 * uVar3;
              uVar13 = 0;
              do {
                lVar1 = lVar19 + uVar13;
                if (uVar14 == 0) {
                  bVar5 = 0;
                }
                else {
                  uVar12 = 0;
                  puVar10 = local_a0;
                  bVar11 = 0xff;
                  bVar16 = 0;
                  do {
                    bVar2 = *(byte *)(*(longlong *)puVar10 + lVar1);
                    bVar5 = bVar11;
                    bVar17 = bVar16;
                    if (*(int *)(lVar7 + uVar12 * 4) == 1) {
                      bVar17 = bVar2;
                      if (bVar2 < bVar16) {
                        bVar17 = bVar16;
                      }
                    }
                    else {
                      bVar5 = bVar2;
                      if (bVar11 < bVar2) {
                        bVar5 = bVar11;
                      }
                    }
                    uVar12 = uVar12 + 1;
                    puVar10 = puVar10 + 10;
                    bVar11 = bVar5;
                    bVar16 = bVar17;
                  } while (uVar14 != uVar12);
                  if (bVar17 < bVar5) {
                    bVar5 = bVar17;
                  }
                }
                if (local_b1 != '\0') {
                  bVar5 = FUN_18023218a(bVar5);
                }
                *(byte *)(lVar15 + lVar1) = bVar5;
                uVar13 = uVar13 + 1;
              } while (uVar13 != uVar3);
            }
            local_b0 = local_b0 + 1;
          } while (local_b0 != local_90);
        }
      }
LAB_1802318d4:
      if (lVar7 != 0) {
LAB_1802318d9:
        FUN_1801c9b65(local_a8,lVar7);
      }
    }
    puVar10 = local_98;
    lVar7 = local_a8;
    iVar6 = local_4c;
    if (local_98 != (uint *)0x0) {
      if (uVar14 == 0) {
        local_4c = 0x61;
        iVar6 = local_4c;
      }
      else {
        lVar15 = 0;
        do {
          FUN_1801c9b65(lVar7,*(undefined8 *)((longlong)puVar10 + lVar15 + 0x10));
          *(undefined8 *)((longlong)puVar10 + lVar15 + 0x10) = 0;
          lVar15 = lVar15 + 0x28;
        } while ((ulonglong)uVar14 * 0x28 != lVar15);
        FUN_1801c9b65(lVar7,puVar10);
        iVar6 = local_4c;
      }
    }
  }
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_e8);
  }
  return iVar6;
}

