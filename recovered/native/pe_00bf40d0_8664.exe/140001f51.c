/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140001f51 */

longlong * FUN_140001f51(longlong *param_1,undefined1 (*param_2) [32])

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong local_58;
  char local_50;
  uint local_44;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  uVar3 = FUN_14009cf30(param_2);
  lVar4 = *(longlong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x28);
  lVar8 = lVar4 - uVar3;
  lVar6 = 0;
  if (lVar8 != 0 && (longlong)uVar3 <= lVar4) {
    lVar6 = lVar8;
  }
  if (lVar4 < 1) {
    lVar6 = 0;
  }
  local_40 = param_1;
  FUN_140004d42(&local_58,param_1);
  uVar7 = 4;
  if (local_50 != '\x01') goto code_r0x0001400020a5;
  lVar4 = (longlong)*(int *)(*local_40 + 4);
  if (((*(uint *)((longlong)local_40 + lVar4 + 0x18) & 0x1c0) != 0x40) && (0 < lVar6)) {
    do {
      local_44 = 0;
      uVar5 = FUN_140004f14(*(longlong **)
                             ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x48),
                            (uint)*(ushort *)
                                   ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x58));
      if ((short)uVar5 == -1) goto LAB_140002089;
      lVar4 = lVar8 + -1;
      bVar2 = 0 < lVar8;
      lVar8 = lVar4;
    } while (lVar4 != 0 && bVar2);
    lVar4 = (longlong)*(int *)(*local_40 + 4);
    lVar6 = 0;
  }
  plVar1 = *(longlong **)((longlong)local_40 + lVar4 + 0x48);
  local_44 = 0;
  uVar5 = (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
  uVar7 = (uint)(uVar5 != uVar3) << 2;
  if ((uVar5 == uVar3) && (0 < lVar6)) {
    do {
      local_44 = uVar7;
      uVar3 = FUN_140004f14(*(longlong **)
                             ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x48),
                            (uint)*(ushort *)
                                   ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x58));
      if ((short)uVar3 == -1) goto LAB_140002089;
      lVar4 = lVar6 + -1;
      bVar2 = 0 < lVar6;
      lVar6 = lVar4;
    } while (lVar4 != 0 && bVar2);
  }
code_r0x000140002090:
  *(undefined8 *)((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x28) = 0;
code_r0x0001400020a5:
  lVar4 = (longlong)*(int *)(*local_40 + 4);
  FUN_140005d34((longlong)local_40 + lVar4,
                (uint)(*(longlong *)((longlong)local_40 + lVar4 + 0x48) == 0) << 2 |
                uVar7 | *(uint *)((longlong)local_40 + lVar4 + 0x10),'\0');
  FUN_140004f4e(&local_58);
  return local_40;
LAB_140002089:
  uVar7 = 4;
  goto code_r0x000140002090;
}

