/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801161e6 */

void FUN_1801161e6(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = DAT_180419160;
  lVar1 = *(longlong *)(DAT_180419160 + 0x24f8);
  while ((lVar1 != 0 && (*(longlong *)(lVar1 + 0x188) == *(longlong *)(lVar4 + 0x1608)))) {
    FUN_180101698("Missing EndTable()");
    FUN_180168430();
    lVar1 = *(longlong *)(lVar4 + 0x24f8);
  }
  lVar1 = *(longlong *)(lVar4 + 0x1608);
  plVar2 = *(longlong **)(lVar4 + 0x2560);
  while ((plVar2 != (longlong *)0x0 && (*plVar2 == lVar1))) {
    FUN_180101698("Missing EndTabBar()");
    FUN_180152a30();
    plVar2 = *(longlong **)(lVar4 + 0x2560);
  }
  lVar3 = *(longlong *)(lVar4 + 0x2638);
  while ((lVar3 != 0 && (**(longlong **)(lVar3 + 0x28) == lVar1))) {
    FUN_180101698("Missing EndMultiSelect()");
    FUN_18014ef2d();
    lVar3 = *(longlong *)(lVar4 + 0x2638);
  }
  if (*(char *)(lVar1 + 0x1bb) == '\x01') {
    FUN_180101698("Missing EndMenuBar()");
    FUN_180150f05();
  }
  if ((int)*(short *)(param_1 + 4) < *(int *)(lVar1 + 0x1e0)) {
    do {
      FUN_180101698("Missing TreePop()");
      FUN_18014d7a9();
    } while ((int)*(short *)(param_1 + 4) < *(int *)(lVar1 + 0x1e0));
  }
  if ((int)*(short *)(param_1 + 0xe) < *(int *)(lVar4 + 0x2138)) {
    do {
      FUN_180101698("Missing EndGroup()");
      FUN_18011949a();
    } while ((int)*(short *)(param_1 + 0xe) < *(int *)(lVar4 + 0x2138));
  }
  if ((int)*(short *)(param_1 + 2) < *(int *)(lVar1 + 0x148)) {
    do {
      FUN_180101698("Missing PopID()");
      FUN_18011834f();
    } while ((int)*(short *)(param_1 + 2) < *(int *)(lVar1 + 0x148));
  }
  if (*(short *)(param_1 + 0x14) < *(short *)(lVar4 + 0x2864)) {
    do {
      FUN_180101698("Missing EndDisabled()");
      if ((*(byte *)(lVar4 + 0x1fa0) & 0x40) == 0) {
        FUN_180116073();
        *(undefined1 *)
         (*(longlong *)(lVar4 + 0x15e0) + -10 + (longlong)*(int *)(lVar4 + 0x15d8) * 0x78) = 0;
      }
      else {
        FUN_180116676();
      }
    } while (*(short *)(param_1 + 0x14) < *(short *)(lVar4 + 0x2864));
  }
  if ((int)*(short *)(param_1 + 6) < *(int *)(lVar4 + 0x20e8)) {
    do {
      FUN_180101698("Missing PopStyleColor()");
      FUN_180101625(1);
    } while ((int)*(short *)(param_1 + 6) < *(int *)(lVar4 + 0x20e8));
  }
  if ((int)*(short *)(param_1 + 0x10) < *(int *)(lVar4 + 0x2128)) {
    do {
      FUN_180101698("Missing PopItemFlag()");
      FUN_180116548();
    } while ((int)*(short *)(param_1 + 0x10) < *(int *)(lVar4 + 0x2128));
  }
  if ((int)*(short *)(param_1 + 8) < *(int *)(lVar4 + 0x20f8)) {
    do {
      FUN_180101698("Missing PopStyleVar()");
      FUN_180101ccb(1);
    } while ((int)*(short *)(param_1 + 8) < *(int *)(lVar4 + 0x20f8));
  }
  if ((int)*(short *)(param_1 + 10) < *(int *)(lVar4 + 0x2108)) {
    do {
      FUN_180101698("Missing PopFont()");
      FUN_180117b11();
    } while ((int)*(short *)(param_1 + 10) < *(int *)(lVar4 + 0x2108));
  }
  if ((int)*(short *)(param_1 + 0xc) < *(int *)(lVar4 + 0x2118)) {
    do {
      FUN_180101698("Missing PopFocusScope()");
      FUN_180116028();
    } while ((int)*(short *)(param_1 + 0xc) < *(int *)(lVar4 + 0x2118));
  }
  return;
}

