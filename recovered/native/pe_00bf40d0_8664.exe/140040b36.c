/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140040b36 */

void FUN_140040b36(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [32];
  ushort *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStackY_98 [32];
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  plVar1 = *(longlong **)(param_1 + 0xa0);
  lVar2 = plVar1[6];
  lVar10 = *(longlong *)(param_1 + 0x408);
  *(undefined1 *)(lVar10 + 0x30) = 1;
  iVar4 = (**(code **)(param_1 + 0x2a0))(param_1,0x61766172,plVar1,&local_50);
  if (iVar4 != 0) goto LAB_140040dde;
  iVar4 = FUN_140020f72((longlong)plVar1);
  local_4c = FUN_140021063(plVar1,local_50);
  if (local_4c != 0) goto LAB_140040dde;
  uVar5 = FUN_14002120e((longlong)plVar1);
  uVar6 = FUN_14002120e((longlong)plVar1);
  if (((uVar5 == 0x20000) || (uVar5 == 0x10000)) && (uVar6 == **(uint **)(lVar10 + 0x18))) {
    pauVar7 = FUN_14001c423(lVar2,0x40,&local_4c);
    *(undefined1 (**) [32])(lVar10 + 0x38) = pauVar7;
    if (local_4c == 0) {
      puVar8 = (ushort *)FUN_14001f231(lVar2,0x10,0,uVar6,0,&local_4c);
      *(ushort **)*pauVar7 = puVar8;
      if (local_4c == 0) {
        if (0 < (int)uVar6) {
          uVar11 = 0;
          lVar12 = 1;
          lVar10 = -8;
          do {
            uVar3 = FUN_1400211ce((longlong)plVar1);
            *puVar8 = uVar3;
            if (local_50 < (uint)uVar3 * 4) {
LAB_140040d6a:
              if (uVar11 != 0) {
                do {
                  FUN_14001c53d(lVar2,*(longlong *)(*(longlong *)*pauVar7 + lVar10));
                  *(undefined8 *)(*(longlong *)*pauVar7 + lVar10) = 0;
                  lVar12 = lVar12 + -1;
                  lVar10 = lVar10 + -0x10;
                } while (1 < lVar12);
              }
              FUN_14001c53d(lVar2,*(longlong *)*pauVar7);
              *(undefined8 *)*pauVar7 = 0;
              goto LAB_140040dd6;
            }
            lVar9 = FUN_14001f231(lVar2,8,0,(uint)uVar3,0,&local_4c);
            *(longlong *)(puVar8 + 4) = lVar9;
            if (local_4c != 0) goto LAB_140040d6a;
            if (*puVar8 != 0) {
              uVar13 = 0;
              do {
                uVar3 = FUN_1400211ce((longlong)plVar1);
                *(int *)(*(longlong *)(puVar8 + 4) + uVar13 * 8) = (int)(short)uVar3 << 2;
                uVar3 = FUN_1400211ce((longlong)plVar1);
                *(int *)(*(longlong *)(puVar8 + 4) + 4 + uVar13 * 8) = (int)(short)uVar3 << 2;
                uVar13 = uVar13 + 1;
              } while (uVar13 < *puVar8);
            }
            uVar11 = uVar11 + 1;
            puVar8 = puVar8 + 8;
            lVar12 = lVar12 + 1;
            lVar10 = lVar10 + 0x10;
          } while (uVar11 != uVar6);
        }
        if (0x1ffff < (int)uVar5) {
          uVar5 = FUN_14002120e((longlong)plVar1);
          uVar6 = FUN_14002120e((longlong)plVar1);
          if (uVar6 == 0) {
            if (uVar5 != 0) goto LAB_140040db3;
          }
          else {
            local_4c = FUN_14003ec6f(param_1,uVar6 + iVar4,(uint *)(*pauVar7 + 8));
            if (local_4c == 0 && uVar5 != 0) {
LAB_140040db3:
              uVar13 = FUN_14003ea18(param_1,uVar5 + iVar4,(uint *)(pauVar7[1] + 8),
                                     (uint *)(*pauVar7 + 8),local_50);
              local_4c = (int)uVar13;
            }
          }
        }
      }
    }
  }
LAB_140040dd6:
  FUN_140021187(plVar1);
LAB_140040dde:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_98);
  }
  return;
}

