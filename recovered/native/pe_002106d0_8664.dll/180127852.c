/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180127852 */

void FUN_180127852(undefined8 param_1)

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
  
  lVar4 = DAT_180419160;
  local_50 = 0xfffffffffffffffe;
  if ((*(byte *)(DAT_180419160 + 0x2030) & 2) == 0) {
    fVar10 = (float)FUN_180116c08();
    local_88 = (ulonglong)(uint)(fVar10 * DAT_1802de988) << 0x20;
    FUN_18010ca41(&local_88,4);
  }
  cVar5 = FUN_18010ca66("Dear ImGui Debug Log",param_1,0);
  lVar8 = DAT_180419160;
  if ((cVar5 != '\0') &&
     (*(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1,
     *(short *)(*(longlong *)(lVar8 + 0x1608) + 0x118) < 2)) {
    puVar2 = (uint *)(lVar4 + 0x2acc);
    thunk_FUN_18013698f("All",puVar2,0xdff);
    FUN_18011ab06("(except InputRouting which is spammy)");
    FUN_18012b5b9("Errors",1);
    FUN_18012b5b9("ActiveId",2);
    FUN_18012b5b9("Clipper",0x20);
    FUN_18012b5b9("Docking",0x400);
    FUN_18012b5b9("Focus",4);
    FUN_18012b5b9("IO",0x80);
    FUN_18012b5b9("Font",0x100);
    FUN_18012b5b9("Nav",0x10);
    FUN_18012b5b9("Popup",8);
    FUN_18012b5b9("Selection",0x40);
    FUN_18012b5b9("Viewport",0x800);
    FUN_18012b5b9("InputRouting",0x200);
    cVar5 = FUN_18013425f("Clear");
    if (cVar5 != '\0') {
      if (*(longlong *)(lVar4 + 0x2ad8) != 0) {
        *(undefined8 *)(lVar4 + 0x2ad0) = 0;
        FUN_1800fe8d4();
        *(undefined8 *)(lVar4 + 0x2ad8) = 0;
      }
      if (*(longlong *)(lVar4 + 0x2ae8) != 0) {
        *(undefined8 *)(lVar4 + 0x2ae0) = 0;
        FUN_1800fe8d4();
        *(undefined8 *)(lVar4 + 0x2ae8) = 0;
      }
      *(undefined4 *)(lVar4 + 0x2af0) = 0;
      *(undefined4 *)(lVar4 + 11000) = 0;
    }
    FUN_180119893(0,DAT_1802bb8e0);
    cVar5 = FUN_18013425f(&DAT_1803605a3);
    if (cVar5 != '\0') {
      puVar7 = *(undefined **)(lVar4 + 0x2ad8);
      if (puVar7 == (undefined *)0x0) {
        puVar7 = &DAT_180419168;
      }
      FUN_180107ece(puVar7);
    }
    FUN_180119893(0,DAT_1802bb8e0);
    cVar5 = FUN_18013425f("Configure Outputs..");
    if (cVar5 != '\0') {
      FUN_18011ac8e("Outputs",0);
    }
    cVar5 = FUN_18011b56a("Outputs",0);
    if (cVar5 != '\0') {
      thunk_FUN_18013698f("OutputToTTY",puVar2,0x100000);
      thunk_FUN_18013698f("OutputToDebugger",puVar2,0x200000);
      FUN_180116580(1);
      thunk_FUN_18013698f("OutputToTestEngine",puVar2,0x400000);
      FUN_180116676();
      FUN_18011b3ef();
    }
    local_88 = 0;
    FUN_180110d11("##log",&local_88,1,0xc000);
    uVar3 = *puVar2;
    *puVar2 = uVar3 & 0xffffffdf;
    FUN_1801003f2(&local_88);
    FUN_1801004b6(&local_88,*(undefined4 *)(lVar4 + 0x2ae0),DAT_1802bb8e0);
    while( true ) {
      cVar5 = FUN_180100a32(&local_88);
      if (cVar5 == '\0') break;
      iVar6 = (int)local_88;
      while (iVar6 < local_88._4_4_) {
        puVar7 = *(undefined **)(lVar4 + 0x2ad8);
        if (puVar7 == (undefined *)0x0) {
          puVar7 = &DAT_180419168;
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
        FUN_18012b716(puVar7 + lVar8,puVar7 + iVar9);
        iVar6 = iVar1;
      }
    }
    *puVar2 = uVar3;
    fVar10 = (float)FUN_18011a712();
    fVar11 = (float)FUN_18011a740();
    if (fVar11 <= fVar10) {
      FUN_18011a87c(DAT_1802ac570);
    }
    FUN_180111339();
    FUN_18010f900();
    thunk_FUN_180100412(&local_88);
    return;
  }
  FUN_18010f900();
  return;
}

