/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140006792 */

longlong * FUN_140006792(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  longlong local_50;
  char local_48;
  longlong *local_40;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x28);
  lVar7 = uVar3 - param_3;
  lVar4 = 0;
  if (param_3 <= uVar3 && lVar7 != 0) {
    lVar4 = lVar7;
  }
  if ((longlong)uVar3 < 1) {
    lVar4 = 0;
  }
  local_40 = param_1;
  FUN_140004d42(&local_50,param_1);
  uVar6 = 4;
  if (local_48 == '\x01') {
    lVar2 = (longlong)*(int *)(*local_40 + 4);
    if ((lVar4 != 0) && ((*(uint *)((longlong)local_40 + lVar2 + 0x18) & 0x1c0) != 0x40)) {
      do {
        lVar4 = lVar7;
        local_34 = 0;
        uVar3 = FUN_140004f14(*(longlong **)
                               ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x48),
                              (uint)*(ushort *)
                                     ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x58)
                             );
        if ((short)uVar3 == -1) {
          uVar5 = 4;
          goto LAB_140006888;
        }
        lVar7 = lVar4 + -1;
      } while (lVar4 + -1 != 0);
      lVar2 = (longlong)*(int *)(*local_40 + 4);
      lVar4 = 0;
    }
    plVar1 = *(longlong **)((longlong)local_40 + lVar2 + 0x48);
    local_34 = 0;
    uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3);
    uVar6 = 4;
    uVar5 = 0;
    if (uVar3 == param_3) {
LAB_140006888:
      do {
        bVar8 = lVar4 == 0;
        lVar4 = lVar4 + -1;
        uVar6 = uVar5;
        if (bVar8) goto code_r0x0001400068bf;
        local_34 = uVar5;
        uVar3 = FUN_140004f14(*(longlong **)
                               ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x48),
                              (uint)*(ushort *)
                                     ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x58)
                             );
      } while ((short)uVar3 != -1);
      uVar6 = 4;
    }
code_r0x0001400068bf:
    *(undefined8 *)((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x28) = 0;
  }
  lVar4 = (longlong)*(int *)(*local_40 + 4);
  FUN_140005d34((longlong)local_40 + lVar4,
                (uint)(*(longlong *)((longlong)local_40 + lVar4 + 0x48) == 0) << 2 |
                uVar6 | *(uint *)((longlong)local_40 + lVar4 + 0x10),'\0');
  FUN_140004f4e(&local_50);
  return local_40;
}

