/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021e513 */

int FUN_18021e513(uint *param_1,uint *param_2,int *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_78;
  uVar4 = *param_2;
  uVar5 = (ulonglong)uVar4;
  local_58 = 0;
  local_50 = &local_44;
  uVar1 = FUN_1801cc8d6(param_4,8,0,uVar4 * 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  if (local_44 == 0) {
    local_58 = 0;
    local_50 = &local_44;
    uVar1 = FUN_1801cc8d6(param_4,0x28,0,uVar4);
    *(undefined8 *)(param_1 + 2) = uVar1;
    if (local_44 == 0) {
      local_58 = 0;
      local_50 = &local_44;
      uVar1 = FUN_1801cc8d6(param_4,0x10,0,uVar4 * 2 | 1);
      *(undefined8 *)(param_1 + 10) = uVar1;
      if (local_44 == 0) {
        *param_1 = uVar4;
        lVar6 = *(longlong *)(param_1 + 4) + uVar5 * 8;
        if (*(longlong *)(param_1 + 4) == 0) {
          lVar6 = 0;
        }
        *(longlong *)(param_1 + 6) = lVar6;
        param_1[1] = 0;
        param_1[8] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        if (uVar4 != 0) {
          puVar2 = *(undefined4 **)(param_2 + 2);
          puVar3 = *(undefined4 **)(param_1 + 2);
          do {
            *puVar3 = *puVar2;
            puVar3[1] = puVar2[1];
            puVar3[4] = puVar2[2];
            puVar3 = puVar3 + 10;
            puVar2 = puVar2 + 3;
            uVar4 = (int)uVar5 - 1;
            uVar5 = (ulonglong)uVar4;
          } while (uVar4 != 0);
        }
        if (param_3 != (int *)0x0) {
          lVar6 = *(longlong *)(param_3 + 2);
          iVar7 = *param_3;
          *(int **)(param_1 + 0xe) = param_3;
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            FUN_18021e6a7(param_1,lVar6);
            lVar6 = lVar6 + 0x18;
          }
        }
        uVar4 = *param_1;
        if (uVar4 != 0 && param_1[1] != uVar4) {
          uVar8 = 0;
          do {
            FUN_18021e6fe(param_1,uVar8);
            uVar8 = uVar8 + 1;
          } while (uVar4 != uVar8);
        }
      }
    }
  }
  if (DAT_180402640 != (local_40 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_40 ^ (ulonglong)auStack_78);
  }
  return local_44;
}

