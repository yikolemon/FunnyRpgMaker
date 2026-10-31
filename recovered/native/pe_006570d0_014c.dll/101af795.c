/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101af795 */

void FUN_101af795(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  cVar2 = FUN_10147d77("List Boxes");
  if (cVar2 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x7e6,"Widgets/List Boxes");
    FUN_1012ff1a("Highlight hovered item in second listbox",&DAT_103a3ea0);
    local_1c = 0;
    cVar2 = FUN_1014b5db("listbox 1",&local_1c);
    if (cVar2 == '\0') {
      iVar4 = -1;
    }
    else {
      iVar3 = 0;
      iVar4 = -1;
      do {
        iVar1 = DAT_103a3e9c;
        local_1c = 0;
        cVar2 = FUN_10133727((&PTR_DAT_103020f4)[iVar3],iVar3 == DAT_103a3e9c,0,&local_1c);
        if (cVar2 != '\0') {
          DAT_103a3e9c = iVar3;
        }
        if (DAT_103a3ea0 == '\x01') {
          cVar2 = FUN_10102a1a(0);
          if (cVar2 != '\0') {
            iVar4 = iVar3;
          }
        }
        if (iVar3 == iVar1) {
          FUN_1011262c();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0xe);
      FUN_1014b8f3();
    }
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_1012d08c("Full-width:");
    fVar5 = (float10)FUN_101155d9();
    local_20 = (float)fVar5;
    local_1c = CONCAT44(local_20 * DAT_102b7100,0x80800000);
    cVar2 = FUN_1014b5db("##listbox 2",&local_1c);
    if (cVar2 != '\0') {
      iVar3 = 0;
      do {
        iVar1 = DAT_103a3e9c;
        local_1c = 0;
        cVar2 = FUN_10133727((&PTR_DAT_103020f4)[iVar3],iVar3 == DAT_103a3e9c,
                             (uint)(iVar4 == iVar3) << 5,&local_1c);
        if (cVar2 != '\0') {
          DAT_103a3e9c = iVar3;
        }
        if (iVar3 == iVar1) {
          FUN_1011262c();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0xe);
      FUN_1014b8f3();
    }
    FUN_10149387();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

