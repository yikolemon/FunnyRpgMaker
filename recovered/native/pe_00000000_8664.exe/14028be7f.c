/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028be7f */

longlong * FUN_14028be7f(longlong *param_1,char *param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  size_t sVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 local_58 [8];
  char local_50;
  uint local_44;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  sVar4 = strlen(param_2);
  lVar5 = *(longlong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x28);
  lVar9 = lVar5 - sVar4;
  lVar7 = 0;
  if (lVar9 != 0 && (longlong)sVar4 <= lVar5) {
    lVar7 = lVar9;
  }
  if (lVar5 < 1) {
    lVar7 = 0;
  }
  local_40 = param_1;
  FUN_14028c56e(local_58,param_1);
  uVar8 = 4;
  if (local_50 != '\x01') goto code_r0x00014028bfcf;
  lVar5 = (longlong)*(int *)(*local_40 + 4);
  if (((*(uint *)((longlong)local_40 + lVar5 + 0x18) & 0x1c0) != 0x40) && (0 < lVar7)) {
    do {
      local_44 = 0;
      iVar3 = FUN_14028c630(*(undefined8 *)
                             ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x48),
                            *(undefined1 *)
                             ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x58));
      if (iVar3 == -1) goto LAB_14028bfb3;
      lVar5 = lVar9 + -1;
      bVar2 = 0 < lVar9;
      lVar9 = lVar5;
    } while (lVar5 != 0 && bVar2);
    lVar5 = (longlong)*(int *)(*local_40 + 4);
    lVar7 = 0;
  }
  plVar1 = *(longlong **)((longlong)local_40 + lVar5 + 0x48);
  local_44 = 0;
  sVar6 = (**(code **)(*plVar1 + 0x48))(plVar1,param_2,sVar4);
  uVar8 = (uint)(sVar6 != sVar4) << 2;
  if ((sVar6 == sVar4) && (0 < lVar7)) {
    do {
      local_44 = uVar8;
      iVar3 = FUN_14028c630(*(undefined8 *)
                             ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x48),
                            *(undefined1 *)
                             ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x58));
      if (iVar3 == -1) goto LAB_14028bfb3;
      lVar5 = lVar7 + -1;
      bVar2 = 0 < lVar7;
      lVar7 = lVar5;
    } while (lVar5 != 0 && bVar2);
  }
code_r0x00014028bfba:
  *(undefined8 *)((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x28) = 0;
code_r0x00014028bfcf:
  lVar5 = (longlong)*(int *)(*local_40 + 4);
  FUN_1402856fa((longlong)local_40 + lVar5,
                (uint)(*(longlong *)((longlong)local_40 + lVar5 + 0x48) == 0) << 2 |
                uVar8 | *(uint *)((longlong)local_40 + lVar5 + 0x10),0);
  FUN_14028c66e(local_58);
  return local_40;
LAB_14028bfb3:
  uVar8 = 4;
  goto code_r0x00014028bfba;
}

