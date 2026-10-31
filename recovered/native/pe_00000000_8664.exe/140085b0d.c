/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140085b0d */

void FUN_140085b0d(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  undefined8 uVar7;
  int iVar8;
  
  lVar4 = DAT_140f2a910;
  *(undefined4 *)(DAT_140f2a910 + 0x2b0c) = 0;
  if (*(char *)(lVar4 + 0x2b09) == '\x01') {
    iVar1 = *(int *)(lVar4 + 0x1668);
    FUN_14009224e(7);
    cVar5 = FUN_140091e97(0x20e,1);
    if (cVar5 != '\0') {
      *(undefined1 *)(lVar4 + 0x2b09) = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x13c);
    if (iVar2 != 0x3000) {
      bVar6 = FUN_1400816ee(*(undefined1 *)(lVar4 + 0x2b0a),0);
      if ((iVar1 != 0 & bVar6) == 1) {
        *(int *)(lVar4 + 0x2b0c) = iVar1;
        *(undefined1 *)(lVar4 + 0x2b09) = 0;
      }
    }
    iVar8 = 0;
    do {
      if (iVar2 == 0x3000) {
        cVar5 = FUN_1400816ee(iVar8,0);
        if (cVar5 != '\0') {
          *(char *)(lVar4 + 0x2b0a) = (char)iVar8;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 3);
    FUN_14008fe68(DAT_1402114e8);
    FUN_140093bd3();
    FUN_1400abfd5("HoveredId: 0x%08X",iVar1);
    FUN_1400abfd5("Press ESC to abort picking.");
    if (iVar2 == 0x3000) {
      FUN_1400abfd5("Remap w/ Ctrl+Shift: click anywhere to select new mouse button.");
    }
    else {
      puVar3 = (&PTR_s_Left_140ec3e0b_6_140210f20)[*(byte *)(lVar4 + 0x2b0a)];
      uVar7 = FUN_14007a629(iVar1 == 0);
      FUN_1400ac0bb(uVar7,"Click %s Button to break in debugger! (remap w/ Ctrl+Shift)",puVar3);
    }
    thunk_FUN_140088c18();
    return;
  }
  return;
}

