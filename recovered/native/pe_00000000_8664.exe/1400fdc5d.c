/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400fdc5d */

void FUN_1400fdc5d(void)

{
  char cVar1;
  undefined **ppuVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  cVar1 = FUN_1400c51fb("List Boxes");
  if (cVar1 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x7e6,"Widgets/List Boxes");
    FUN_1400aeb6a("Highlight hovered item in second listbox",&DAT_140f31428);
    local_38 = 0;
    cVar1 = FUN_1400c8a84("listbox 1");
    uVar3 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar3 = 0xffffffff;
      ppuVar2 = &PTR_DAT_140e8c9f0;
      uVar4 = 0;
      do {
        uVar5 = (ulonglong)DAT_140f31424;
        local_38 = 0;
        cVar1 = FUN_1400b2126(*ppuVar2,uVar4 == uVar5,0,&local_38);
        if (cVar1 != '\0') {
          DAT_140f31424 = (uint)uVar4;
        }
        if (DAT_140f31428 == '\x01') {
          cVar1 = FUN_1400808b4(0);
          if (cVar1 != '\0') {
            uVar3 = uVar4 & 0xffffffff;
          }
        }
        if (uVar4 == uVar5) {
          FUN_140090647();
        }
        uVar4 = uVar4 + 1;
        ppuVar2 = ppuVar2 + 1;
      } while (uVar4 != 0xe);
      FUN_1400c8d4d();
    }
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_14009cf92("Here we are sharing selection state between both boxes.");
    FUN_1400abfd5("Full-width:");
    fVar6 = (float)FUN_140093756();
    local_38 = CONCAT44(fVar6 * DAT_1401c86c0,0x80800000);
    cVar1 = FUN_1400c8a84("##listbox 2");
    if (cVar1 != '\0') {
      ppuVar2 = &PTR_DAT_140e8c9f0;
      uVar4 = 0;
      do {
        uVar5 = (ulonglong)DAT_140f31424;
        local_38 = 0;
        cVar1 = FUN_1400b2126(*ppuVar2,uVar4 == uVar5,(ulonglong)(uVar3 == uVar4) << 5,&local_38);
        if (cVar1 != '\0') {
          DAT_140f31424 = (uint)uVar4;
        }
        if (uVar4 == uVar5) {
          FUN_140090647();
        }
        uVar4 = uVar4 + 1;
        ppuVar2 = ppuVar2 + 1;
      } while (uVar4 != 0xe);
      FUN_1400c8d4d();
    }
    FUN_1400c66d9();
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

