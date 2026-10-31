/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005eac5 */

void FUN_14005eac5(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = param_1[0x10];
    FUN_14001c53d(lVar1,*param_1);
    *param_1 = 0;
    if (param_1[0xe] != 0) {
      FUN_14001cb65(param_1[0xe],lVar1);
      FUN_14001c53d(lVar1,param_1[0xe]);
      param_1[0xe] = 0;
    }
    FUN_14001c53d(lVar1,param_1[0xc]);
    param_1[0xc] = 0;
    uVar4 = *(uint *)(param_1 + 10);
    if (uVar4 != 0) {
      lVar2 = 0x10;
      uVar5 = 0;
      do {
        if (*(int *)(param_1[0xb] + -8 + lVar2) == 1) {
          FUN_14001c53d(lVar1,*(longlong *)(param_1[0xb] + lVar2));
          *(undefined8 *)(param_1[0xb] + lVar2) = 0;
          uVar4 = *(uint *)(param_1 + 10);
        }
        uVar5 = uVar5 + 1;
        lVar2 = lVar2 + 0x18;
      } while (uVar5 < uVar4);
    }
    FUN_14001c53d(lVar1,param_1[0xb]);
    param_1[0xb] = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      plVar3 = (longlong *)param_1[7];
      uVar4 = 0;
      do {
        FUN_14001c53d(lVar1,*plVar3);
        *plVar3 = 0;
        FUN_14001c53d(lVar1,plVar3[4]);
        plVar3[4] = 0;
        uVar4 = uVar4 + 1;
        plVar3 = plVar3 + 6;
      } while (uVar4 < *(uint *)((longlong)param_1 + 0x34));
    }
    if (*(int *)((longlong)param_1 + 0x44) != 0) {
      plVar3 = (longlong *)param_1[9];
      uVar4 = 0;
      do {
        FUN_14001c53d(lVar1,*plVar3);
        *plVar3 = 0;
        FUN_14001c53d(lVar1,plVar3[4]);
        plVar3[4] = 0;
        uVar4 = uVar4 + 1;
        plVar3 = plVar3 + 6;
      } while (uVar4 < *(uint *)((longlong)param_1 + 0x44));
    }
    FUN_14001c53d(lVar1,param_1[7]);
    uVar4 = 0;
    param_1[7] = 0;
    FUN_14001c53d(lVar1,param_1[9]);
    param_1[9] = 0;
    FUN_14001cb65((longlong)(param_1 + 0x13),lVar1);
    plVar3 = (longlong *)param_1[0x11];
    if ((int)param_1[0x12] != 0) {
      do {
        FUN_14001c53d(lVar1,*plVar3);
        *plVar3 = 0;
        uVar4 = uVar4 + 1;
        plVar3 = plVar3 + 3;
      } while (uVar4 < *(uint *)(param_1 + 0x12));
      plVar3 = (longlong *)param_1[0x11];
    }
    FUN_14001c53d(lVar1,(longlong)plVar3);
    param_1[0x11] = 0;
  }
  return;
}

