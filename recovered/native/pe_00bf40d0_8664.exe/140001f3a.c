/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140001f3a */

longlong * FUN_140001f3a(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  longlong lStack_50;
  char cStack_48;
  longlong *plStack_40;
  uint uStack_34;
  undefined8 uStack_30;
  
  uVar4 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    plVar1 = FUN_140006792(param_1,*param_2,uVar4);
    return plVar1;
  }
  uStack_30 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x28);
  lVar8 = uVar3 - uVar4;
  lVar5 = 0;
  if (uVar4 <= uVar3 && lVar8 != 0) {
    lVar5 = lVar8;
  }
  if ((longlong)uVar3 < 1) {
    lVar5 = 0;
  }
  plStack_40 = param_1;
  FUN_140004d42(&lStack_50,param_1);
  uVar7 = 4;
  if (cStack_48 == '\x01') {
    lVar2 = (longlong)*(int *)(*plStack_40 + 4);
    if ((lVar5 != 0) && ((*(uint *)((longlong)plStack_40 + lVar2 + 0x18) & 0x1c0) != 0x40)) {
      do {
        lVar5 = lVar8;
        uStack_34 = 0;
        uVar3 = FUN_140004f14(*(longlong **)
                               ((longlong)plStack_40 + (longlong)*(int *)(*plStack_40 + 4) + 0x48),
                              (uint)*(ushort *)
                                     ((longlong)plStack_40 +
                                     (longlong)*(int *)(*plStack_40 + 4) + 0x58));
        if ((short)uVar3 == -1) {
          uVar6 = 4;
          goto LAB_140006888;
        }
        lVar8 = lVar5 + -1;
      } while (lVar5 + -1 != 0);
      lVar2 = (longlong)*(int *)(*plStack_40 + 4);
      lVar5 = 0;
    }
    plVar1 = *(longlong **)((longlong)plStack_40 + lVar2 + 0x48);
    uStack_34 = 0;
    uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,param_2,uVar4);
    uVar7 = 4;
    uVar6 = 0;
    if (uVar3 == uVar4) {
LAB_140006888:
      do {
        bVar9 = lVar5 == 0;
        lVar5 = lVar5 + -1;
        uVar7 = uVar6;
        if (bVar9) goto code_r0x0001400068bf;
        uStack_34 = uVar6;
        uVar4 = FUN_140004f14(*(longlong **)
                               ((longlong)plStack_40 + (longlong)*(int *)(*plStack_40 + 4) + 0x48),
                              (uint)*(ushort *)
                                     ((longlong)plStack_40 +
                                     (longlong)*(int *)(*plStack_40 + 4) + 0x58));
      } while ((short)uVar4 != -1);
      uVar7 = 4;
    }
code_r0x0001400068bf:
    *(undefined8 *)((longlong)plStack_40 + (longlong)*(int *)(*plStack_40 + 4) + 0x28) = 0;
  }
  lVar5 = (longlong)*(int *)(*plStack_40 + 4);
  FUN_140005d34((longlong)plStack_40 + lVar5,
                (uint)(*(longlong *)((longlong)plStack_40 + lVar5 + 0x48) == 0) << 2 |
                uVar7 | *(uint *)((longlong)plStack_40 + lVar5 + 0x10),'\0');
  FUN_140004f4e(&lStack_50);
  return plStack_40;
}

