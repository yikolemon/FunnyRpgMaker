/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ecdd3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ecdd3(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  ulonglong local_a8 [16];
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_d8;
  local_a8[0] = DAT_140e8d370;
  FUN_140085d59(local_a8,4);
  cVar1 = FUN_140085d7e("Example: Simple layout",&DAT_140f30938,0x400);
  if (cVar1 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x259a,"Examples/Simple layout");
    cVar1 = FUN_1400c9c0a();
    if (cVar1 != '\0') {
      cVar1 = FUN_1400cadcc("File",1);
      if (cVar1 != '\0') {
        cVar1 = FUN_1400b06d6("Close","Ctrl+W",0,1);
        if (cVar1 != '\0') {
          DAT_140f30938 = 0;
        }
        FUN_1400cadd6();
      }
      FUN_1400c9e35();
    }
    local_a8[0] = (ulonglong)DAT_1401c86c4;
    iVar2 = 0;
    FUN_14008a029("left pane",local_a8,5,0);
    do {
      FUN_140104e1d(local_a8,"MyObject %d",iVar2);
      local_b0 = 0;
      cVar1 = FUN_1400b2126(local_a8,iVar2 == DAT_140f32218,0x40,&local_b0);
      if (cVar1 != '\0') {
        DAT_140f32218 = iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 100);
    FUN_14008a651();
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_1400937ae();
    uVar3 = FUN_14009378a();
    local_a8[0] = (ulonglong)(uVar3 ^ _DAT_1401c8590) << 0x20;
    FUN_14008a029("item view",local_a8,0,0);
    FUN_1400abfd5("MyObject: %d",DAT_140f32218);
    FUN_1400b0bd1();
    cVar1 = FUN_1400cb4d2("##Tabs",0);
    if (cVar1 != '\0') {
      cVar1 = FUN_1400ccbf1("Description",0,0);
      if (cVar1 != '\0') {
        FUN_1400ac1d0(
                     "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. "
                     );
        FUN_1400cdb4a();
      }
      cVar1 = FUN_1400ccbf1("Details",0,0);
      if (cVar1 != '\0') {
        FUN_1400abfd5("ID: 0123456789");
        FUN_1400cdb4a();
      }
      FUN_1400cb960();
    }
    FUN_14008a651();
    local_a8[0] = 0;
    FUN_1400ad187("Revert",local_a8);
    FUN_140092bab(0,DAT_1401c86a4);
    local_a8[0] = 0;
    FUN_1400ad187(&DAT_140ec9c59,local_a8);
    FUN_1400927b2();
  }
  FUN_140088c18();
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_d8);
}

