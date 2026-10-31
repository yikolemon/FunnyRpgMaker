/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801080ec */

void FUN_1801080ec(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar1 = DAT_180419160;
  if (((param_2 & 2) != 0) && (*(longlong *)(DAT_180419160 + 0x2200) != param_1)) {
    lVar2 = FUN_18011ac0f(param_1);
    if (lVar2 != 0) {
      if ((*(byte *)(lVar1 + 0x2acc) & 4) != 0) {
        if (param_1 == 0) {
          pcVar6 = "<NULL>";
        }
        else {
          pcVar6 = *(char **)(param_1 + 8);
        }
        FUN_1800fdfea("[focus] FocusWindow(\"%s\", UnlessBelowModal): prevented by \"%s\".\n",pcVar6
                      ,*(undefined8 *)(lVar2 + 8));
      }
      if (((param_1 != 0) && (param_1 == *(longlong *)(param_1 + 0x418))) &&
         ((*(byte *)(param_1 + 0x15) & 0x20) == 0)) {
        FUN_18011be59(param_1,lVar2);
      }
      uVar4 = FUN_180108ca9();
      FUN_180108d3f(uVar4,0);
      return;
    }
  }
  if (param_1 != 0 && (param_2 & 1) != 0) {
    param_1 = FUN_18011befe();
  }
  if (*(longlong *)(lVar1 + 0x2200) != param_1) {
    FUN_180117090();
    if (param_1 == 0) {
      uVar5 = 0;
      *(undefined4 *)(lVar1 + 0x21f8) = 0;
      *(undefined4 *)(lVar1 + 0x220c) = 0;
    }
    else {
      if (*(char *)(lVar1 + 0x21f5) == '\x01') {
        *(undefined1 *)(lVar1 + 0x21f6) = 1;
      }
      *(undefined4 *)(lVar1 + 0x21f8) = *(undefined4 *)(param_1 + 0x450);
      *(undefined4 *)(lVar1 + 0x220c) = 0;
      uVar5 = *(undefined4 *)(param_1 + 0x488);
    }
    FUN_180116dc0(uVar5);
    *(undefined1 *)(lVar1 + 0x21f7) = 0;
    *(undefined8 *)(lVar1 + 0x2258) = 0xffffffffffffffff;
    FUN_180108d3f(param_1,0);
  }
  if (param_1 == 0) {
    lVar3 = *(longlong *)(lVar1 + 0x16a0);
    lVar2 = 0;
    lVar7 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x418);
    lVar7 = *(longlong *)(param_1 + 0x428);
    lVar3 = *(longlong *)(lVar1 + 0x16a0);
    if (*(longlong *)(param_1 + 0x4c0) != 0 && lVar3 != 0) {
      bVar8 = *(longlong *)(*(longlong *)(param_1 + 0x4c0) + 0x90) == lVar3;
      goto LAB_180108228;
    }
  }
  bVar8 = false;
LAB_180108228:
  if ((((*(int *)(lVar1 + 0x167c) != 0) && (lVar3 != 0)) && (*(longlong *)(lVar3 + 0x418) != lVar2))
     && (!bVar8 && (*(byte *)(lVar1 + 0x168a) & 1) == 0)) {
    FUN_180107456();
  }
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(lVar1 + 4);
    FUN_1801199d6(lVar2);
    if (((*(uint *)(lVar2 + 0x14) | *(uint *)(param_1 + 0x14) | *(uint *)(lVar7 + 0x14)) >> 0xd & 1)
        == 0) {
      FUN_18011994d(lVar7);
      return;
    }
  }
  return;
}

