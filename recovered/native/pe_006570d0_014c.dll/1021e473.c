/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021e473 */

void __fastcall FUN_1021e473(int param_1)

{
  ushort uVar1;
  undefined4 ****ppppuVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *****pppppuVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  undefined4 *****pppppuVar13;
  undefined4 *****pppppuVar14;
  int **ppiVar15;
  uint uVar16;
  int **ppiVar17;
  int *piStack_4c;
  int iStack_48;
  undefined4 ***pppuStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  undefined4 ****local_34;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int *local_1c;
  int *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&piStack_4c;
  local_34 = *(undefined4 *****)(param_1 + 0x48);
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  ppppuVar2 = (undefined4 ****)**(int **)(param_1 + 0x1c);
  iVar12 = (*(int **)(param_1 + 0x1c))[*(int *)(param_1 + 0x40)];
  (**(code **)(param_1 + 0x7c))(param_1,ppppuVar2,iVar12 + -1);
  iStack_30 = iVar12;
  iVar3 = param_1;
  pppuStack_44 = ppppuVar2;
  if ((int)ppppuVar2 < iVar12) {
    do {
      iStack_48 = iVar3;
      if ((undefined4 *****)local_34 != (undefined4 *****)0x0) {
        pppppuVar6 = (undefined4 *****)local_34;
        pppppuVar13 = &local_34;
        do {
          pppppuVar14 = pppppuVar6;
          if (pppppuVar6[4] == (undefined4 ****)pppuStack_44) {
            *pppppuVar13 = *pppppuVar6;
            FUN_1021f468();
            pppppuVar14 = pppppuVar13;
          }
          pppppuVar6 = (undefined4 *****)*pppppuVar14;
          pppppuVar13 = pppppuVar14;
        } while (pppppuVar6 != (undefined4 *****)0x0);
      }
      iVar12 = *(int *)(iStack_48 + 0x1c);
      *(int *)(iStack_48 + 0x1c) = iVar12 + 4;
      iStack_2c = *(int *)(iVar12 + 4);
      do {
        if (local_1c != (int *)0x0 && local_18 != (int *)0x0) {
          iStack_38 = 0;
          piVar7 = local_1c;
          piVar11 = local_18;
          iVar12 = iStack_48;
          do {
            uStack_28 = piVar11[6];
            uStack_24 = piVar7[6];
            uStack_40 = uStack_24;
            if ((int)uStack_28 < (int)uStack_24) {
              uStack_40 = uStack_28;
            }
            uVar4 = uStack_24;
            if ((int)uStack_24 < (int)uStack_28) {
              uVar4 = uStack_28;
            }
            uStack_20 = *(uint *)(iVar12 + 4);
            uVar5 = -uStack_20;
            uVar16 = (uStack_20 + uStack_40) - 1 & uVar5;
            uVar8 = uVar4 & uVar5;
            piStack_4c = piVar7;
            if ((int)uVar8 < (int)uVar16) {
              uVar1 = *(ushort *)(piVar11 + 5);
              uVar10 = (uint)uVar1;
              if (((uVar1 & 2) == 0) &&
                 ((uStack_3c = uVar10, (uVar1 & 1) == 0 ||
                  ((((piVar11[3] != 1 || ((int *)piVar11[1] != piVar7)) ||
                    (((uVar1 & 0x10) != 0 &&
                     (iVar12 = iStack_48, *(int *)(iStack_48 + 8) <= (int)(uVar4 - uStack_40))))) &&
                   (((piVar11[2] != 0 || ((int *)piVar7[1] != piVar11)) ||
                    (((uVar1 & 0x20) != 0 && (*(int *)(iVar12 + 8) <= (int)(uVar4 - uStack_40)))))))
                  )))) {
                if ((uVar1 & 4) != 0) {
                  iVar3 = uStack_20 * 0x3f;
                  iVar9 = iVar3 + 0x3f;
                  if (-1 < iVar3) {
                    iVar9 = iVar3;
                  }
                  uVar8 = (int)((iVar9 >> 6) + uStack_24 + uStack_28) >> 1 & uVar5;
                  if ((int)uVar8 < (int)uStack_40) {
                    uVar5 = uStack_20;
                  }
                  uVar16 = uVar5 + uVar8;
                }
                piVar11[6] = uVar8;
                piVar7[6] = uVar16;
                *(byte *)(piVar11 + 5) = *(byte *)(piVar11 + 5) | 0x40;
                iStack_38 = iStack_38 + 1;
              }
            }
            else {
              (**(code **)(iVar12 + 0x80))(iVar12,pppuStack_44,uStack_40,uVar4);
            }
            piVar11 = (int *)*piVar11;
          } while ((piVar11 != (int *)0x0) && (piVar7 = (int *)*piStack_4c, piVar7 != (int *)0x0));
          if (iStack_38 != 0) {
            ppiVar15 = &local_18;
            ppiVar17 = &local_1c;
            iVar12 = iStack_38;
            do {
              ppiVar17 = (int **)*ppiVar17;
              ppiVar15 = (int **)*ppiVar15;
              if (((uint)ppiVar15[5] & 0x40) != 0) {
                (**(code **)(iStack_48 + 0x84))(iStack_48,pppuStack_44,ppiVar15[6],ppiVar17[6]);
                *(byte *)(ppiVar15 + 5) = *(byte *)(ppiVar15 + 5) & 0xbf;
                iVar12 = iVar12 + -1;
              }
            } while (iVar12 != 0);
          }
        }
        (**(code **)(iStack_48 + 0x88))(iStack_48);
        FUN_1021f47f();
        FUN_1021f47f();
        pppuStack_44 = (undefined4 ***)((int)pppuStack_44 + 1);
      } while ((int)pppuStack_44 < iStack_2c);
      iVar3 = iStack_48;
    } while ((int)pppuStack_44 < iStack_30);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&piStack_4c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

