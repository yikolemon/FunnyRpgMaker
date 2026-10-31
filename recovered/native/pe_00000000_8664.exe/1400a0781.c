/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a0781 */

void FUN_1400a0781(undefined8 param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined8 local_88;
  undefined8 local_50;
  
  lVar4 = DAT_140f2a910;
  local_50 = 0xfffffffffffffffe;
  if ((*(byte *)(DAT_140f2a910 + 0x2030) & 2) == 0) {
    fVar10 = (float)FUN_14008ff20();
    local_88 = (ulonglong)(uint)(fVar10 * DAT_1402116f8) << 0x20;
    FUN_140085d59(&local_88,4);
  }
  cVar5 = FUN_140085d7e("Dear ImGui Debug Log",param_1,0);
  lVar8 = DAT_140f2a910;
  if ((cVar5 != '\0') &&
     (*(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1,
     *(short *)(*(longlong *)(lVar8 + 0x1608) + 0x118) < 2)) {
    puVar2 = (uint *)(lVar4 + 0x2acc);
    thunk_FUN_1400af8bf("All",puVar2,0xdff);
    FUN_140093dc2("(except InputRouting which is spammy)");
    FUN_1400a44e9("Errors",1);
    FUN_1400a44e9("ActiveId",2);
    FUN_1400a44e9("Clipper",0x20);
    FUN_1400a44e9("Docking",0x400);
    FUN_1400a44e9("Focus",4);
    FUN_1400a44e9(&DAT_140ecccd5,0x80);
    FUN_1400a44e9("Font",0x100);
    FUN_1400a44e9("Nav",0x10);
    FUN_1400a44e9("Popup",8);
    FUN_1400a44e9("Selection",0x40);
    FUN_1400a44e9("Viewport",0x800);
    FUN_1400a44e9("InputRouting",0x200);
    cVar5 = FUN_1400ad18f("Clear");
    if (cVar5 != '\0') {
      if (*(longlong *)(lVar4 + 0x2ad8) != 0) {
        *(undefined8 *)(lVar4 + 0x2ad0) = 0;
        FUN_140077b90();
        *(undefined8 *)(lVar4 + 0x2ad8) = 0;
      }
      if (*(longlong *)(lVar4 + 0x2ae8) != 0) {
        *(undefined8 *)(lVar4 + 0x2ae0) = 0;
        FUN_140077b90();
        *(undefined8 *)(lVar4 + 0x2ae8) = 0;
      }
      *(undefined4 *)(lVar4 + 0x2af0) = 0;
      *(undefined4 *)(lVar4 + 11000) = 0;
    }
    FUN_140092bab(0,DAT_1401c86a4);
    cVar5 = FUN_1400ad18f(&DAT_140ec27a5);
    if (cVar5 != '\0') {
      puVar7 = *(undefined **)(lVar4 + 0x2ad8);
      if (puVar7 == (undefined *)0x0) {
        puVar7 = &DAT_140f2a918;
      }
      FUN_1400811e6(puVar7);
    }
    FUN_140092bab(0,DAT_1401c86a4);
    cVar5 = FUN_1400ad18f("Configure Outputs..");
    if (cVar5 != '\0') {
      FUN_140093f4a("Outputs",0);
    }
    cVar5 = FUN_140094826("Outputs",0);
    if (cVar5 != '\0') {
      thunk_FUN_1400af8bf("OutputToTTY",puVar2,0x100000);
      thunk_FUN_1400af8bf("OutputToDebugger",puVar2,0x200000);
      FUN_14008f898(1);
      thunk_FUN_1400af8bf("OutputToTestEngine",puVar2,0x400000);
      FUN_14008f98e();
      FUN_1400946ab();
    }
    local_88 = 0;
    FUN_14008a029("##log",&local_88,1,0xc000);
    uVar3 = *puVar2;
    *puVar2 = uVar3 & 0xffffffdf;
    FUN_1400796ae(&local_88);
    FUN_140079772(&local_88,*(undefined4 *)(lVar4 + 0x2ae0),DAT_1401c86a4);
    while( true ) {
      cVar5 = FUN_140079cee(&local_88);
      if (cVar5 == '\0') break;
      iVar6 = (int)local_88;
      while (iVar6 < local_88._4_4_) {
        puVar7 = *(undefined **)(lVar4 + 0x2ad8);
        if (puVar7 == (undefined *)0x0) {
          puVar7 = &DAT_140f2a918;
        }
        iVar1 = iVar6 + 1;
        if (iVar1 < *(int *)(lVar4 + 0x2ae0)) {
          iVar9 = *(int *)(*(longlong *)(lVar4 + 0x2ae8) + (longlong)iVar1 * 4) + -1;
        }
        else {
          iVar9 = *(int *)(lVar4 + 0x2af0);
        }
        if (*(int *)(lVar4 + 0x2ae0) == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x2ae8) + (longlong)iVar6 * 4);
        }
        FUN_1400a4646(puVar7 + lVar8,puVar7 + iVar9);
        iVar6 = iVar1;
      }
    }
    *puVar2 = uVar3;
    fVar10 = (float)FUN_1400939ce();
    fVar11 = (float)FUN_1400939fc();
    if (fVar11 <= fVar10) {
      FUN_140093b38(DAT_1401c86c8);
    }
    FUN_14008a651();
    FUN_140088c18();
    thunk_FUN_1400796ce(&local_88);
    return;
  }
  FUN_140088c18();
  return;
}

