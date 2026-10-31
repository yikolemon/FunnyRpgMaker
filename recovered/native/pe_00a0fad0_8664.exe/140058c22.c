/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140058c22 */

longlong * FUN_140058c22(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  short sVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 local_50 [8];
  char local_48;
  longlong *local_40;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar4 = *(ulonglong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x28);
  lVar8 = uVar4 - param_3;
  lVar5 = 0;
  if (param_3 <= uVar4 && lVar8 != 0) {
    lVar5 = lVar8;
  }
  if ((longlong)uVar4 < 1) {
    lVar5 = 0;
  }
  local_40 = param_1;
  FUN_14000cd6c(local_50);
  uVar7 = 4;
  if (local_48 == '\x01') {
    lVar3 = (longlong)*(int *)(*local_40 + 4);
    if ((lVar5 != 0) && ((*(uint *)((longlong)local_40 + lVar3 + 0x18) & 0x1c0) != 0x40)) {
      do {
        lVar5 = lVar8;
        local_34 = 0;
        sVar2 = FUN_140058e2a(*(undefined8 *)
                               ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x48),
                              *(undefined2 *)
                               ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x58));
        if (sVar2 == -1) {
          uVar6 = 4;
          goto LAB_140058d18;
        }
        lVar8 = lVar5 + -1;
      } while (lVar5 + -1 != 0);
      lVar3 = (longlong)*(int *)(*local_40 + 4);
      lVar5 = 0;
    }
    plVar1 = *(longlong **)((longlong)local_40 + lVar3 + 0x48);
    local_34 = 0;
    uVar4 = (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3);
    uVar7 = 4;
    uVar6 = 0;
    if (uVar4 == param_3) {
LAB_140058d18:
      do {
        bVar9 = lVar5 == 0;
        lVar5 = lVar5 + -1;
        uVar7 = uVar6;
        if (bVar9) goto code_r0x000140058d4f;
        local_34 = uVar6;
        sVar2 = FUN_140058e2a(*(undefined8 *)
                               ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x48),
                              *(undefined2 *)
                               ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x58));
      } while (sVar2 != -1);
      uVar7 = 4;
    }
code_r0x000140058d4f:
    *(undefined8 *)((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x28) = 0;
  }
  lVar5 = (longlong)*(int *)(*local_40 + 4);
  FUN_14000a9f0((longlong)local_40 + lVar5,
                (uint)(*(longlong *)((longlong)local_40 + lVar5 + 0x48) == 0) << 2 |
                uVar7 | *(uint *)((longlong)local_40 + lVar5 + 0x10),0);
  FUN_14000ce2e(local_50);
  return local_40;
}

