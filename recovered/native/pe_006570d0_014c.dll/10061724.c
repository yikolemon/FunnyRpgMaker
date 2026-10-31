/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10061724 */

void __thiscall FUN_10061724(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int local_3c;
  int *local_38;
  int local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1ff0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (0x10000000 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_10228490("invalid hash bucket count");
  }
  uVar4 = param_2 - 1 | 1;
  iVar7 = 0x1f;
  if (uVar4 != 0) {
    for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  bVar5 = -((byte)iVar7 ^ 0x1f);
  iVar7 = 1 << (bVar5 & 0x1f);
  piVar1 = *(int **)(param_1 + 4);
  local_20 = (undefined1 *)&local_3c;
  FUN_100229fa(2 << (bVar5 & 0x1f),piVar1);
  *(int *)(param_1 + 0x18) = iVar7 + -1;
  *(int *)(param_1 + 0x1c) = iVar7;
  local_14 = 0;
  piVar8 = (int *)**(int **)(param_1 + 4);
  local_3c = param_1;
  local_38 = piVar1;
  local_34 = param_1;
  if (piVar8 != piVar1) {
    do {
      piVar6 = local_38;
      local_24 = (int *)*piVar8;
      uVar4 = FUN_100616f3(piVar8 + 2);
      uVar4 = uVar4 & *(uint *)(local_3c + 0x18);
      iVar7 = *(int *)(local_3c + 0xc);
      piVar1 = *(int **)(iVar7 + uVar4 * 8);
      if (piVar1 == piVar6) {
        *(int **)(iVar7 + uVar4 * 8) = piVar8;
        *(int **)(iVar7 + 4 + uVar4 * 8) = piVar8;
      }
      else {
        piVar6 = *(int **)(iVar7 + 4 + uVar4 * 8);
        if (piVar8[2] == piVar6[2]) {
          piVar6 = (int *)*piVar6;
          if (piVar6 != piVar8) {
            local_30 = (undefined4 *)piVar8[1];
            *local_30 = local_24;
            local_2c = (undefined4 *)local_24[1];
            *local_2c = piVar6;
            local_28 = (undefined4 *)piVar6[1];
            *local_28 = piVar8;
            piVar6[1] = (int)local_2c;
            local_24[1] = (int)local_30;
            piVar8[1] = (int)local_28;
          }
          *(int **)(iVar7 + 4 + uVar4 * 8) = piVar8;
        }
        else {
          do {
            if (piVar1 == piVar6) {
              local_30 = (undefined4 *)piVar8[1];
              *local_30 = local_24;
              local_2c = (undefined4 *)local_24[1];
              *local_2c = piVar6;
              local_28 = (undefined4 *)piVar6[1];
              *local_28 = piVar8;
              piVar6[1] = (int)local_2c;
              local_24[1] = (int)local_30;
              piVar8[1] = (int)local_28;
              *(int **)(iVar7 + uVar4 * 8) = piVar8;
              goto LAB_10061856;
            }
            piVar6 = (int *)piVar6[1];
          } while (piVar8[2] != piVar6[2]);
          iVar7 = *piVar6;
          puVar2 = (undefined4 *)piVar8[1];
          *puVar2 = local_24;
          piVar1 = (int *)local_24[1];
          *piVar1 = iVar7;
          puVar3 = *(undefined4 **)(iVar7 + 4);
          *puVar3 = piVar8;
          *(int **)(iVar7 + 4) = piVar1;
          local_24[1] = (int)puVar2;
          piVar8[1] = (int)puVar3;
        }
      }
LAB_10061856:
      piVar8 = local_24;
    } while (local_24 != local_38);
  }
  ExceptionList = local_1c;
  return;
}

