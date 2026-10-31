/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022f304 */

void FUN_18022f304(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong **pplVar9;
  uint uVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  uint uVar19;
  longlong **pplVar20;
  longlong *plVar21;
  undefined1 auStack_98 [44];
  int local_6c;
  undefined8 ***local_68;
  ulonglong local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  local_68 = *(undefined8 ****)(param_1 + 0x60);
  local_50 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  iVar14 = **(int **)(param_1 + 0x28);
  uVar2 = (*(int **)(param_1 + 0x28))[*(int *)(param_1 + 0x54)];
  (**(code **)(param_1 + 0xc0))(param_1,iVar14,uVar2 - 1);
  local_60 = (ulonglong)uVar2;
  if (iVar14 < (int)uVar2) {
    do {
      if ((undefined8 ****)local_68 != (undefined8 ****)0x0) {
        ppppuVar11 = (undefined8 ****)local_68;
        ppppuVar12 = &local_68;
        do {
          ppppuVar13 = ppppuVar11;
          if (*(int *)(ppppuVar11 + 3) == iVar14) {
            *ppppuVar12 = *ppppuVar11;
            pplVar9 = &local_58;
            if ((*(ushort *)((longlong)ppppuVar11 + 0x1c) & 8) != 0) {
              pplVar9 = &local_50;
            }
            FUN_18023027c(pplVar9);
            ppppuVar13 = ppppuVar12;
          }
          ppppuVar11 = (undefined8 ****)*ppppuVar13;
          ppppuVar12 = ppppuVar13;
        } while (ppppuVar11 != (undefined8 ****)0x0);
      }
      lVar5 = *(longlong *)(param_1 + 0x28);
      *(longlong *)(param_1 + 0x28) = lVar5 + 4;
      local_6c = *(int *)(lVar5 + 4);
      do {
        if (local_58 != (longlong *)0x0 && local_50 != (longlong *)0x0) {
          iVar18 = 0;
          plVar17 = local_58;
          plVar21 = local_50;
          do {
            uVar2 = *(uint *)(plVar21 + 4);
            uVar3 = *(uint *)(plVar17 + 4);
            uVar6 = uVar3;
            if ((int)uVar2 < (int)uVar3) {
              uVar6 = uVar2;
            }
            uVar7 = uVar3;
            if ((int)uVar3 < (int)uVar2) {
              uVar7 = uVar2;
            }
            uVar4 = *(uint *)(param_1 + 4);
            uVar10 = -uVar4;
            uVar19 = (uVar4 + uVar6) - 1 & uVar10;
            uVar15 = uVar7 & uVar10;
            if ((int)uVar15 < (int)uVar19) {
              uVar1 = *(ushort *)((longlong)plVar21 + 0x1c);
              if (((uVar1 & 2) == 0) &&
                 (((uVar1 & 1) == 0 ||
                  ((((*(int *)((longlong)plVar21 + 0x14) != 1 || ((longlong *)plVar21[1] != plVar17)
                     ) || (((uVar1 & 0x10) != 0 && (*(int *)(param_1 + 8) <= (int)(uVar7 - uVar6))))
                    ) && ((((int)plVar21[2] != 0 || ((longlong *)plVar17[1] != plVar21)) ||
                          (((uVar1 & 0x20) != 0 && (*(int *)(param_1 + 8) <= (int)(uVar7 - uVar6))))
                          ))))))) {
                if ((uVar1 & 4) != 0) {
                  iVar8 = uVar4 * 0x3f;
                  iVar16 = iVar8 + 0x3f;
                  if (-1 < iVar8) {
                    iVar16 = iVar8;
                  }
                  uVar15 = (int)((iVar16 >> 6) + uVar3 + uVar2) >> 1 & uVar10;
                  if ((int)uVar15 < (int)uVar6) {
                    uVar10 = uVar4;
                  }
                  uVar19 = uVar10 + uVar15;
                }
                *(uint *)(plVar21 + 4) = uVar15;
                *(uint *)(plVar17 + 4) = uVar19;
                *(byte *)((longlong)plVar21 + 0x1c) = *(byte *)((longlong)plVar21 + 0x1c) | 0x40;
                iVar18 = iVar18 + 1;
              }
            }
            else {
              (**(code **)(param_1 + 200))(param_1,iVar14,uVar6,uVar7);
            }
            plVar21 = (longlong *)*plVar21;
          } while ((plVar21 != (longlong *)0x0) &&
                  (plVar17 = (longlong *)*plVar17, plVar17 != (longlong *)0x0));
          pplVar9 = &local_50;
          if (iVar18 != 0) {
            pplVar20 = &local_58;
            do {
              pplVar20 = (longlong **)*pplVar20;
              pplVar9 = (longlong **)*pplVar9;
              if ((*(byte *)((longlong)pplVar9 + 0x1c) & 0x40) != 0) {
                (**(code **)(param_1 + 0xd0))
                          (param_1,iVar14,*(undefined4 *)(pplVar9 + 4),*(undefined4 *)(pplVar20 + 4)
                          );
                *(byte *)((longlong)pplVar9 + 0x1c) = *(byte *)((longlong)pplVar9 + 0x1c) & 0xbf;
                iVar18 = iVar18 + -1;
              }
            } while (iVar18 != 0);
          }
        }
        (**(code **)(param_1 + 0xd8))(param_1);
        FUN_180230296(&local_50,1);
        FUN_180230296(&local_58,0xffffffff);
        iVar14 = iVar14 + 1;
      } while (iVar14 < local_6c);
    } while (iVar14 < (int)local_60);
  }
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
  }
  return;
}

