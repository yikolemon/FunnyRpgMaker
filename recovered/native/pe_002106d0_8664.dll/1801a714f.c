/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a714f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801a714f(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  ulonglong local_a8 [16];
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_d8;
  local_a8[0] = DAT_180328fd0;
  FUN_18010ca41(local_a8,4);
  cVar1 = FUN_18010ca66("Example: Simple layout",&DAT_18041f1e8,0x400);
  if (cVar1 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x259a,"Examples/Simple layout");
    cVar1 = FUN_180150cda();
    if (cVar1 != '\0') {
      cVar1 = FUN_180151e9c("File",1);
      if (cVar1 != '\0') {
        cVar1 = FUN_1801377a6("Close","Ctrl+W",0,1);
        if (cVar1 != '\0') {
          DAT_18041f1e8 = 0;
        }
        FUN_180151ea6();
      }
      FUN_180150f05();
    }
    local_a8[0] = (ulonglong)DAT_1802dc2d4;
    iVar2 = 0;
    FUN_180110d11("left pane",local_a8,5,0);
    do {
      FUN_1801bf199(local_a8,"MyObject %d",iVar2);
      local_b0 = 0;
      cVar1 = FUN_1801391f6(local_a8,iVar2 == DAT_180420ac8,0x40,&local_b0);
      if (cVar1 != '\0') {
        DAT_180420ac8 = iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 100);
    FUN_180111339();
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_18011a496();
    uVar3 = FUN_18011a472();
    local_a8[0] = (ulonglong)(uVar3 ^ _DAT_1802b0ce0) << 0x20;
    FUN_180110d11("item view",local_a8,0,0);
    FUN_1801330a5("MyObject: %d",DAT_180420ac8);
    FUN_180137ca1();
    cVar1 = FUN_1801525a2("##Tabs",0);
    if (cVar1 != '\0') {
      cVar1 = FUN_180153cc1("Description",0,0);
      if (cVar1 != '\0') {
        FUN_1801332a0(
                     "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. "
                     );
        FUN_180154c1a();
      }
      cVar1 = FUN_180153cc1("Details",0,0);
      if (cVar1 != '\0') {
        FUN_1801330a5("ID: 0123456789");
        FUN_180154c1a();
      }
      FUN_180152a30();
    }
    FUN_180111339();
    local_a8[0] = 0;
    FUN_180134257("Revert",local_a8);
    FUN_180119893(0,DAT_1802bb8e0);
    local_a8[0] = 0;
    FUN_180134257(&DAT_180368bae,local_a8);
    FUN_18011949a();
  }
  FUN_18010f900();
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_d8);
}

