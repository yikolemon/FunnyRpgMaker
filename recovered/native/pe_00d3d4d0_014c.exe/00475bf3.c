/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00475bf3 */

void __fastcall FUN_00475bf3(int param_1)

{
  ushort uVar1;
  int ***pppiVar2;
  int iVar3;
  uint uVar4;
  int **ppiVar5;
  uint uVar6;
  int ****ppppiVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int ****ppppiVar14;
  int ****ppppiVar15;
  uint uVar16;
  int **ppiVar17;
  int *piStack_4c;
  int iStack_48;
  int **ppiStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  int ***local_34;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int *local_1c;
  int *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&piStack_4c;
  local_34 = *(int ****)(param_1 + 0x48);
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  pppiVar2 = (int ***)**(int **)(param_1 + 0x1c);
  iVar13 = (*(int **)(param_1 + 0x1c))[*(int *)(param_1 + 0x40)];
  (**(code **)(param_1 + 0x7c))(param_1,pppiVar2,iVar13 + -1);
  iStack_30 = iVar13;
  iVar3 = param_1;
  ppiStack_44 = (int **)pppiVar2;
  if ((int)pppiVar2 < iVar13) {
    do {
      iStack_48 = iVar3;
      if ((int ****)local_34 != (int ****)0x0) {
        ppppiVar7 = (int ****)local_34;
        ppppiVar14 = &local_34;
        do {
          ppppiVar15 = ppppiVar7;
          if (ppppiVar7[4] == (int ***)ppiStack_44) {
            *ppppiVar14 = *ppppiVar7;
            ppiVar5 = &local_1c;
            if (((uint)ppppiVar7[5] & 8) != 0) {
              ppiVar5 = &local_18;
            }
            FUN_00476be8(ppiVar5,(int *)ppppiVar7);
            ppppiVar15 = ppppiVar14;
          }
          ppppiVar7 = (int ****)*ppppiVar15;
          ppppiVar14 = ppppiVar15;
        } while (ppppiVar7 != (int ****)0x0);
      }
      iVar13 = *(int *)(iStack_48 + 0x1c);
      *(int *)(iStack_48 + 0x1c) = iVar13 + 4;
      iStack_2c = *(int *)(iVar13 + 4);
      do {
        if (local_1c != (int *)0x0 && local_18 != (int *)0x0) {
          iStack_38 = 0;
          piVar8 = local_1c;
          piVar12 = local_18;
          iVar13 = iStack_48;
          do {
            uStack_28 = piVar12[6];
            uStack_24 = piVar8[6];
            uStack_40 = uStack_24;
            if ((int)uStack_28 < (int)uStack_24) {
              uStack_40 = uStack_28;
            }
            uVar4 = uStack_24;
            if ((int)uStack_24 < (int)uStack_28) {
              uVar4 = uStack_28;
            }
            uStack_20 = *(uint *)(iVar13 + 4);
            uVar6 = -uStack_20;
            uVar16 = (uStack_20 + uStack_40) - 1 & uVar6;
            uVar9 = uVar4 & uVar6;
            piStack_4c = piVar8;
            if ((int)uVar9 < (int)uVar16) {
              uVar1 = *(ushort *)(piVar12 + 5);
              uVar11 = (uint)uVar1;
              if (((uVar1 & 2) == 0) &&
                 ((uStack_3c = uVar11, (uVar1 & 1) == 0 ||
                  ((((piVar12[3] != 1 || ((int *)piVar12[1] != piVar8)) ||
                    (((uVar1 & 0x10) != 0 &&
                     (iVar13 = iStack_48, *(int *)(iStack_48 + 8) <= (int)(uVar4 - uStack_40))))) &&
                   (((piVar12[2] != 0 || ((int *)piVar8[1] != piVar12)) ||
                    (((uVar1 & 0x20) != 0 && (*(int *)(iVar13 + 8) <= (int)(uVar4 - uStack_40)))))))
                  )))) {
                if ((uVar1 & 4) != 0) {
                  iVar3 = uStack_20 * 0x3f;
                  iVar10 = iVar3 + 0x3f;
                  if (-1 < iVar3) {
                    iVar10 = iVar3;
                  }
                  uVar9 = (int)((iVar10 >> 6) + uStack_24 + uStack_28) >> 1 & uVar6;
                  if ((int)uVar9 < (int)uStack_40) {
                    uVar6 = uStack_20;
                  }
                  uVar16 = uVar6 + uVar9;
                }
                piVar12[6] = uVar9;
                piVar8[6] = uVar16;
                *(byte *)(piVar12 + 5) = *(byte *)(piVar12 + 5) | 0x40;
                iStack_38 = iStack_38 + 1;
              }
            }
            else {
              (**(code **)(iVar13 + 0x80))(iVar13,ppiStack_44,uStack_40,uVar4);
            }
            piVar12 = (int *)*piVar12;
          } while ((piVar12 != (int *)0x0) && (piVar8 = (int *)*piStack_4c, piVar8 != (int *)0x0));
          if (iStack_38 != 0) {
            ppiVar5 = &local_18;
            ppiVar17 = &local_1c;
            iVar13 = iStack_38;
            do {
              ppiVar17 = (int **)*ppiVar17;
              ppiVar5 = (int **)*ppiVar5;
              if (((uint)ppiVar5[5] & 0x40) != 0) {
                (**(code **)(iStack_48 + 0x84))(iStack_48,ppiStack_44,ppiVar5[6],ppiVar17[6]);
                *(byte *)(ppiVar5 + 5) = *(byte *)(ppiVar5 + 5) & 0xbf;
                iVar13 = iVar13 + -1;
              }
            } while (iVar13 != 0);
          }
        }
        (**(code **)(iStack_48 + 0x88))(iStack_48);
        FUN_00476bff((int *)&local_18,1);
        FUN_00476bff((int *)&local_1c,-1);
        ppiStack_44 = (int **)((int)ppiStack_44 + 1);
      } while ((int)ppiStack_44 < iStack_2c);
      iVar3 = iStack_48;
    } while ((int)ppiStack_44 < iStack_30);
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&piStack_4c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&piStack_4c);
  }
  return;
}

