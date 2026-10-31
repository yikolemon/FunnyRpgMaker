/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006bb53 */

int FUN_14006bb53(uint *param_1,uint *param_2,int *param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStackY_78 [32];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  uVar4 = *param_2;
  uVar5 = (ulonglong)uVar4;
  lVar1 = FUN_14001f231(param_4,8,0,uVar4 * 2,0,&local_44);
  *(longlong *)(param_1 + 4) = lVar1;
  if (local_44 == 0) {
    lVar1 = FUN_14001f231(param_4,0x28,0,uVar4,0,&local_44);
    *(longlong *)(param_1 + 2) = lVar1;
    if (local_44 == 0) {
      lVar1 = FUN_14001f231(param_4,0x10,0,uVar4 * 2 | 1,0,&local_44);
      *(longlong *)(param_1 + 10) = lVar1;
      if (local_44 == 0) {
        *param_1 = uVar4;
        lVar1 = *(longlong *)(param_1 + 4) + uVar5 * 8;
        if (*(longlong *)(param_1 + 4) == 0) {
          lVar1 = 0;
        }
        *(longlong *)(param_1 + 6) = lVar1;
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
          puVar6 = *(uint **)(param_3 + 2);
          iVar7 = *param_3;
          *(int **)(param_1 + 0xe) = param_3;
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            FUN_14006bce7(param_1,puVar6);
            puVar6 = puVar6 + 6;
          }
        }
        uVar4 = *param_1;
        if (uVar4 != 0 && param_1[1] != uVar4) {
          uVar8 = 0;
          do {
            FUN_14006bd3e(param_1,uVar8);
            uVar8 = uVar8 + 1;
          } while (uVar4 != uVar8);
        }
      }
    }
  }
  if (DAT_14012ea80 != (local_40 ^ (ulonglong)auStackY_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_40 ^ (ulonglong)auStackY_78);
  }
  return local_44;
}

