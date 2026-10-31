/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f60c3 */

undefined8 FUN_1801f60c3(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  
  lVar2 = *param_1;
  lVar3 = param_1[0x22];
  puVar7 = &DAT_180337358;
  plVar8 = param_1 + 0x11;
  for (lVar6 = 0x13; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined4 *)plVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    plVar8 = (longlong *)((longlong)plVar8 + 4);
  }
  FUN_1802a89a0(param_1[0x1c],0,(ulonglong)*(ushort *)(param_1 + 0x1b) << 3);
  FUN_1802a89a0(param_1[0x1d],0,(ulonglong)*(ushort *)(param_1 + 0x1b) << 3);
  FUN_1801f621b(lVar3,lVar2,param_1);
  FUN_1802a89a0(*(undefined8 *)(lVar3 + 0x2a0),0,(ulonglong)*(ushort *)(lVar3 + 0x298) << 2);
  if (*(int *)(lVar3 + 0x1f8) != 0) {
    uVar4 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(lVar2 + 0x3d8) + uVar4 * 4);
      iVar9 = iVar1 + 0x3f;
      if (-1 < iVar1) {
        iVar9 = iVar1;
      }
      lVar6 = (longlong)(iVar9 >> 6) * (longlong)(int)param_1[0xe];
      *(int *)(*(longlong *)(lVar3 + 0x200) + uVar4 * 4) =
           (int)((ulonglong)((lVar6 >> 0x3f) + lVar6 + 0x8000) >> 0x10);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(lVar3 + 0x1f8));
  }
  FUN_1801f6490(lVar3,3);
  if (*(int *)(lVar2 + 0x3c0) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  }
  else {
    FUN_1801f64ae(lVar3,2,*(undefined8 *)(lVar2 + 0x3c8));
    *(undefined4 *)(lVar3 + 0xe8) = 0;
    uVar5 = FUN_1801f64e9(lVar3,param_1);
    *(int *)((longlong)param_1 + 0x11c) = (int)uVar5;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  FUN_1801f66c4(lVar3,param_1);
  return 0;
}

