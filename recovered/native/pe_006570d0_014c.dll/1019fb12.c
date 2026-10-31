/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019fb12 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019fb12(void)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float fStack_9c;
  undefined8 uStack_98;
  ulonglong local_90 [16];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&fStack_9c;
  local_90[0] = DAT_10302690;
  FUN_10107cf6(local_90,4);
  cVar1 = FUN_10107d2b("Example: Simple layout",&DAT_103a33e0,0x400);
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x259a,"Examples/Simple layout");
    cVar1 = FUN_1014c8c1();
    if (cVar1 != '\0') {
      cVar1 = FUN_1014db73("File",1);
      if (cVar1 != '\0') {
        cVar1 = FUN_10131d08("Close","Ctrl+W",0,1);
        if (cVar1 != '\0') {
          DAT_103a33e0 = 0;
        }
        FUN_1014db88();
      }
      FUN_1014caf3();
    }
    local_90[0] = (ulonglong)DAT_102b7104;
    FUN_1010c081("left pane",local_90,5,0);
    iVar2 = 0;
    do {
      FUN_101b5fc7(local_90,"MyObject %d",iVar2);
      uStack_98 = 0;
      cVar1 = FUN_10133727(local_90,iVar2 == DAT_103a4b18,0x40,&uStack_98);
      if (cVar1 != '\0') {
        DAT_103a4b18 = iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 100);
    FUN_1010c644();
    FUN_10114a0e(0,0xbf800000);
    FUN_10115649();
    fVar3 = (float10)FUN_1011561d();
    fStack_9c = (float)fVar3;
    local_90[0] = (ulonglong)((uint)fStack_9c ^ _DAT_1028f620) << 0x20;
    FUN_1010c081("item view",local_90,0,0);
    FUN_1012d08c("MyObject: %d",DAT_103a4b18);
    FUN_10132188();
    cVar1 = FUN_1014e2f8("##Tabs",0);
    if (cVar1 != '\0') {
      cVar1 = FUN_1014fafc("Description",0,0);
      if (cVar1 != '\0') {
        FUN_1012d238(
                    "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. "
                    );
        FUN_10150ac8();
      }
      cVar1 = FUN_1014fafc("Details",0,0);
      if (cVar1 != '\0') {
        FUN_1012d08c("ID: 0123456789");
        FUN_10150ac8();
      }
      FUN_1014e72b();
    }
    FUN_1010c644();
    local_90[0] = 0;
    FUN_1012e1b7("Revert",local_90);
    FUN_10114a0e(0,0xbf800000);
    local_90[0] = 0;
    FUN_1012e1b7(&DAT_10338aad,local_90);
    FUN_1011462f();
  }
  FUN_1010ad44();
  if (DAT_10388d00 == (local_10 ^ (uint)&fStack_9c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

