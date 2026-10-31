/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d88d8 */

void __thiscall FUN_100d88d8(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  byte bVar7;
  int *piVar8;
  int iVar9;
  int *local_40;
  int local_3c;
  int *local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ddf90;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (0x10000000 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_10228490("invalid hash bucket count");
  }
  uVar5 = param_2 - 1 | 1;
  iVar9 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  bVar7 = -((byte)iVar9 ^ 0x1f);
  iVar9 = 1 << (bVar7 & 0x1f);
  piVar1 = *(int **)(param_1 + 4);
  local_20 = (undefined1 *)&local_40;
  FUN_100229fa(2 << (bVar7 & 0x1f),piVar1);
  *(int *)(param_1 + 0x18) = iVar9 + -1;
  *(int *)(param_1 + 0x1c) = iVar9;
  local_14 = 0;
  piVar6 = (int *)**(int **)(param_1 + 4);
  local_3c = param_1;
  local_38 = piVar1;
  local_34 = param_1;
  if (piVar6 != piVar1) {
    do {
      piVar8 = local_38;
      local_28 = (int *)*piVar6;
      local_40 = piVar6 + 2;
      uVar5 = FUN_100d7b05(local_40);
      uVar5 = uVar5 & *(uint *)(local_3c + 0x18);
      iVar9 = *(int *)(local_3c + 0xc);
      piVar1 = *(int **)(iVar9 + uVar5 * 8);
      if (piVar1 == piVar8) {
        *(int **)(iVar9 + uVar5 * 8) = piVar6;
        *(int **)(iVar9 + 4 + uVar5 * 8) = piVar6;
      }
      else {
        piVar8 = *(int **)(iVar9 + 4 + uVar5 * 8);
        local_30 = uVar5;
        local_2c = iVar9;
        local_24 = piVar6;
        if (piVar8[2] == *local_40 && piVar8[3] == local_40[1]) {
          piVar8 = (int *)*piVar8;
          if (piVar8 != piVar6) {
            puVar2 = (undefined4 *)piVar6[1];
            *puVar2 = local_28;
            puVar3 = (undefined4 *)local_28[1];
            *puVar3 = piVar8;
            puVar4 = (undefined4 *)piVar8[1];
            *puVar4 = piVar6;
            piVar8[1] = (int)puVar3;
            local_28[1] = (int)puVar2;
            piVar6[1] = (int)puVar4;
          }
          *(int **)(iVar9 + 4 + uVar5 * 8) = piVar6;
        }
        else {
          do {
            if (piVar1 == piVar8) {
              puVar2 = (undefined4 *)piVar6[1];
              *puVar2 = local_28;
              puVar3 = (undefined4 *)local_28[1];
              *puVar3 = piVar8;
              puVar4 = (undefined4 *)piVar8[1];
              *puVar4 = piVar6;
              piVar8[1] = (int)puVar3;
              local_28[1] = (int)puVar2;
              piVar6[1] = (int)puVar4;
              *(int **)(iVar9 + uVar5 * 8) = piVar6;
              goto LAB_100d8a56;
            }
            piVar8 = (int *)piVar8[1];
          } while (piVar8[2] != *local_40 || piVar8[3] != local_40[1]);
          iVar9 = *piVar8;
          puVar2 = (undefined4 *)piVar6[1];
          *puVar2 = local_28;
          piVar1 = (int *)local_28[1];
          *piVar1 = iVar9;
          puVar3 = *(undefined4 **)(iVar9 + 4);
          *puVar3 = piVar6;
          *(int **)(iVar9 + 4) = piVar1;
          local_28[1] = (int)puVar2;
          piVar6[1] = (int)puVar3;
        }
      }
LAB_100d8a56:
      piVar6 = local_28;
    } while (local_28 != local_38);
  }
  ExceptionList = local_1c;
  return;
}

