/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403195bc */

void FUN_1403195bc(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar1 = DAT_14062a630;
  if (((param_2 & 2) != 0) && (*(longlong *)(DAT_14062a630 + 0x2200) != param_1)) {
    lVar2 = FUN_14032c0df(param_1);
    if (lVar2 != 0) {
      if ((*(byte *)(lVar1 + 0x2acc) & 4) != 0) {
        if (param_1 == 0) {
          pcVar6 = ": control character U+0018 (CAN) must be escaped to \\u0018";
        }
        else {
          pcVar6 = *(char **)(param_1 + 8);
        }
        FUN_14030f4ba(&DAT_140596978,pcVar6,*(undefined8 *)(lVar2 + 8));
      }
      if (((param_1 != 0) && (param_1 == *(longlong *)(param_1 + 0x418))) &&
         ((*(byte *)(param_1 + 0x15) & 0x20) == 0)) {
        FUN_14032d329(param_1,lVar2);
      }
      uVar4 = FUN_14031a179();
      FUN_14031a20f(uVar4,0);
      return;
    }
  }
  if (param_1 != 0 && (param_2 & 1) != 0) {
    param_1 = FUN_14032d3ce();
  }
  if (*(longlong *)(lVar1 + 0x2200) != param_1) {
    FUN_140328560();
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
    FUN_140328290(uVar5);
    *(undefined1 *)(lVar1 + 0x21f7) = 0;
    *(undefined8 *)(lVar1 + 0x2258) = 0xffffffffffffffff;
    FUN_14031a20f(param_1,0);
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
      goto LAB_1403196f8;
    }
  }
  bVar8 = false;
LAB_1403196f8:
  if ((((*(int *)(lVar1 + 0x167c) != 0) && (lVar3 != 0)) && (*(longlong *)(lVar3 + 0x418) != lVar2))
     && (!bVar8 && (*(byte *)(lVar1 + 0x168a) & 1) == 0)) {
    FUN_140318926();
  }
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(lVar1 + 4);
    FUN_14032aea6(lVar2);
    if (((*(uint *)(lVar2 + 0x14) | *(uint *)(param_1 + 0x14) | *(uint *)(lVar7 + 0x14)) >> 0xd & 1)
        == 0) {
      FUN_14032ae1d(lVar7);
      return;
    }
  }
  return;
}

