/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400063aa */

longlong * FUN_1400063aa(longlong *param_1,longlong *param_2)

{
  short sVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ushort *puVar12;
  longlong local_60;
  char local_58;
  longlong *local_50;
  uint local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar7 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = lVar3 + 2;
    lVar10 = 0;
    do {
      sVar1 = *(short *)(lVar7 + lVar10);
      uVar5 = uVar5 + (sVar1 == *(short *)((longlong)param_2 + 0x12) || sVar1 == (short)param_2[2]);
      lVar10 = lVar10 + 2;
    } while (lVar3 * 2 != lVar10);
  }
  uVar4 = *(ulonglong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x28);
  lVar10 = uVar4 - uVar5;
  lVar11 = 0;
  if (uVar5 <= uVar4 && lVar10 != 0) {
    lVar11 = lVar10;
  }
  if ((longlong)uVar4 < 1) {
    lVar11 = 0;
  }
  local_50 = param_1;
  FUN_140004d42(&local_60,param_1);
  uVar9 = 4;
  if (local_58 != '\x01') goto code_r0x00014000660b;
  lVar6 = (longlong)*(int *)(*local_50 + 4);
  if (((*(uint *)((longlong)local_50 + lVar6 + 0x18) & 0x1c0) != 0x40) && (lVar11 != 0)) {
    do {
      local_44 = 0;
      uVar5 = FUN_140004f14(*(longlong **)
                             ((longlong)local_50 + (longlong)*(int *)(*local_50 + 4) + 0x48),
                            (uint)*(ushort *)
                                   ((longlong)local_50 + (longlong)*(int *)(*local_50 + 4) + 0x58));
      if ((short)uVar5 == -1) {
        uVar9 = 4;
        goto LAB_1400064f6;
      }
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    lVar6 = (longlong)*(int *)(*local_50 + 4);
    lVar11 = 0;
  }
  lVar10 = lVar11;
  local_44 = 0;
  uVar5 = FUN_140004f14(*(longlong **)((longlong)local_50 + lVar6 + 0x48),
                        (uint)*(ushort *)(param_2 + 2));
  uVar9 = (uint)((short)uVar5 == -1) << 2;
LAB_1400064f6:
  for (puVar12 = (ushort *)*param_2; puVar12 != (ushort *)(lVar7 + lVar3 * 2); puVar12 = puVar12 + 1
      ) {
    uVar2 = *puVar12;
    uVar8 = (uint)uVar2;
    if (uVar2 == *(ushort *)(param_2 + 2)) {
      if (uVar9 == 0) {
        uVar8 = (uint)*(ushort *)((longlong)param_2 + 0x12);
code_r0x000140006528:
        local_44 = 0;
        uVar5 = FUN_140004f14(*(longlong **)
                               ((longlong)local_50 + (longlong)*(int *)(*local_50 + 4) + 0x48),uVar8
                             );
        if ((short)uVar5 != -1) {
          uVar8 = (uint)*puVar12;
          goto code_r0x000140006555;
        }
        goto LAB_1400065f0;
      }
    }
    else {
      if ((uVar9 == 0) && (uVar2 == *(ushort *)((longlong)param_2 + 0x12)))
      goto code_r0x000140006528;
      if (uVar9 != 0) goto LAB_14000657e;
code_r0x000140006555:
      local_44 = 0;
      uVar5 = FUN_140004f14(*(longlong **)
                             ((longlong)local_50 + (longlong)*(int *)(*local_50 + 4) + 0x48),uVar8);
      if ((short)uVar5 == -1) goto LAB_1400065f0;
    }
LAB_14000657e:
  }
  if (uVar9 == 0) {
    local_44 = 0;
    uVar5 = FUN_140004f14(*(longlong **)
                           ((longlong)local_50 + (longlong)*(int *)(*local_50 + 4) + 0x48),
                          (uint)*(ushort *)(param_2 + 2));
    uVar9 = (uint)((short)uVar5 == -1) << 2;
    if ((short)uVar5 != -1) {
      for (; lVar10 != 0; lVar10 = lVar10 + -1) {
        local_44 = uVar9;
        uVar5 = FUN_140004f14(*(longlong **)
                               ((longlong)local_50 + (longlong)*(int *)(*local_50 + 4) + 0x48),
                              (uint)*(ushort *)
                                     ((longlong)local_50 + (longlong)*(int *)(*local_50 + 4) + 0x58)
                             );
        if ((short)uVar5 == -1) goto LAB_1400065f0;
      }
    }
  }
code_r0x0001400065f6:
  *(undefined8 *)((longlong)local_50 + (longlong)*(int *)(*local_50 + 4) + 0x28) = 0;
code_r0x00014000660b:
  lVar7 = (longlong)*(int *)(*local_50 + 4);
  FUN_140005d34((longlong)local_50 + lVar7,
                (uint)(*(longlong *)((longlong)local_50 + lVar7 + 0x48) == 0) << 2 |
                uVar9 | *(uint *)((longlong)local_50 + lVar7 + 0x10),'\0');
  FUN_140004f4e(&local_60);
  return local_50;
LAB_1400065f0:
  uVar9 = 4;
  goto code_r0x0001400065f6;
}

