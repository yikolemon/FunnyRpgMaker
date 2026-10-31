/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18025cdb0 */

void FUN_18025cdb0(longlong *param_1,longlong *param_2,ulonglong param_3,char *param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  short sVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 ****ppppuVar10;
  undefined1 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_b8 [32];
  char local_98;
  undefined4 local_94;
  undefined8 local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 ***local_78 [3];
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_180402640 ^ (ulonglong)auStack_b8;
  lVar8 = 0;
  cVar4 = *param_4;
  while (cVar4 != '\0') {
    uVar13 = param_3 + 1;
    if (param_4[lVar8] != *param_4) {
      uVar13 = param_3;
    }
    lVar8 = lVar8 + 1;
    param_3 = uVar13;
    cVar4 = param_4[lVar8];
  }
  FUN_18023f000(local_78,param_3,0);
  lVar8 = FUN_18023d070(1);
  local_80 = lVar8;
  uVar9 = FUN_18001c0ec(&local_88);
  local_88 = 1;
  local_90 = uVar9;
  if ((lVar8 != 0) && (lVar8 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar8), lVar8 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar8,1);
  }
  local_94 = 0xfffffffe;
  uVar13 = 1;
  if (param_3 != 0) {
LAB_18025ce91:
    local_98 = '\0';
    lVar8 = 0;
    uVar12 = 0;
    do {
      if (param_4[lVar8] != '\0') {
        do {
          if (param_4[lVar8] == *param_4) break;
          lVar8 = lVar8 + 1;
        } while (param_4[lVar8] != '\0');
      }
      ppppuVar10 = local_78;
      if (0xf < local_60) {
        ppppuVar10 = (undefined8 ****)local_78[0];
      }
      if (*(char *)((longlong)ppppuVar10 + uVar12) == '\0') {
        lVar8 = lVar8 + uVar13;
        if ((param_4[lVar8] == *param_4) || (param_4[lVar8] == '\0')) {
          local_94 = (undefined4)uVar12;
        }
        else {
          if ((char)param_1[1] == '\0') {
            lVar2 = *param_1;
            if (lVar2 == 0) {
LAB_18025cf55:
              *param_1 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar2 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar2 + 0x50) < 1)) {
                sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
              }
              else {
                sVar7 = *(short *)**(undefined8 **)(lVar2 + 0x38);
              }
              if (sVar7 == -1) goto LAB_18025cf55;
              *(short *)((longlong)param_1 + 10) = sVar7;
            }
            *(undefined1 *)(param_1 + 1) = 1;
          }
          if ((char)param_2[1] == '\0') {
            lVar2 = *param_2;
            if (lVar2 == 0) {
LAB_18025cfa7:
              *param_2 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar2 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar2 + 0x50) < 1)) {
                sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
              }
              else {
                sVar7 = *(short *)**(undefined8 **)(lVar2 + 0x38);
              }
              if (sVar7 == -1) goto LAB_18025cfa7;
              *(short *)((longlong)param_2 + 10) = sVar7;
            }
            *(undefined1 *)(param_2 + 1) = 1;
          }
          lVar2 = *param_1;
          if (lVar2 == 0) {
            if (*param_2 != 0) {
LAB_18025cfd3:
              cVar4 = param_4[lVar8];
              if (param_5 == '\x01') {
                if ((char)param_1[1] == '\0') {
                  if (lVar2 != 0) {
                    if (((ushort *)**(undefined8 **)(lVar2 + 0x38) == (ushort *)0x0) ||
                       (**(int **)(lVar2 + 0x50) < 1)) {
                      uVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
                    }
                    else {
                      uVar6 = *(ushort *)**(undefined8 **)(lVar2 + 0x38);
                    }
                    if (uVar6 != 0xffff) {
                      *(ushort *)((longlong)param_1 + 10) = uVar6;
                      *(undefined1 *)(param_1 + 1) = 1;
                      bVar14 = (int)cVar4 == (uint)uVar6;
                      goto LAB_18025d0cd;
                    }
                  }
                  *param_1 = 0;
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                bVar14 = (int)cVar4 == (uint)*(ushort *)((longlong)param_1 + 10);
              }
              else {
                cVar4 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar9);
                if ((char)param_1[1] == '\0') {
                  lVar2 = *param_1;
                  if (lVar2 == 0) {
LAB_18025d0a7:
                    *param_1 = 0;
                  }
                  else {
                    if (((short *)**(undefined8 **)(lVar2 + 0x38) == (short *)0x0) ||
                       (**(int **)(lVar2 + 0x50) < 1)) {
                      sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar2);
                    }
                    else {
                      sVar7 = *(short *)**(undefined8 **)(lVar2 + 0x38);
                    }
                    if (sVar7 == -1) goto LAB_18025d0a7;
                    *(short *)((longlong)param_1 + 10) = sVar7;
                  }
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                cVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                                  (local_90,*(undefined1 *)((longlong)param_1 + 10));
                bVar14 = cVar4 == cVar5;
              }
LAB_18025d0cd:
              if (bVar14) {
                local_98 = '\x01';
                goto LAB_18025d10a;
              }
            }
          }
          else if (*param_2 == 0) goto LAB_18025cfd3;
        }
        ppppuVar10 = local_78;
        if (0xf < local_60) {
          ppppuVar10 = (undefined8 ****)local_78[0];
        }
        uVar11 = 0x7f;
        if (uVar13 < 0x7f) {
          uVar11 = (undefined1)uVar13;
        }
        *(undefined1 *)((longlong)ppppuVar10 + uVar12) = uVar11;
      }
      else {
        ppppuVar10 = local_78;
        if (0xf < local_60) {
          ppppuVar10 = (undefined8 ****)local_78[0];
        }
        lVar8 = lVar8 + *(char *)((longlong)ppppuVar10 + uVar12);
      }
LAB_18025d10a:
      uVar9 = local_90;
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_3);
    if (local_98 != '\0') {
      if ((char)param_1[1] == '\0') {
        FUN_18024d310(param_1);
      }
      if ((char)param_2[1] == '\0') {
        FUN_18024d310(param_2);
      }
      lVar8 = *param_1;
      if (lVar8 == 0) {
        if (*param_2 == 0) goto LAB_18025d1df;
        uVar13 = local_88 + 1;
LAB_18025d15c:
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 1;
        local_94 = 0xffffffff;
        local_88 = uVar13;
      }
      else {
        if (*param_2 != 0) goto LAB_18025d1df;
        uVar13 = uVar13 + 1;
        if (**(longlong **)(lVar8 + 0x38) == 0) {
LAB_18025d1ad:
          sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          iVar1 = **(int **)(lVar8 + 0x50);
          if (iVar1 < 1) goto LAB_18025d1ad;
          **(int **)(lVar8 + 0x50) = iVar1 + -1;
          psVar3 = (short *)**(longlong **)(lVar8 + 0x38);
          **(longlong **)(lVar8 + 0x38) = (longlong)(psVar3 + 1);
          sVar7 = *psVar3;
        }
        if (sVar7 == -1) goto LAB_18025d15c;
        *(undefined1 *)(param_1 + 1) = 0;
        local_94 = 0xffffffff;
        local_88 = uVar13;
      }
      goto LAB_18025ce91;
    }
  }
LAB_18025d1df:
  FUN_180001ef2(local_78);
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_58 ^ (ulonglong)auStack_b8);
}

