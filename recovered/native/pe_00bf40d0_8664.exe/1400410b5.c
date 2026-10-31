/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400410b5 */

void FUN_1400410b5(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 (*pauVar11) [32];
  longlong lVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  int *piVar15;
  uint *puVar16;
  undefined1 auStackY_88 [32];
  undefined1 local_50 [4];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  plVar3 = *(longlong **)(param_1 + 0xa0);
  lVar12 = plVar3[6];
  lVar4 = *(longlong *)(param_1 + 0x408);
  local_4c = (**(code **)(param_1 + 0x2a0))(param_1,0x4d564152,plVar3,local_50);
  if (local_4c == 0) {
    iVar8 = FUN_140020f72((longlong)plVar3);
    uVar6 = FUN_140020aa5(plVar3,&local_4c);
    if (local_4c == 0) {
      uVar10 = FUN_140020a93((longlong)plVar3,2);
      local_4c = (int)uVar10;
      if ((local_4c == 0) && (uVar6 == 1)) {
        pauVar11 = FUN_14001c423(lVar12,0x30,&local_4c);
        *(undefined1 (**) [32])(lVar4 + 0x60) = pauVar11;
        if (local_4c == 0) {
          uVar10 = FUN_140020a93((longlong)plVar3,4);
          local_4c = (int)uVar10;
          if (local_4c == 0) {
            uVar6 = FUN_140020aa5(plVar3,&local_4c);
            **(ushort **)(lVar4 + 0x60) = uVar6;
            if (local_4c == 0) {
              uVar6 = FUN_140020aa5(plVar3,&local_4c);
              if (local_4c == 0) {
                uVar9 = FUN_140020f72((longlong)plVar3);
                local_4c = FUN_14003ec6f(param_1,iVar8 + (uint)uVar6,
                                         (uint *)(*(longlong *)(lVar4 + 0x60) + 8));
                if (local_4c == 0) {
                  lVar12 = FUN_14001c617(lVar12,0xc,0,(uint)**(ushort **)(lVar4 + 0x60),0,&local_4c)
                  ;
                  *(longlong *)(*(longlong *)(lVar4 + 0x60) + 0x28) = lVar12;
                  if (local_4c == 0) {
                    uVar10 = FUN_140020a41((longlong)plVar3,uVar9);
                    local_4c = (int)uVar10;
                    if ((local_4c == 0) &&
                       (local_4c = FUN_140021063(plVar3,(uint)**(ushort **)(lVar4 + 0x60) << 3),
                       local_4c == 0)) {
                      puVar5 = *(ushort **)(lVar4 + 0x60);
                      puVar16 = *(uint **)(puVar5 + 0x14);
                      if ((puVar16 != (uint *)0x0) && ((ulonglong)*puVar5 != 0)) {
                        puVar1 = puVar16 + (ulonglong)*puVar5 * 3;
                        do {
                          uVar9 = FUN_14002120e((longlong)plVar3);
                          *puVar16 = uVar9;
                          uVar6 = FUN_1400211ce((longlong)plVar3);
                          *(ushort *)(puVar16 + 1) = uVar6;
                          uVar7 = FUN_1400211ce((longlong)plVar3);
                          *(ushort *)((longlong)puVar16 + 6) = uVar7;
                          uVar6 = (ushort)puVar16[1];
                          if (((uVar6 & uVar7) != 0xffff) &&
                             ((*(uint *)(puVar5 + 4) < (uint)uVar6 ||
                               *(uint *)(puVar5 + 4) == (uint)uVar6 ||
                              (*(uint *)(*(longlong *)(puVar5 + 8) + (ulonglong)uVar6 * 0x20) <=
                               (uint)uVar7)))) {
                            local_4c = 8;
                            break;
                          }
                          puVar16 = puVar16 + 3;
                        } while (puVar16 < puVar1);
                      }
                      FUN_140021187(plVar3);
                      if (local_4c == 0) {
                        piVar15 = *(int **)(*(ushort **)(lVar4 + 0x60) + 0x14);
                        if ((piVar15 != (int *)0x0) &&
                           (uVar13 = (ulonglong)**(ushort **)(lVar4 + 0x60), uVar13 != 0)) {
                          piVar2 = piVar15 + uVar13 * 3;
                          do {
                            puVar14 = (undefined2 *)FUN_14004135c(param_1,*piVar15);
                            if (puVar14 != (undefined2 *)0x0) {
                              *(undefined2 *)(piVar15 + 2) = *puVar14;
                            }
                            piVar15 = piVar15 + 3;
                          } while (piVar15 < piVar2);
                        }
                        *(byte *)(param_1 + 0x411) = *(byte *)(param_1 + 0x411) | 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
  }
  return;
}

