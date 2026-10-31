/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ac63f */

longlong * FUN_1400ac63f(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  short sVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  short *psVar10;
  undefined1 local_60 [8];
  char local_58;
  longlong *local_50;
  uint local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar6 = *param_2;
  lVar1 = param_2[1];
  if (lVar1 == 0) {
    uVar4 = 2;
  }
  else {
    uVar4 = lVar1 + 2;
    lVar8 = 0;
    do {
      sVar3 = *(short *)(lVar6 + lVar8);
      uVar4 = uVar4 + (sVar3 == *(short *)((longlong)param_2 + 0x12) || sVar3 == (short)param_2[2]);
      lVar8 = lVar8 + 2;
    } while (lVar1 * 2 != lVar8);
  }
  uVar2 = *(ulonglong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x28);
  lVar8 = uVar2 - uVar4;
  lVar9 = 0;
  if (uVar4 <= uVar2 && lVar8 != 0) {
    lVar9 = lVar8;
  }
  if ((longlong)uVar2 < 1) {
    lVar9 = 0;
  }
  local_50 = param_1;
  FUN_14000cd6c(local_60);
  uVar7 = 4;
  if (local_58 != '\x01') goto code_r0x0001400ac8a0;
  lVar5 = (longlong)*(int *)(*local_50 + 4);
  if (((*(uint *)((longlong)local_50 + lVar5 + 0x18) & 0x1c0) != 0x40) && (lVar9 != 0)) {
    do {
      local_44 = 0;
      sVar3 = FUN_140058e2a(*(undefined8 *)
                             ((longlong)local_50 + (longlong)*(int *)(*local_50 + 4) + 0x48),
                            *(undefined2 *)
                             ((longlong)local_50 + (longlong)*(int *)(*local_50 + 4) + 0x58));
      if (sVar3 == -1) {
        uVar7 = 4;
        goto LAB_1400ac78b;
      }
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    lVar5 = (longlong)*(int *)(*local_50 + 4);
    lVar9 = 0;
  }
  lVar8 = lVar9;
  local_44 = 0;
  sVar3 = FUN_140058e2a(*(undefined8 *)((longlong)local_50 + lVar5 + 0x48),(short)param_2[2]);
  uVar7 = (uint)(sVar3 == -1) << 2;
LAB_1400ac78b:
  for (psVar10 = (short *)*param_2; psVar10 != (short *)(lVar6 + lVar1 * 2); psVar10 = psVar10 + 1)
  {
    sVar3 = *psVar10;
    if (sVar3 == (short)param_2[2]) {
      if (uVar7 == 0) {
        sVar3 = *(short *)((longlong)param_2 + 0x12);
code_r0x0001400ac7bd:
        local_44 = 0;
        sVar3 = FUN_140058e2a(*(undefined8 *)
                               ((longlong)local_50 + (longlong)*(int *)(*local_50 + 4) + 0x48),sVar3
                             );
        if (sVar3 != -1) {
          sVar3 = *psVar10;
          goto code_r0x0001400ac7ea;
        }
        goto LAB_1400ac885;
      }
    }
    else {
      if ((uVar7 == 0) && (sVar3 == *(short *)((longlong)param_2 + 0x12)))
      goto code_r0x0001400ac7bd;
      if (uVar7 != 0) goto LAB_1400ac813;
code_r0x0001400ac7ea:
      local_44 = 0;
      sVar3 = FUN_140058e2a(*(undefined8 *)
                             ((longlong)local_50 + (longlong)*(int *)(*local_50 + 4) + 0x48),sVar3);
      if (sVar3 == -1) goto LAB_1400ac885;
    }
LAB_1400ac813:
  }
  if (uVar7 == 0) {
    local_44 = 0;
    sVar3 = FUN_140058e2a(*(undefined8 *)
                           ((longlong)local_50 + (longlong)*(int *)(*local_50 + 4) + 0x48),
                          (short)param_2[2]);
    uVar7 = (uint)(sVar3 == -1) << 2;
    if (sVar3 != -1) {
      for (; lVar8 != 0; lVar8 = lVar8 + -1) {
        local_44 = uVar7;
        sVar3 = FUN_140058e2a(*(undefined8 *)
                               ((longlong)local_50 + (longlong)*(int *)(*local_50 + 4) + 0x48),
                              *(undefined2 *)
                               ((longlong)local_50 + (longlong)*(int *)(*local_50 + 4) + 0x58));
        if (sVar3 == -1) goto LAB_1400ac885;
      }
    }
  }
code_r0x0001400ac88b:
  *(undefined8 *)((longlong)local_50 + (longlong)*(int *)(*local_50 + 4) + 0x28) = 0;
code_r0x0001400ac8a0:
  lVar6 = (longlong)*(int *)(*local_50 + 4);
  FUN_14000a9f0((longlong)local_50 + lVar6,
                (uint)(*(longlong *)((longlong)local_50 + lVar6 + 0x48) == 0) << 2 |
                uVar7 | *(uint *)((longlong)local_50 + lVar6 + 0x10),0);
  FUN_14000ce2e(local_60);
  return local_50;
LAB_1400ac885:
  uVar7 = 4;
  goto code_r0x0001400ac88b;
}

