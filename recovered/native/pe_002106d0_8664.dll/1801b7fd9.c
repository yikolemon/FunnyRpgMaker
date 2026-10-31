/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b7fd9 */

void FUN_1801b7fd9(void)

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
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  cVar1 = FUN_18014c2cb("List Boxes");
  if (cVar1 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x7e6,"Widgets/List Boxes");
    FUN_180135c3a("Highlight hovered item in second listbox",&DAT_18041fcd8);
    local_38 = 0;
    cVar1 = FUN_18014fb54("listbox 1");
    uVar3 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar3 = 0xffffffff;
      ppuVar2 = &PTR_DAT_180328660;
      uVar4 = 0;
      do {
        uVar5 = (ulonglong)DAT_18041fcd4;
        local_38 = 0;
        cVar1 = FUN_1801391f6(*ppuVar2,uVar4 == uVar5,0,&local_38);
        if (cVar1 != '\0') {
          DAT_18041fcd4 = (uint)uVar4;
        }
        if (DAT_18041fcd8 == '\x01') {
          cVar1 = FUN_18010759c(0);
          if (cVar1 != '\0') {
            uVar3 = uVar4 & 0xffffffff;
          }
        }
        if (uVar4 == uVar5) {
          FUN_18011732f();
        }
        uVar4 = uVar4 + 1;
        ppuVar2 = ppuVar2 + 1;
      } while (uVar4 != 0xe);
      FUN_18014fe1d();
    }
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063("Here we are sharing selection state between both boxes.");
    FUN_1801330a5("Full-width:");
    fVar6 = (float)FUN_18011a43e();
    local_38 = CONCAT44(fVar6 * DAT_1802dc2d0,0x80800000);
    cVar1 = FUN_18014fb54("##listbox 2");
    if (cVar1 != '\0') {
      ppuVar2 = &PTR_DAT_180328660;
      uVar4 = 0;
      do {
        uVar5 = (ulonglong)DAT_18041fcd4;
        local_38 = 0;
        cVar1 = FUN_1801391f6(*ppuVar2,uVar4 == uVar5,(ulonglong)(uVar3 == uVar4) << 5,&local_38);
        if (cVar1 != '\0') {
          DAT_18041fcd4 = (uint)uVar4;
        }
        if (uVar4 == uVar5) {
          FUN_18011732f();
        }
        uVar4 = uVar4 + 1;
        ppuVar2 = ppuVar2 + 1;
      } while (uVar4 != 0xe);
      FUN_18014fe1d();
    }
    FUN_18014d7a9();
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

