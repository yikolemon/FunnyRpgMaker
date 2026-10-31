/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140099dd1 */

void FUN_140099dd1(int *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar3 = DAT_140f2a910;
  if ((*(byte *)(DAT_140f2a910 + 0x2acd) & 4) != 0) {
    FUN_1400772a6("[docking] DockNodeRemoveWindow node 0x%08X window \'%s\'\n",*param_1,
                  *(undefined8 *)(param_2 + 8));
  }
  *(undefined8 *)(param_2 + 0x4c0) = 0;
  *(byte *)(param_2 + 0x495) = *(byte *)(param_2 + 0x495) & 0xf6;
  *(undefined4 *)(param_2 + 0x4d0) = param_3;
  uVar7 = *(uint *)(param_2 + 0x14) & 0xfeffffff;
  *(uint *)(param_2 + 0x14) = uVar7;
  lVar1 = *(longlong *)(param_2 + 0x408);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x1f8);
    lVar5 = (longlong)*(int *)(lVar1 + 0x1f0);
    plVar6 = plVar2;
    if (0 < lVar5) {
      do {
        if (*plVar6 == param_2) break;
        plVar6 = plVar6 + 1;
      } while (plVar6 < plVar2 + lVar5);
    }
    if (plVar6 < plVar2 + lVar5) {
      FUN_1401c5180(plVar6,plVar6 + 1,
                    (((ulonglong)~((longlong)plVar6 - (longlong)plVar2) >> 3) + lVar5) * 8);
      *(int *)(lVar1 + 0x1f0) = *(int *)(lVar1 + 0x1f0) + -1;
      uVar7 = *(uint *)(param_2 + 0x14);
    }
  }
  FUN_14008b3aa(param_2,uVar7,0);
  if ((*(longlong *)(param_1 + 0x24) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x24) + 0x108) == '\x01')) {
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined4 *)(param_2 + 0x50) = 0;
    *(undefined1 *)(param_2 + 0x108) = 0;
    *(undefined1 *)(param_2 + 0x111) = 1;
  }
  iVar4 = param_1[0xc];
  if (0 < (longlong)iVar4) {
    lVar1 = *(longlong *)(param_1 + 0xe);
    lVar5 = (longlong)iVar4 * 8;
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar8) == param_2) {
        FUN_1401c5180(lVar1 + lVar8,lVar1 + lVar8 + 8,(lVar5 - lVar8) + -8);
        iVar4 = param_1[0xc] + -1;
        param_1[0xc] = iVar4;
        break;
      }
      lVar8 = lVar8 + 8;
    } while (lVar5 != lVar8);
  }
  if (*(longlong *)(param_1 + 0x26) == param_2) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  *(byte *)((longlong)param_1 + 0xd5) = *(byte *)((longlong)param_1 + 0xd5) | 2;
  if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_140099f5d:
    if (iVar4 == 0) {
      if (((*(byte *)((longlong)param_1 + 0x11) & 0xc) == 0) &&
         (*(int *)(param_2 + 0x4d0) != *param_1)) {
        FUN_14009af77(lVar3,param_1,1);
        return;
      }
      goto LAB_140099f9d;
    }
  }
  else {
    FUN_1400cc8c5(*(longlong *)(param_1 + 0x10),*(undefined4 *)(param_2 + 200));
    iVar4 = param_1[0xc];
    if (iVar4 < (int)(((*(byte *)((longlong)param_1 + 0x11) & 8) == 0) + 1)) {
      FUN_1400a9139(param_1);
      iVar4 = param_1[0xc];
      goto LAB_140099f5d;
    }
  }
  if (((iVar4 == 1) && ((*(byte *)((longlong)param_1 + 0x11) & 8) == 0)) &&
     (*(longlong *)(param_1 + 0x24) != 0)) {
    *(undefined1 *)(**(longlong **)(param_1 + 0xe) + 0x10c) =
         *(undefined1 *)(*(longlong *)(param_1 + 0x24) + 0x10c);
  }
LAB_140099f9d:
  FUN_1400a8b24(param_1);
  return;
}

