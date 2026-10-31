/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010c7f5 */

void FUN_18010c7f5(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  undefined8 uVar7;
  int iVar8;
  
  lVar4 = DAT_180419160;
  *(undefined4 *)(DAT_180419160 + 0x2b0c) = 0;
  if (*(char *)(lVar4 + 0x2b09) == '\x01') {
    iVar1 = *(int *)(lVar4 + 0x1668);
    FUN_180118f36(7);
    cVar5 = FUN_180118b7f(0x20e,1);
    if (cVar5 != '\0') {
      *(undefined1 *)(lVar4 + 0x2b09) = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x13c);
    if (iVar2 != 0x3000) {
      bVar6 = FUN_1801083d6(*(undefined1 *)(lVar4 + 0x2b0a),0);
      if ((iVar1 != 0 & bVar6) == 1) {
        *(int *)(lVar4 + 0x2b0c) = iVar1;
        *(undefined1 *)(lVar4 + 0x2b09) = 0;
      }
    }
    iVar8 = 0;
    do {
      if (iVar2 == 0x3000) {
        cVar5 = FUN_1801083d6(iVar8,0);
        if (cVar5 != '\0') {
          *(char *)(lVar4 + 0x2b0a) = (char)iVar8;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 3);
    FUN_180116b50(DAT_1802dc414);
    FUN_18011a917();
    FUN_1801330a5("HoveredId: 0x%08X",iVar1);
    FUN_1801330a5("Press ESC to abort picking.");
    if (iVar2 == 0x3000) {
      FUN_1801330a5("Remap w/ Ctrl+Shift: click anywhere to select new mouse button.");
    }
    else {
      puVar3 = (&PTR_s_Left_180361f69_6_1802de1a0)[*(byte *)(lVar4 + 0x2b0a)];
      uVar7 = FUN_18010136d(iVar1 == 0);
      FUN_18013318b(uVar7,"Click %s Button to break in debugger! (remap w/ Ctrl+Shift)",puVar3);
    }
    thunk_FUN_18010f900();
    return;
  }
  return;
}

