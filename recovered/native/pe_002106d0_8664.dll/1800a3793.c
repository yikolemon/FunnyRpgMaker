/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a3793 */

longlong * FUN_1800a3793(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_58 [8];
  char local_50;
  uint local_44;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar4 = FUN_18028ca30();
  lVar5 = *(longlong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x28);
  lVar8 = lVar5 - lVar4;
  lVar6 = 0;
  if (lVar8 != 0 && lVar4 <= lVar5) {
    lVar6 = lVar8;
  }
  if (lVar5 < 1) {
    lVar6 = 0;
  }
  local_40 = param_1;
  FUN_18007b09e(local_58,param_1);
  uVar7 = 4;
  if (local_50 != '\x01') goto code_r0x0001800a38e7;
  lVar5 = (longlong)*(int *)(*local_40 + 4);
  if (((*(uint *)((longlong)local_40 + lVar5 + 0x18) & 0x1c0) != 0x40) && (0 < lVar6)) {
    do {
      local_44 = 0;
      sVar3 = FUN_1800a4a96(*(undefined8 *)
                             ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x48),
                            *(undefined2 *)
                             ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x58));
      if (sVar3 == -1) goto LAB_1800a38cb;
      lVar5 = lVar8 + -1;
      bVar2 = 0 < lVar8;
      lVar8 = lVar5;
    } while (lVar5 != 0 && bVar2);
    lVar5 = (longlong)*(int *)(*local_40 + 4);
    lVar6 = 0;
  }
  plVar1 = *(longlong **)((longlong)local_40 + lVar5 + 0x48);
  local_44 = 0;
  lVar5 = (**(code **)(*plVar1 + 0x48))(plVar1,param_2,lVar4);
  uVar7 = (uint)(lVar5 != lVar4) << 2;
  if ((lVar5 == lVar4) && (0 < lVar6)) {
    do {
      local_44 = uVar7;
      sVar3 = FUN_1800a4a96(*(undefined8 *)
                             ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x48),
                            *(undefined2 *)
                             ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x58));
      if (sVar3 == -1) goto LAB_1800a38cb;
      lVar5 = lVar6 + -1;
      bVar2 = 0 < lVar6;
      lVar6 = lVar5;
    } while (lVar5 != 0 && bVar2);
  }
code_r0x0001800a38d2:
  *(undefined8 *)((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x28) = 0;
code_r0x0001800a38e7:
  lVar5 = (longlong)*(int *)(*local_40 + 4);
  FUN_18007422a((longlong)local_40 + lVar5,
                (uint)(*(longlong *)((longlong)local_40 + lVar5 + 0x48) == 0) << 2 |
                uVar7 | *(uint *)((longlong)local_40 + lVar5 + 0x10),0);
  FUN_18007b19e(local_58);
  return local_40;
LAB_1800a38cb:
  uVar7 = 4;
  goto code_r0x0001800a38d2;
}

