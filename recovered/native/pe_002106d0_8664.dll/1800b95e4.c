/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b95e4 */

void FUN_1800b95e4(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_80 [8];
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_1800bbbea(local_80);
  plVar2 = *(longlong **)(*param_1 + 8);
  plVar9 = plVar2;
  while (plVar9 = (longlong *)*plVar9, plVar9 != plVar2) {
    local_58 = plVar9[3];
    *(undefined8 *)(*param_1 + 0x40 + local_58 * 0x60) = 0;
    FUN_1800bbd5c(local_80,&local_58);
  }
  do {
    if (local_60 == 0) {
      FUN_1800bbca0(local_80);
      return;
    }
    uVar8 = local_68 >> 1;
    uVar7 = (uint)local_68;
    local_68 = local_68 + 1;
    local_60 = local_60 + -1;
    if (local_60 == 0) {
      local_68 = 0;
    }
    lVar5 = *(longlong *)
             (*(longlong *)(local_78 + (local_70 - 1U & uVar8) * 8) + (ulonglong)(uVar7 & 1) * 8) *
            0x60;
    plVar2 = *(longlong **)(*param_1 + 8 + lVar5);
    plVar9 = plVar2;
    while (plVar9 = (longlong *)*plVar9, plVar9 != plVar2) {
      lVar6 = (longlong)(plVar9 + 2);
      lVar11 = *param_1;
      for (lVar10 = *(longlong *)(lVar11 + 0x40 + lVar5); lVar10 != 0;
          lVar10 = *(longlong *)(lVar11 + 0x40 + lVar10 * 0x60)) {
        uVar3 = FUN_1800611df(lVar6);
        FUN_18006101a(lVar11 + lVar10 * 0x60,&local_58,lVar6,uVar3);
        lVar11 = *param_1;
        if (local_50 != 0) goto LAB_1800b9718;
      }
      lVar10 = 0;
LAB_1800b9718:
      lVar10 = lVar10 * 0x60;
      uVar3 = FUN_1800611df(lVar6);
      FUN_18006101a(lVar11 + lVar10,&local_58,lVar6,uVar3);
      lVar6 = local_50;
      if (local_50 == 0) {
        lVar6 = *(longlong *)(lVar11 + 8 + lVar10);
      }
      if (lVar6 == *(longlong *)(*param_1 + 8 + lVar10)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(lVar6 + 0x18);
      }
      plVar1 = plVar9 + 3;
      *(undefined8 *)(*param_1 + 0x40 + *plVar1 * 0x60) = uVar3;
      lVar10 = *param_1;
      lVar6 = lVar10 + *plVar1 * 0x60;
      lVar4 = *(longlong *)(lVar6 + 0x40) * 0x60;
      lVar11 = *(longlong *)(lVar10 + 0x48 + lVar4);
      FUN_1800bbf82(lVar6 + 0x48,*(undefined8 *)(lVar6 + 0x50),lVar11,
                    *(longlong *)(lVar10 + 0x50 + lVar4) - lVar11 >> 3);
      FUN_1800bbd5c(local_80,plVar1);
    }
  } while( true );
}

