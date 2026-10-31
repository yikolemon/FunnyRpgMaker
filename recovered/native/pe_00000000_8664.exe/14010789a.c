/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010789a */

longlong FUN_14010789a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_140078e3e(param_1 + 0x138,&DAT_140edcdbf,param_3,param_4,param_1 + 0x138,param_1,
                0xfffffffffffffffe);
  lVar5 = param_1;
  FUN_1401082e4(param_1);
  FUN_1401c5830(param_1,0,0x100);
  *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
  iVar3 = *(int *)(param_1 + 0x110);
  if (iVar3 == *(int *)(param_1 + 0x114)) {
    if (iVar3 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar3 / 2 + iVar3;
    }
    iVar4 = iVar3 + 1;
    if (iVar3 + 1 < iVar2) {
      iVar4 = iVar2;
    }
    lVar6 = lVar5;
    lVar1 = FUN_140077ab4((longlong)iVar4 << 3);
    if (*(longlong *)(lVar5 + 0x118) != 0) {
      FUN_1401c5180(lVar1,*(longlong *)(lVar5 + 0x118),(longlong)*(int *)(lVar5 + 0x110) << 3);
      FUN_140077b90(*(undefined8 *)(lVar5 + 0x118));
    }
    *(longlong *)(lVar5 + 0x118) = lVar1;
    *(int *)(lVar5 + 0x114) = iVar4;
    iVar3 = *(int *)(lVar5 + 0x110);
    param_1 = lVar5;
    lVar5 = lVar6;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x118);
  }
  *(undefined **)(lVar1 + (longlong)iVar3 * 8) = &DAT_140ecccb0;
  iVar2 = *(int *)(param_1 + 0x110);
  iVar3 = iVar2 + 1;
  *(int *)(param_1 + 0x110) = iVar3;
  if (iVar3 == *(int *)(param_1 + 0x114)) {
    iVar2 = iVar2 + 2;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
    lVar6 = lVar5;
    lVar1 = FUN_140077ab4((longlong)iVar2 << 3);
    if (*(longlong *)(lVar5 + 0x118) != 0) {
      FUN_1401c5180(lVar1,*(longlong *)(lVar5 + 0x118),(longlong)*(int *)(lVar5 + 0x110) << 3);
      FUN_140077b90(*(undefined8 *)(lVar5 + 0x118));
    }
    *(longlong *)(lVar5 + 0x118) = lVar1;
    *(int *)(lVar5 + 0x114) = iVar2;
    iVar3 = *(int *)(lVar5 + 0x110);
    param_1 = lVar5;
    lVar5 = lVar6;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x118);
  }
  *(char **)(lVar1 + (longlong)iVar3 * 8) = "HISTORY";
  iVar2 = *(int *)(param_1 + 0x110);
  iVar3 = iVar2 + 1;
  *(int *)(param_1 + 0x110) = iVar3;
  if (iVar3 == *(int *)(param_1 + 0x114)) {
    iVar2 = iVar2 + 2;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
    lVar6 = lVar5;
    lVar1 = FUN_140077ab4((longlong)iVar2 << 3);
    if (*(longlong *)(lVar5 + 0x118) != 0) {
      FUN_1401c5180(lVar1,*(longlong *)(lVar5 + 0x118),(longlong)*(int *)(lVar5 + 0x110) << 3);
      FUN_140077b90(*(undefined8 *)(lVar5 + 0x118));
    }
    *(longlong *)(lVar5 + 0x118) = lVar1;
    *(int *)(lVar5 + 0x114) = iVar2;
    iVar3 = *(int *)(lVar5 + 0x110);
    param_1 = lVar5;
    lVar5 = lVar6;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x118);
  }
  *(char **)(lVar1 + (longlong)iVar3 * 8) = "CLEAR";
  iVar2 = *(int *)(param_1 + 0x110);
  iVar3 = iVar2 + 1;
  *(int *)(param_1 + 0x110) = iVar3;
  if (iVar3 == *(int *)(param_1 + 0x114)) {
    iVar2 = iVar2 + 2;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
    lVar6 = lVar5;
    lVar1 = FUN_140077ab4((longlong)iVar2 << 3);
    if (*(longlong *)(lVar5 + 0x118) != 0) {
      FUN_1401c5180(lVar1,*(longlong *)(lVar5 + 0x118),(longlong)*(int *)(lVar5 + 0x110) << 3);
      FUN_140077b90(*(undefined8 *)(lVar5 + 0x118));
    }
    *(longlong *)(lVar5 + 0x118) = lVar1;
    *(int *)(lVar5 + 0x114) = iVar2;
    iVar3 = *(int *)(lVar5 + 0x110);
    param_1 = lVar5;
    lVar5 = lVar6;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x118);
  }
  *(char **)(lVar1 + (longlong)iVar3 * 8) = "CLASSIFY";
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  *(undefined2 *)(param_1 + 0x250) = 1;
  FUN_140108340(param_1,"Welcome to Dear ImGui!");
  return lVar5;
}

