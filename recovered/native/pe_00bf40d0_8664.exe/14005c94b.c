/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005c94b */

int FUN_14005c94b(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStackY_a8 [32];
  int local_54;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_a8;
  lVar2 = *(longlong *)(param_2 + 0x98);
  uVar6 = FUN_14005d77b((longlong)param_1,*(longlong *)(param_2 + 0x140),*(uint *)(param_2 + 0x13c),
                        1,&local_4c,&local_50);
  local_54 = (int)uVar6;
  if (local_54 == 0) {
    uVar4 = FUN_14002142d(param_1,&local_54);
    if (uVar4 < 0x100 && local_54 == 0) {
      if ((uVar4 & 4) == 0) {
        uVar5 = FUN_14002142d(param_1,&local_54);
      }
      else {
        uVar5 = FUN_140020e0f(param_1,&local_54);
      }
      if (local_54 == 0) {
        if (local_50 / 9 < uVar5) {
          puVar8 = (undefined8 *)0x0;
          lVar7 = 0;
          local_54 = 8;
          goto LAB_14005c9ff;
        }
        uVar10 = 0x100;
        if (uVar5 < 0x100) {
          uVar10 = uVar5;
        }
        *(uint *)(param_2 + 0x19c) = uVar10;
        puVar8 = (undefined8 *)0x0;
        lVar7 = FUN_14001f231(lVar2,0xc,0,uVar10,0,&local_54);
        if (local_54 != 0) goto LAB_14005c9ff;
        if (uVar5 != 0) {
          puVar8 = (undefined8 *)0x0;
          lVar12 = 0;
          iVar3 = local_54;
          do {
            local_54 = iVar3;
            if ((uVar4 & 4) == 0) {
              puVar9 = &DAT_1400f8d70;
            }
            else {
              puVar9 = &DAT_1400f8d50;
            }
            local_54 = FUN_1400214cf(param_1,(longlong)puVar9,lVar7 + lVar12);
            if (local_54 != 0) goto LAB_14005c9ff;
            lVar12 = lVar12 + 0xc;
            local_54 = 0;
            iVar3 = 0;
          } while ((ulonglong)uVar10 * 0xc != lVar12);
        }
        uVar6 = FUN_140020a93((longlong)param_1,(uVar5 - uVar10) * 9);
        local_54 = (int)uVar6;
        if (local_54 == 0) {
          iVar3 = 0;
          if ((uVar5 & 3) != 0) {
            uVar6 = FUN_140020a93((longlong)param_1,4 - (uVar5 & 3));
            iVar3 = (int)uVar6;
            if ((int)uVar6 != 0) goto LAB_14005cb27;
          }
          local_54 = iVar3;
          if ((uVar4 & 4) == 0) {
            uVar4 = FUN_14002142d(param_1,&local_54);
          }
          else {
            uVar4 = FUN_140020e0f(param_1,&local_54);
          }
          if (local_54 == 0) {
            if (local_50 + uVar5 * -9 < uVar4) {
              puVar8 = (undefined8 *)0x0;
              local_54 = 8;
            }
            else {
              uVar13 = 0x1000100;
              if (uVar4 < 0x1000100) {
                uVar13 = uVar4;
              }
              puVar8 = (undefined8 *)FUN_14001e961(lVar2,uVar13 + 1,&local_54);
              if ((local_54 == 0) &&
                 (local_54 = FUN_140020a85(param_1,puVar8,uVar13), local_54 == 0)) {
                *(undefined1 *)((longlong)puVar8 + (ulonglong)uVar13) = 0;
                lVar12 = FUN_14001c617(lVar2,0x18,0,uVar10,0,&local_54);
                if (local_54 == 0) {
                  *(longlong *)(param_2 + 0x1a0) = lVar12;
                  if (uVar5 != 0) {
                    lVar11 = 0;
                    do {
                      if (uVar13 < *(uint *)(lVar7 + lVar11)) {
LAB_14005ccab:
                        local_54 = 9;
                        goto LAB_14005c9ff;
                      }
                      uVar6 = FUN_140021e43(lVar2,(char *)((ulonglong)*(uint *)(lVar7 + lVar11) +
                                                          (longlong)puVar8),&local_54);
                      *(undefined8 *)(lVar12 + lVar11 * 2) = uVar6;
                      if (local_54 != 0) goto LAB_14005c9ff;
                      cVar1 = *(char *)(lVar7 + 4 + lVar11);
                      *(char *)(lVar12 + 8 + lVar11 * 2) = cVar1;
                      uVar4 = *(uint *)(lVar7 + 8 + lVar11);
                      if (cVar1 == '\0') {
                        *(uint *)(lVar12 + 0x10 + lVar11 * 2) = uVar4;
                      }
                      else {
                        if (uVar13 < uVar4) goto LAB_14005ccab;
                        uVar6 = FUN_140021e43(lVar2,(char *)((ulonglong)uVar4 + (longlong)puVar8),
                                              &local_54);
                        *(undefined8 *)(lVar12 + 0x10 + lVar11 * 2) = uVar6;
                        if (local_54 != 0) goto LAB_14005c9ff;
                      }
                      lVar11 = lVar11 + 0xc;
                    } while ((ulonglong)uVar10 * 0xc != lVar11);
                  }
                  local_54 = 0;
                }
              }
            }
          }
          else {
            puVar8 = (undefined8 *)0x0;
          }
        }
        else {
LAB_14005cb27:
          puVar8 = (undefined8 *)0x0;
          local_54 = 0x53;
        }
        goto LAB_14005c9ff;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
  lVar7 = 0;
LAB_14005c9ff:
  FUN_14001c53d(lVar2,lVar7);
  FUN_14001c53d(lVar2,(longlong)puVar8);
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_a8);
  }
  return local_54;
}

