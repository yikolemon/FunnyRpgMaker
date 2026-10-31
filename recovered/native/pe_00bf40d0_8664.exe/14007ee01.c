/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007ee01 */

int FUN_14007ee01(int *param_1,longlong *param_2,int param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined7 extraout_var;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  uint *puVar16;
  byte bVar17;
  ulonglong uVar18;
  uint uVar19;
  byte bVar20;
  byte bVar21;
  longlong *plVar22;
  undefined1 auStackY_e8 [32];
  ulonglong local_b0;
  undefined8 local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_e8;
  local_4c = 0;
  iVar8 = 6;
  if ((param_4 != (uint *)0x0 && param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    iVar8 = param_1[1];
    *(undefined1 *)(param_1 + 1) = 0;
    lVar4 = *param_2;
    lVar11 = param_2[1];
    if (lVar11 == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      do {
        uVar19 = uVar19 + 1;
        lVar11 = *(longlong *)(lVar11 + 0x10);
      } while (lVar11 != 0);
    }
    uVar2 = *param_4;
    uVar3 = param_4[1];
    local_60 = lVar4;
    puVar10 = (uint *)FUN_14001c617(lVar4,0x28,0,uVar19,0,&local_4c);
    if (local_4c == 0) {
      lVar11 = FUN_14001c617(lVar4,4,0,uVar19,0,&local_4c);
      if (local_4c == 0) {
        if (uVar19 == 0) {
          lVar13 = 0;
        }
        else {
          uVar18 = 0;
          lVar13 = 0;
          puVar16 = puVar10;
          plVar22 = param_2 + 1;
          do {
            lVar5 = *plVar22;
            FUN_1400813a8((undefined8 *)puVar16);
            puVar16[1] = param_4[1];
            *puVar16 = *param_4;
            puVar16[2] = param_4[2];
            *(short *)(puVar16 + 6) = (short)param_4[6];
            *(undefined1 *)((longlong)puVar16 + 0x1a) = *(undefined1 *)((longlong)param_4 + 0x1a);
            lVar12 = FUN_14001c617(lVar4,param_4[2],0,*param_4,0,&local_4c);
            *(longlong *)(puVar16 + 4) = lVar12;
            if (local_4c != 0) goto LAB_14007ef14;
            cVar6 = FUN_14007f69c(lVar5);
            iVar9 = (int)CONCAT71(extraout_var,cVar6);
            *(int *)(lVar11 + uVar18 * 4) = iVar9;
            if (iVar9 == 1) {
              iVar9 = 1;
              if (*param_1 != 1) goto LAB_14007f082;
            }
            else if ((iVar9 == 2) && (*param_1 == 0)) {
              iVar9 = 1;
            }
            else {
LAB_14007f082:
              iVar9 = 0;
            }
            param_1[2] = iVar9;
            lVar12 = *(longlong *)(lVar5 + 0x10);
            *(undefined8 *)(lVar5 + 0x10) = 0;
            local_68 = param_1[2];
            local_70 = *(undefined8 *)param_1;
            local_58 = lVar5;
            local_4c = FUN_14007f21a(&local_70,&local_60,param_3,puVar16);
            if (local_4c != 0) goto LAB_14007ef19;
            plVar22 = (longlong *)(lVar5 + 0x10);
            *plVar22 = lVar12;
            *(longlong *)(local_58 + 0x10) = lVar13;
            if (*param_1 == 1) {
              iVar9 = *(int *)(lVar11 + uVar18 * 4);
              if (iVar9 == 1) {
                uVar15 = 2;
              }
              else {
                if (iVar9 != 2) goto LAB_14007f119;
                uVar15 = 1;
              }
              *(undefined4 *)(lVar11 + uVar18 * 4) = uVar15;
            }
LAB_14007f119:
            uVar18 = uVar18 + 1;
            puVar16 = puVar16 + 10;
            lVar13 = local_58;
          } while (uVar19 != uVar18);
        }
        param_2[1] = lVar13;
        if (0 < (int)uVar2) {
          lVar13 = *(longlong *)(param_4 + 4);
          local_b0 = 0;
          do {
            if (0 < (int)uVar3) {
              uVar18 = 0;
              do {
                lVar5 = local_b0 * uVar3 + uVar18;
                if (uVar19 == 0) {
                  bVar7 = 0;
                }
                else {
                  uVar14 = 0;
                  puVar16 = puVar10 + 4;
                  bVar20 = 0;
                  bVar17 = 0xff;
                  do {
                    bVar1 = *(byte *)(*(longlong *)puVar16 + lVar5);
                    bVar7 = bVar17;
                    bVar21 = bVar20;
                    if (*(int *)(lVar11 + uVar14 * 4) == 1) {
                      bVar21 = bVar1;
                      if (bVar1 < bVar20) {
                        bVar21 = bVar20;
                      }
                    }
                    else {
                      bVar7 = bVar1;
                      if (bVar17 < bVar1) {
                        bVar7 = bVar17;
                      }
                    }
                    uVar14 = uVar14 + 1;
                    puVar16 = puVar16 + 10;
                    bVar20 = bVar21;
                    bVar17 = bVar7;
                  } while (uVar19 != uVar14);
                  if (bVar21 < bVar7) {
                    bVar7 = bVar21;
                  }
                }
                if ((char)iVar8 != '\0') {
                  bVar7 = FUN_14007f7ca(bVar7);
                }
                *(byte *)(lVar13 + lVar5) = bVar7;
                uVar18 = uVar18 + 1;
              } while (uVar18 != uVar3);
            }
            local_b0 = local_b0 + 1;
          } while (local_b0 != uVar2);
        }
      }
LAB_14007ef14:
      if (lVar11 != 0) {
LAB_14007ef19:
        FUN_14001c53d(lVar4,lVar11);
      }
    }
    iVar8 = local_4c;
    if (puVar10 != (uint *)0x0) {
      if (uVar19 == 0) {
        local_4c = 0x61;
        iVar8 = local_4c;
      }
      else {
        lVar11 = 0;
        do {
          FUN_14001c53d(lVar4,*(longlong *)((longlong)puVar10 + lVar11 + 0x10));
          *(undefined8 *)((longlong)puVar10 + lVar11 + 0x10) = 0;
          lVar11 = lVar11 + 0x28;
        } while ((ulonglong)uVar19 * 0x28 != lVar11);
        FUN_14001c53d(lVar4,(longlong)puVar10);
        iVar8 = local_4c;
      }
    }
  }
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_e8);
  }
  return iVar8;
}

