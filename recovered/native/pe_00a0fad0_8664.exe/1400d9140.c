/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d9140 */

void FUN_1400d9140(longlong *param_1,longlong *param_2,ulonglong param_3,char *param_4,char param_5)

{
  int iVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  char local_98;
  undefined4 local_94;
  undefined8 local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 ***local_78 [3];
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1401c9640 ^ (ulonglong)auStack_b8;
  lVar7 = 0;
  cVar3 = *param_4;
  while (cVar3 != '\0') {
    uVar11 = param_3 + 1;
    if (param_4[lVar7] != *param_4) {
      uVar11 = param_3;
    }
    lVar7 = lVar7 + 1;
    param_3 = uVar11;
    cVar3 = param_4[lVar7];
  }
  FUN_14002213a(local_78,param_3,0);
  lVar7 = FUN_1400d4020(1);
  local_80 = lVar7;
  local_90 = FUN_14000b3ff(&local_88);
  local_88 = 1;
  if ((lVar7 != 0) && (lVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar7), lVar7 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar7,1);
  }
  local_94 = 0xfffffffe;
  uVar11 = 1;
  if (param_3 != 0) {
    local_98 = '\0';
    uVar9 = 0;
    uVar10 = uVar9;
LAB_1400d9225:
    do {
      if (param_4[uVar9] != '\0') {
        do {
          if (param_4[uVar9] == *param_4) break;
          uVar9 = uVar9 + 1;
        } while (param_4[uVar9] != '\0');
      }
      ppppuVar8 = local_78;
      if (0xf < local_60) {
        ppppuVar8 = (undefined8 ****)local_78[0];
      }
      if (*(char *)((longlong)ppppuVar8 + uVar10) == '\0') {
        uVar9 = uVar9 + uVar11;
        if ((param_4[uVar9] == *param_4) || (param_4[uVar9] == '\0')) {
          local_94 = (undefined4)uVar10;
        }
        else {
          if ((char)param_1[1] == '\0') {
            lVar7 = *param_1;
            if (lVar7 == 0) {
LAB_1400d92cf:
              *param_1 = 0;
            }
            else {
              if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) ||
                 (**(int **)(lVar7 + 0x50) < 1)) {
                uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
              }
              else {
                uVar6 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
              }
              if (uVar6 == 0xffffffff) goto LAB_1400d92cf;
              *(char *)((longlong)param_1 + 9) = (char)uVar6;
            }
            *(undefined1 *)(param_1 + 1) = 1;
          }
          if ((char)param_2[1] == '\0') {
            lVar7 = *param_2;
            if (lVar7 == 0) {
LAB_1400d9317:
              *param_2 = 0;
            }
            else {
              if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) ||
                 (**(int **)(lVar7 + 0x50) < 1)) {
                uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
              }
              else {
                uVar6 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
              }
              if (uVar6 == 0xffffffff) goto LAB_1400d9317;
              *(char *)((longlong)param_2 + 9) = (char)uVar6;
            }
            *(undefined1 *)(param_2 + 1) = 1;
          }
          lVar7 = *param_1;
          if (lVar7 == 0) {
            if (*param_2 != 0) {
LAB_1400d933f:
              cVar3 = param_4[uVar9];
              if (param_5 == '\x01') {
                if ((char)param_1[1] == '\0') {
                  if (lVar7 != 0) {
                    if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) ||
                       (**(int **)(lVar7 + 0x50) < 1)) {
                      uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
                    }
                    else {
                      uVar6 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
                    }
                    if (uVar6 != 0xffffffff) {
                      *(char *)((longlong)param_1 + 9) = (char)uVar6;
                      *(undefined1 *)(param_1 + 1) = 1;
                      bVar12 = cVar3 == (char)uVar6;
                      goto LAB_1400d942e;
                    }
                  }
                  *param_1 = 0;
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                bVar12 = cVar3 == *(char *)((longlong)param_1 + 9);
              }
              else {
                cVar3 = (*(code *)PTR__guard_dispatch_icall_140178c20)(local_90,cVar3);
                if ((char)param_1[1] == '\0') {
                  lVar7 = *param_1;
                  if (lVar7 == 0) {
LAB_1400d9408:
                    *param_1 = 0;
                  }
                  else {
                    if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) ||
                       (**(int **)(lVar7 + 0x50) < 1)) {
                      uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar7);
                    }
                    else {
                      uVar6 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
                    }
                    if (uVar6 == 0xffffffff) goto LAB_1400d9408;
                    *(char *)((longlong)param_1 + 9) = (char)uVar6;
                  }
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                cVar4 = (*(code *)PTR__guard_dispatch_icall_140178c20)
                                  (local_90,*(undefined1 *)((longlong)param_1 + 9));
                bVar12 = cVar3 == cVar4;
              }
LAB_1400d942e:
              if (bVar12) {
                local_98 = '\x01';
                goto LAB_1400d946b;
              }
            }
          }
          else if (*param_2 == 0) goto LAB_1400d933f;
        }
        ppppuVar8 = local_78;
        if (0xf < local_60) {
          ppppuVar8 = (undefined8 ****)local_78[0];
        }
        uVar5 = 0x7f;
        if (uVar11 < 0x7f) {
          uVar5 = (undefined1)uVar11;
        }
        *(undefined1 *)((longlong)ppppuVar8 + uVar10) = uVar5;
      }
      else {
        ppppuVar8 = local_78;
        if (0xf < local_60) {
          ppppuVar8 = (undefined8 ****)local_78[0];
        }
        uVar9 = uVar9 + (longlong)*(char *)((longlong)ppppuVar8 + uVar10);
      }
LAB_1400d946b:
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_3);
    if (local_98 != '\0') {
      if ((char)param_1[1] == '\0') {
        FUN_1400d64e0(param_1);
      }
      if ((char)param_2[1] == '\0') {
        FUN_1400d64e0(param_2);
      }
      lVar7 = *param_1;
      if (lVar7 == 0) {
        if (*param_2 == 0) goto LAB_1400d952a;
        uVar11 = local_88 + 1;
LAB_1400d94b4:
        *param_1 = 0;
        uVar5 = 1;
      }
      else {
        if (*param_2 != 0) goto LAB_1400d952a;
        uVar11 = uVar11 + 1;
        if (**(longlong **)(lVar7 + 0x38) == 0) {
LAB_1400d9510:
          uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          iVar1 = **(int **)(lVar7 + 0x50);
          if (iVar1 < 1) goto LAB_1400d9510;
          **(int **)(lVar7 + 0x50) = iVar1 + -1;
          pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
          **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
          uVar6 = (uint)*pbVar2;
        }
        if (uVar6 == 0xffffffff) goto LAB_1400d94b4;
        uVar5 = 0;
      }
      *(undefined1 *)(param_1 + 1) = uVar5;
      local_94 = 0xffffffff;
      local_98 = '\0';
      uVar9 = 0;
      uVar10 = uVar9;
      local_88 = uVar11;
      goto LAB_1400d9225;
    }
  }
LAB_1400d952a:
  FUN_1400065bc(local_78);
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_58 ^ (ulonglong)auStack_b8);
}

