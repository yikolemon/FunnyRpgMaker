/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400436f7 */

undefined8 FUN_1400436f7(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  
  lVar2 = *param_1;
  plVar3 = (longlong *)param_1[0x22];
  puVar7 = &DAT_1400f4478;
  plVar8 = param_1 + 0x11;
  for (lVar6 = 0x13; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined4 *)plVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    plVar8 = (longlong *)((longlong)plVar8 + 4);
  }
  FUN_1400b3c00((undefined1 (*) [32])param_1[0x1c],0,(ulonglong)*(ushort *)(param_1 + 0x1b) << 3);
  FUN_1400b3c00((undefined1 (*) [32])param_1[0x1d],0,(ulonglong)*(ushort *)(param_1 + 0x1b) << 3);
  FUN_14004384f(plVar3,lVar2,(longlong)param_1);
  FUN_1400b3c00((undefined1 (*) [32])plVar3[0x54],0,(ulonglong)*(ushort *)(plVar3 + 0x53) << 2);
  if ((int)plVar3[0x3f] != 0) {
    uVar4 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(lVar2 + 0x3d8) + uVar4 * 4);
      iVar9 = iVar1 + 0x3f;
      if (-1 < iVar1) {
        iVar9 = iVar1;
      }
      lVar6 = (longlong)(iVar9 >> 6) * (longlong)(int)param_1[0xe];
      *(int *)(plVar3[0x40] + uVar4 * 4) =
           (int)((ulonglong)((lVar6 >> 0x3f) + lVar6 + 0x8000) >> 0x10);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(plVar3 + 0x3f));
  }
  FUN_140043ac4((longlong)plVar3,3);
  if (*(int *)(lVar2 + 0x3c0) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  }
  else {
    FUN_140043ae2((longlong)plVar3,2,*(undefined8 *)(lVar2 + 0x3c8),*(int *)(lVar2 + 0x3c0));
    *(undefined4 *)(plVar3 + 0x1d) = 0;
    uVar5 = FUN_140043b1d(plVar3,(longlong)param_1);
    *(int *)((longlong)param_1 + 0x11c) = (int)uVar5;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  FUN_140043cf8((longlong)plVar3,(longlong)param_1);
  return 0;
}

