/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140058bcf */

longlong * FUN_140058bcf(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  short sVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_50 [8];
  char cStack_48;
  longlong *plStack_40;
  uint uStack_34;
  undefined8 uStack_30;
  
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    plVar3 = (longlong *)FUN_140058c22(param_1,*param_2);
    return plVar3;
  }
  uStack_30 = 0xfffffffffffffffe;
  uVar5 = *(ulonglong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x28);
  lVar9 = uVar5 - uVar1;
  lVar6 = 0;
  if (uVar1 <= uVar5 && lVar9 != 0) {
    lVar6 = lVar9;
  }
  if ((longlong)uVar5 < 1) {
    lVar6 = 0;
  }
  plStack_40 = param_1;
  FUN_14000cd6c(auStack_50);
  uVar8 = 4;
  if (cStack_48 == '\x01') {
    lVar4 = (longlong)*(int *)(*plStack_40 + 4);
    if ((lVar6 != 0) && ((*(uint *)((longlong)plStack_40 + lVar4 + 0x18) & 0x1c0) != 0x40)) {
      do {
        lVar6 = lVar9;
        uStack_34 = 0;
        sVar2 = FUN_140058e2a(*(undefined8 *)
                               ((longlong)plStack_40 + (longlong)*(int *)(*plStack_40 + 4) + 0x48),
                              *(undefined2 *)
                               ((longlong)plStack_40 + (longlong)*(int *)(*plStack_40 + 4) + 0x58));
        if (sVar2 == -1) {
          uVar7 = 4;
          goto LAB_140058d18;
        }
        lVar9 = lVar6 + -1;
      } while (lVar6 + -1 != 0);
      lVar4 = (longlong)*(int *)(*plStack_40 + 4);
      lVar6 = 0;
    }
    plVar3 = *(longlong **)((longlong)plStack_40 + lVar4 + 0x48);
    uStack_34 = 0;
    uVar5 = (**(code **)(*plVar3 + 0x48))(plVar3,param_2,uVar1);
    uVar8 = 4;
    uVar7 = 0;
    if (uVar5 == uVar1) {
LAB_140058d18:
      do {
        bVar10 = lVar6 == 0;
        lVar6 = lVar6 + -1;
        uVar8 = uVar7;
        if (bVar10) goto code_r0x000140058d4f;
        uStack_34 = uVar7;
        sVar2 = FUN_140058e2a(*(undefined8 *)
                               ((longlong)plStack_40 + (longlong)*(int *)(*plStack_40 + 4) + 0x48),
                              *(undefined2 *)
                               ((longlong)plStack_40 + (longlong)*(int *)(*plStack_40 + 4) + 0x58));
      } while (sVar2 != -1);
      uVar8 = 4;
    }
code_r0x000140058d4f:
    *(undefined8 *)((longlong)plStack_40 + (longlong)*(int *)(*plStack_40 + 4) + 0x28) = 0;
  }
  lVar6 = (longlong)*(int *)(*plStack_40 + 4);
  FUN_14000a9f0((longlong)plStack_40 + lVar6,
                (uint)(*(longlong *)((longlong)plStack_40 + lVar6 + 0x48) == 0) << 2 |
                uVar8 | *(uint *)((longlong)plStack_40 + lVar6 + 0x10),0);
  FUN_14000ce2e(auStack_50);
  return plStack_40;
}

