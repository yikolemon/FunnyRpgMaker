/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c9be4 */

void __thiscall FUN_101c9be4(int param_1,uint param_2)

{
  double dVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int *piVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int *local_50;
  int *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  int *local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_50;
  local_18 = 0xffffffff;
  local_1c = &LAB_101ca0e0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  if (0x10000000 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_10228490("invalid hash bucket count");
  }
  uVar5 = param_2 - 1 | 1;
  iVar4 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  bVar6 = -((byte)iVar4 ^ 0x1f);
  local_50 = (int *)(1 << (bVar6 & 0x1f));
  piVar2 = *(int **)(param_1 + 4);
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_50;
  FUN_100229fa(2 << (bVar6 & 0x1f),piVar2);
  *(int *)(param_1 + 0x18) = (int)local_50 + -1;
  *(int **)(param_1 + 0x1c) = local_50;
  local_18 = 0;
  piVar7 = (int *)**(int **)(param_1 + 4);
  local_3c = piVar2;
  local_38 = param_1;
  local_34 = param_1;
  if (piVar7 != piVar2) {
    do {
      local_50 = (int *)*piVar7;
      local_30 = ~-(ulonglong)(*(double *)(piVar7 + 2) == 0.0) & (ulonglong)*(double *)(piVar7 + 2);
      uVar5 = FUN_100d7b05(&local_30);
      uVar5 = uVar5 & *(uint *)(local_34 + 0x18);
      iVar4 = *(int *)(local_34 + 0xc);
      piVar2 = *(int **)(iVar4 + uVar5 * 8);
      if (piVar2 == local_3c) {
        *(int **)(iVar4 + uVar5 * 8) = piVar7;
        *(int **)(iVar4 + 4 + uVar5 * 8) = piVar7;
      }
      else {
        piVar8 = *(int **)(iVar4 + 4 + uVar5 * 8);
        dVar1 = *(double *)(piVar7 + 2);
        if ((dVar1 != *(double *)(piVar8 + 2)) || (NAN(dVar1) || NAN(*(double *)(piVar8 + 2)))) {
          do {
            if (piVar2 == piVar8) {
              local_48 = (undefined4 *)piVar7[1];
              *local_48 = local_50;
              local_40 = (undefined4 *)local_50[1];
              *local_40 = piVar8;
              local_44 = (undefined4 *)piVar8[1];
              *local_44 = piVar7;
              piVar8[1] = (int)local_40;
              local_50[1] = (int)local_48;
              piVar7[1] = (int)local_44;
              *(int **)(iVar4 + uVar5 * 8) = piVar7;
              local_4c = piVar7;
              goto LAB_101c9da1;
            }
            piVar8 = (int *)piVar8[1];
          } while ((dVar1 != *(double *)(piVar8 + 2)) ||
                  (NAN(dVar1) || NAN(*(double *)(piVar8 + 2))));
          iVar4 = *piVar8;
          local_4c = (int *)piVar7[1];
          *local_4c = (int)local_50;
          piVar2 = (int *)local_50[1];
          *piVar2 = iVar4;
          puVar3 = *(undefined4 **)(iVar4 + 4);
          *puVar3 = piVar7;
          *(int **)(iVar4 + 4) = piVar2;
          local_50[1] = (int)local_4c;
          piVar7[1] = (int)puVar3;
        }
        else {
          piVar8 = (int *)*piVar8;
          if (piVar8 != piVar7) {
            local_44 = (undefined4 *)piVar7[1];
            *local_44 = local_50;
            local_40 = (undefined4 *)local_50[1];
            *local_40 = piVar8;
            local_48 = (undefined4 *)piVar8[1];
            *local_48 = piVar7;
            piVar8[1] = (int)local_40;
            local_50[1] = (int)local_44;
            piVar7[1] = (int)local_48;
            local_4c = piVar7;
          }
          *(int **)(iVar4 + 4 + uVar5 * 8) = piVar7;
        }
      }
LAB_101c9da1:
      piVar7 = local_50;
    } while (local_50 != local_3c);
  }
  *unaff_FS_OFFSET = local_20;
  return;
}

