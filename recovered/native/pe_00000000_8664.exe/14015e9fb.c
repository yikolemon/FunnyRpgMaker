/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015e9fb */

uint FUN_14015e9fb(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  uint *local_80;
  uint local_6c;
  ulonglong local_68;
  ulonglong local_60;
  uint local_54;
  uint local_50;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  local_80 = &local_50;
  local_88 = local_4c;
  local_54 = FUN_14015f82b(param_1,*(undefined8 *)(param_2 + 0x140),*(undefined4 *)(param_2 + 0x13c)
                           ,1);
  if (local_54 == 0) {
    uVar3 = FUN_14012dffe(param_1,&local_54);
    if (uVar3 < 0x100 && local_54 == 0) {
      if ((uVar3 & 4) == 0) {
        uVar4 = FUN_14012dffe();
      }
      else {
        uVar4 = FUN_14012d9e0(param_1,&local_54);
      }
      if (local_54 == 0) {
        if (local_50 / 9 < uVar4) {
          lVar7 = 0;
          lVar6 = 0;
          local_54 = 8;
        }
        else {
          uVar13 = 0x100;
          if (uVar4 < 0x100) {
            uVar13 = uVar4;
          }
          *(uint *)(param_2 + 0x19c) = uVar13;
          local_88 = (undefined1 *)0x0;
          lVar7 = 0;
          local_80 = &local_54;
          local_60 = (ulonglong)local_50;
          lVar6 = FUN_14012b8aa(uVar2,0xc,0,uVar13);
          if (local_54 == 0) {
            local_6c = uVar13;
            local_68 = (ulonglong)uVar4;
            if (uVar4 != 0) {
              lVar7 = 0;
              lVar12 = 0;
              uVar4 = local_54;
              do {
                local_54 = uVar4;
                if ((uVar3 & 4) == 0) {
                  puVar10 = &DAT_140e9ffb0;
                }
                else {
                  puVar10 = &DAT_140e9ff90;
                }
                local_54 = FUN_14012e0a0(param_1,puVar10,lVar6 + lVar12);
                if (local_54 != 0) goto LAB_14015eaaf;
                lVar12 = lVar12 + 0xc;
                local_54 = 0;
                uVar4 = 0;
              } while ((ulonglong)uVar13 * 0xc != lVar12);
            }
            uVar8 = local_68;
            uVar4 = local_6c;
            uVar13 = (uint)local_68;
            local_54 = FUN_14012d664(param_1,(uVar13 - local_6c) * 9);
            if (local_54 == 0) {
              uVar5 = 0;
              if (((uVar8 & 3) == 0) ||
                 (uVar5 = FUN_14012d664(param_1,4 - (uVar13 & 3)), uVar5 == 0)) {
                local_54 = uVar5;
                if ((uVar3 & 4) == 0) {
                  uVar3 = FUN_14012dffe();
                }
                else {
                  uVar3 = FUN_14012d9e0(param_1,&local_54);
                }
                if (local_54 == 0) {
                  if ((int)local_60 + uVar13 * -9 < uVar3) {
                    lVar7 = 0;
                    local_54 = 8;
                  }
                  else {
                    uVar13 = 0x1000100;
                    if (uVar3 < 0x1000100) {
                      uVar13 = uVar3;
                    }
                    lVar7 = FUN_14012afda(uVar2,uVar13 + 1,&local_54);
                    if ((local_54 == 0) &&
                       (local_54 = FUN_14012d656(param_1,lVar7,uVar13), local_54 == 0)) {
                      *(undefined1 *)(lVar7 + (ulonglong)uVar13) = 0;
                      local_88 = (undefined1 *)0x0;
                      local_80 = &local_54;
                      lVar12 = FUN_140128c13(uVar2,0x18,0,uVar4);
                      if (local_54 == 0) {
                        *(longlong *)(param_2 + 0x1a0) = lVar12;
                        if ((int)local_68 != 0) {
                          uVar8 = (ulonglong)local_6c;
                          lVar11 = 0;
                          do {
                            if (uVar13 < *(uint *)(lVar6 + lVar11)) {
LAB_14015ed5b:
                              local_54 = 9;
                              goto LAB_14015eaaf;
                            }
                            uVar9 = FUN_14012ea14(uVar2,(ulonglong)*(uint *)(lVar6 + lVar11) + lVar7
                                                  ,&local_54);
                            *(undefined8 *)(lVar12 + lVar11 * 2) = uVar9;
                            if (local_54 != 0) goto LAB_14015eaaf;
                            cVar1 = *(char *)(lVar6 + 4 + lVar11);
                            *(char *)(lVar12 + 8 + lVar11 * 2) = cVar1;
                            uVar3 = *(uint *)(lVar6 + 8 + lVar11);
                            if (cVar1 == '\0') {
                              *(uint *)(lVar12 + 0x10 + lVar11 * 2) = uVar3;
                            }
                            else {
                              if (uVar13 < uVar3) goto LAB_14015ed5b;
                              uVar9 = FUN_14012ea14(uVar2,(ulonglong)uVar3 + lVar7,&local_54);
                              *(undefined8 *)(lVar12 + 0x10 + lVar11 * 2) = uVar9;
                              if (local_54 != 0) goto LAB_14015eaaf;
                            }
                            lVar11 = lVar11 + 0xc;
                          } while (uVar8 * 0xc != lVar11);
                        }
                        local_54 = 0;
                      }
                    }
                  }
                }
                else {
                  lVar7 = 0;
                }
                goto LAB_14015eaaf;
              }
            }
            lVar7 = 0;
            local_54 = 0x53;
          }
        }
        goto LAB_14015eaaf;
      }
    }
  }
  lVar7 = 0;
  lVar6 = 0;
LAB_14015eaaf:
  FUN_140128b39(uVar2,lVar6);
  FUN_140128b39(uVar2,lVar7);
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_a8);
  }
  return local_54;
}

