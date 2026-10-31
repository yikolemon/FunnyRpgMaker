/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c8dce */

void __thiscall FUN_100c8dce(undefined4 *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)*param_1;
  if ((uint)(param_1[2] - (int)puVar7 >> 3) < param_3) {
    FUN_100c8edc(param_3);
    puVar5 = (undefined4 *)*param_1;
    uVar3 = 0;
    do {
      *puVar5 = 0;
      puVar5[1] = 0;
      iVar4 = *(int *)(param_2 + 4 + uVar3 * 8);
      if (iVar4 != 0) {
        LOCK();
        piVar1 = (int *)(iVar4 + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *puVar5 = *(undefined4 *)(param_2 + uVar3 * 8);
      puVar5[1] = *(undefined4 *)(param_2 + 4 + uVar3 * 8);
      puVar5 = puVar5 + 2;
      uVar3 = uVar3 + 1;
    } while (param_3 != uVar3);
  }
  else {
    puVar6 = (undefined4 *)param_1[1];
    uVar3 = (int)puVar6 - (int)puVar7 >> 3;
    if (uVar3 < param_3) {
      puVar5 = puVar6;
      if (puVar7 != puVar6) {
        do {
          FUN_10022702(param_2);
          puVar7 = puVar7 + 2;
          param_2 = param_2 + 8;
          puVar5 = (undefined4 *)param_1[1];
        } while (puVar7 != puVar5);
      }
      if (param_3 != uVar3) {
        iVar4 = 0;
        do {
          *puVar5 = 0;
          puVar5[1] = 0;
          iVar2 = *(int *)(param_2 + 4 + iVar4 * 8);
          if (iVar2 != 0) {
            LOCK();
            piVar1 = (int *)(iVar2 + 4);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          *puVar5 = *(undefined4 *)(param_2 + iVar4 * 8);
          puVar5[1] = *(undefined4 *)(param_2 + 4 + iVar4 * 8);
          puVar5 = puVar5 + 2;
          iVar4 = iVar4 + 1;
        } while (param_3 - uVar3 != iVar4);
      }
    }
    else {
      puVar5 = puVar7 + param_3 * 2;
      puVar7 = puVar5;
      if (param_3 != 0) {
        do {
          FUN_10022702(param_2);
          param_2 = param_2 + 8;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        puVar6 = (undefined4 *)param_1[1];
      }
      for (; puVar7 != puVar6; puVar7 = puVar7 + 2) {
        FUN_100431d4();
      }
    }
  }
  param_1[1] = puVar5;
  return;
}

