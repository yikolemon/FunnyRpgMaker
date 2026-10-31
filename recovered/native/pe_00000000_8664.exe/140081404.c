/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140081404 */

void FUN_140081404(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar1 = DAT_140f2a910;
  if (((param_2 & 2) != 0) && (*(longlong *)(DAT_140f2a910 + 0x2200) != param_1)) {
    lVar2 = FUN_140093ecb(param_1);
    if (lVar2 != 0) {
      if ((*(byte *)(lVar1 + 0x2acc) & 4) != 0) {
        if (param_1 == 0) {
          pcVar6 = "<NULL>";
        }
        else {
          pcVar6 = *(char **)(param_1 + 8);
        }
        FUN_1400772a6("[focus] FocusWindow(\"%s\", UnlessBelowModal): prevented by \"%s\".\n",pcVar6
                      ,*(undefined8 *)(lVar2 + 8));
      }
      if (((param_1 != 0) && (param_1 == *(longlong *)(param_1 + 0x418))) &&
         ((*(byte *)(param_1 + 0x15) & 0x20) == 0)) {
        FUN_140095115(param_1,lVar2);
      }
      uVar4 = FUN_140081fc1();
      FUN_140082057(uVar4,0);
      return;
    }
  }
  if (param_1 != 0 && (param_2 & 1) != 0) {
    param_1 = FUN_1400951ba();
  }
  if (*(longlong *)(lVar1 + 0x2200) != param_1) {
    FUN_1400903a8();
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
    FUN_1400900d8(uVar5);
    *(undefined1 *)(lVar1 + 0x21f7) = 0;
    *(undefined8 *)(lVar1 + 0x2258) = 0xffffffffffffffff;
    FUN_140082057(param_1,0);
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
      goto LAB_140081540;
    }
  }
  bVar8 = false;
LAB_140081540:
  if ((((*(int *)(lVar1 + 0x167c) != 0) && (lVar3 != 0)) && (*(longlong *)(lVar3 + 0x418) != lVar2))
     && (!bVar8 && (*(byte *)(lVar1 + 0x168a) & 1) == 0)) {
    FUN_14008076e();
  }
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(lVar1 + 4);
    FUN_140092cee(lVar2);
    if (((*(uint *)(lVar2 + 0x14) | *(uint *)(param_1 + 0x14) | *(uint *)(lVar7 + 0x14)) >> 0xd & 1)
        == 0) {
      FUN_140092c65(lVar7);
      return;
    }
  }
  return;
}

