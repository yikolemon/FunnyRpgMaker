/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008f4fe */

void FUN_14008f4fe(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = DAT_140f2a910;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x24f8);
  while ((lVar1 != 0 && (*(longlong *)(lVar1 + 0x188) == *(longlong *)(lVar4 + 0x1608)))) {
    FUN_14007a954("Missing EndTable()");
    FUN_140110400();
    lVar1 = *(longlong *)(lVar4 + 0x24f8);
  }
  lVar1 = *(longlong *)(lVar4 + 0x1608);
  plVar2 = *(longlong **)(lVar4 + 0x2560);
  while ((plVar2 != (longlong *)0x0 && (*plVar2 == lVar1))) {
    FUN_14007a954("Missing EndTabBar()");
    FUN_1400cb960();
    plVar2 = *(longlong **)(lVar4 + 0x2560);
  }
  lVar3 = *(longlong *)(lVar4 + 0x2638);
  while ((lVar3 != 0 && (**(longlong **)(lVar3 + 0x28) == lVar1))) {
    FUN_14007a954("Missing EndMultiSelect()");
    FUN_1400c7e5d();
    lVar3 = *(longlong *)(lVar4 + 0x2638);
  }
  if (*(char *)(lVar1 + 0x1bb) == '\x01') {
    FUN_14007a954("Missing EndMenuBar()");
    FUN_1400c9e35();
  }
  if ((int)*(short *)(param_1 + 4) < *(int *)(lVar1 + 0x1e0)) {
    do {
      FUN_14007a954("Missing TreePop()");
      FUN_1400c66d9();
    } while ((int)*(short *)(param_1 + 4) < *(int *)(lVar1 + 0x1e0));
  }
  if ((int)*(short *)(param_1 + 0xe) < *(int *)(lVar4 + 0x2138)) {
    do {
      FUN_14007a954("Missing EndGroup()");
      FUN_1400927b2();
    } while ((int)*(short *)(param_1 + 0xe) < *(int *)(lVar4 + 0x2138));
  }
  if ((int)*(short *)(param_1 + 2) < *(int *)(lVar1 + 0x148)) {
    do {
      FUN_14007a954("Missing PopID()");
      FUN_140091667();
    } while ((int)*(short *)(param_1 + 2) < *(int *)(lVar1 + 0x148));
  }
  if (*(short *)(param_1 + 0x14) < *(short *)(lVar4 + 0x2864)) {
    do {
      FUN_14007a954("Missing EndDisabled()");
      if ((*(byte *)(lVar4 + 0x1fa0) & 0x40) == 0) {
        FUN_14008f38b();
        *(undefined1 *)
         (*(longlong *)(lVar4 + 0x15e0) + -10 + (longlong)*(int *)(lVar4 + 0x15d8) * 0x78) = 0;
      }
      else {
        FUN_14008f98e();
      }
    } while (*(short *)(param_1 + 0x14) < *(short *)(lVar4 + 0x2864));
  }
  if ((int)*(short *)(param_1 + 6) < *(int *)(lVar4 + 0x20e8)) {
    do {
      FUN_14007a954("Missing PopStyleColor()");
      FUN_14007a8e1(1);
    } while ((int)*(short *)(param_1 + 6) < *(int *)(lVar4 + 0x20e8));
  }
  if ((int)*(short *)(param_1 + 0x10) < *(int *)(lVar4 + 0x2128)) {
    do {
      FUN_14007a954("Missing PopItemFlag()");
      FUN_14008f860();
    } while ((int)*(short *)(param_1 + 0x10) < *(int *)(lVar4 + 0x2128));
  }
  if ((int)*(short *)(param_1 + 8) < *(int *)(lVar4 + 0x20f8)) {
    do {
      FUN_14007a954("Missing PopStyleVar()");
      FUN_14007af87(1);
    } while ((int)*(short *)(param_1 + 8) < *(int *)(lVar4 + 0x20f8));
  }
  if ((int)*(short *)(param_1 + 10) < *(int *)(lVar4 + 0x2108)) {
    do {
      FUN_14007a954("Missing PopFont()");
      FUN_140090e29();
    } while ((int)*(short *)(param_1 + 10) < *(int *)(lVar4 + 0x2108));
  }
  if ((int)*(short *)(param_1 + 0xc) < *(int *)(lVar4 + 0x2118)) {
    do {
      FUN_14007a954("Missing PopFocusScope()");
      FUN_14008f340();
    } while ((int)*(short *)(param_1 + 0xc) < *(int *)(lVar4 + 0x2118));
  }
  return;
}

