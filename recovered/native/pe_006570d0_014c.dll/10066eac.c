/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10066eac */

void __thiscall FUN_10066eac(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2230;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (0x10000000 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_10228490("invalid hash bucket count");
  }
  uVar2 = param_2 - 1 | 1;
  iVar6 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  bVar5 = -((byte)iVar6 ^ 0x1f);
  iVar6 = 1 << (bVar5 & 0x1f);
  puVar4 = *(undefined4 **)(param_1 + 4);
  local_20 = (undefined1 *)&local_40;
  FUN_100229fa(2 << (bVar5 & 0x1f),puVar4);
  *(int *)(param_1 + 0x18) = iVar6 + -1;
  *(int *)(param_1 + 0x1c) = iVar6;
  local_14 = 0;
  puVar3 = (undefined4 *)**(int **)(param_1 + 4);
  local_40 = param_1;
  local_3c = param_1;
  local_38 = puVar4;
  if ((undefined4 *)**(int **)(param_1 + 4) != puVar4) {
    do {
      local_24 = puVar3 + 2;
      puVar4 = local_24;
      if (0xf < (uint)puVar3[7]) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      local_28 = (undefined4 *)*puVar3;
      uVar2 = FUN_1001c721(puVar4,puVar3[6]);
      uVar2 = uVar2 & *(uint *)(local_40 + 0x18);
      iVar6 = *(int *)(local_40 + 0xc);
      if (*(undefined4 **)(iVar6 + uVar2 * 8) == local_38) {
        *(undefined4 **)(iVar6 + uVar2 * 8) = puVar3;
        *(undefined4 **)(iVar6 + 4 + uVar2 * 8) = puVar3;
      }
      else {
        piVar7 = *(int **)(iVar6 + 4 + uVar2 * 8);
        local_34 = puVar3;
        cVar1 = FUN_1001bb3a(piVar7 + 2);
        if (cVar1 == '\0') {
          do {
            if (*(int **)(iVar6 + uVar2 * 8) == piVar7) {
              puVar4 = (undefined4 *)local_34[1];
              *puVar4 = local_28;
              local_30 = (undefined4 *)local_28[1];
              *local_30 = piVar7;
              local_2c = (undefined4 *)piVar7[1];
              *local_2c = local_34;
              piVar7[1] = (int)local_30;
              local_28[1] = puVar4;
              local_34[1] = local_2c;
              *(undefined4 **)(iVar6 + uVar2 * 8) = local_34;
              goto LAB_10067012;
            }
            piVar7 = (int *)piVar7[1];
            cVar1 = FUN_1001bb3a(piVar7 + 2);
          } while (cVar1 == '\0');
          iVar6 = *piVar7;
          puVar4 = (undefined4 *)local_34[1];
          *puVar4 = local_28;
          piVar7 = (int *)local_28[1];
          *piVar7 = iVar6;
          puVar3 = *(undefined4 **)(iVar6 + 4);
          *puVar3 = local_34;
          *(int **)(iVar6 + 4) = piVar7;
          local_28[1] = puVar4;
          local_34[1] = puVar3;
        }
        else {
          puVar4 = (undefined4 *)*piVar7;
          if (puVar4 != local_34) {
            puVar3 = (undefined4 *)local_34[1];
            *puVar3 = local_28;
            local_30 = (undefined4 *)local_28[1];
            *local_30 = puVar4;
            local_2c = (undefined4 *)puVar4[1];
            *local_2c = local_34;
            puVar4[1] = local_30;
            local_28[1] = puVar3;
            local_34[1] = local_2c;
          }
          *(undefined4 **)(iVar6 + 4 + uVar2 * 8) = local_34;
        }
      }
LAB_10067012:
      puVar3 = local_28;
    } while (local_28 != local_38);
  }
  ExceptionList = local_1c;
  return;
}

