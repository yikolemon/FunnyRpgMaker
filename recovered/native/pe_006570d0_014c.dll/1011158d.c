/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011158d */

void FUN_1011158d(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_1039d74c;
  while ((*(int *)(iVar2 + 0x2308) != 0 &&
         (*(int *)(*(int *)(iVar2 + 0x2308) + 0x158) == *(int *)(iVar2 + 0x14cc)))) {
    FUN_100fcef5("Missing EndTable()");
    FUN_1016304e();
  }
  iVar1 = *(int *)(iVar2 + 0x14cc);
  while ((*(int **)(iVar2 + 0x2358) != (int *)0x0 && (**(int **)(iVar2 + 0x2358) == iVar1))) {
    FUN_100fcef5("Missing EndTabBar()");
    FUN_1014e72b();
  }
  while ((*(int *)(iVar2 + 0x2414) != 0 && (**(int **)(*(int *)(iVar2 + 0x2414) + 0x28) == iVar1)))
  {
    FUN_100fcef5("Missing EndMultiSelect()");
    FUN_1014a9f9();
  }
  if (*(char *)(iVar1 + 0x1a7) == '\x01') {
    FUN_100fcef5("Missing EndMenuBar()");
    FUN_1014caf3();
  }
  while ((int)*(short *)(param_1 + 4) < *(int *)(iVar1 + 0x1cc)) {
    FUN_100fcef5("Missing TreePop()");
    FUN_10149387();
  }
  while ((int)*(short *)(param_1 + 0xe) < *(int *)(iVar2 + 0x1fb0)) {
    FUN_100fcef5("Missing EndGroup()");
    FUN_1011462f();
  }
  while ((int)*(short *)(param_1 + 2) < *(int *)(iVar1 + 0x138)) {
    FUN_100fcef5("Missing PopID()");
    FUN_10113568();
  }
  while (*(short *)(param_1 + 0x14) < *(short *)(iVar2 + 0x25e8)) {
    FUN_100fcef5("Missing EndDisabled()");
    if ((*(byte *)(iVar2 + 0x1e40) & 0x40) == 0) {
      FUN_10111436();
      *(undefined1 *)(*(int *)(iVar2 + 0x14b0) + -6 + *(int *)(iVar2 + 0x14a8) * 0x70) = 0;
    }
    else {
      FUN_10111961();
    }
  }
  while ((int)*(short *)(param_1 + 6) < *(int *)(iVar2 + 0x1f74)) {
    FUN_100fcef5("Missing PopStyleColor()");
    FUN_100fce8e(1);
  }
  while ((int)*(short *)(param_1 + 0x10) < *(int *)(iVar2 + 0x1fa4)) {
    FUN_100fcef5("Missing PopItemFlag()");
    FUN_10111839();
  }
  while ((int)*(short *)(param_1 + 8) < *(int *)(iVar2 + 0x1f80)) {
    FUN_100fcef5("Missing PopStyleVar()");
    FUN_100fd4c4(1);
  }
  while ((int)*(short *)(param_1 + 10) < *(int *)(iVar2 + 0x1f8c)) {
    FUN_100fcef5("Missing PopFont()");
    FUN_10112e00();
  }
  while ((int)*(short *)(param_1 + 0xc) < *(int *)(iVar2 + 0x1f98)) {
    FUN_100fcef5("Missing PopFocusScope()");
    FUN_101113ef();
  }
  return;
}

