/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009ce56 */

void FUN_14009ce56(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  lVar4 = FUN_140081200();
  lVar5 = FUN_14008ff11();
  if (*(int *)(lVar5 + 0x20) == 0) {
    pcVar6 = "<unknown>";
  }
  else {
    pcVar6 = (char *)**(undefined8 **)(lVar5 + 0x28);
  }
  cVar3 = FUN_1400b1652(param_1,pcVar6,0);
  if (cVar3 != '\0') {
    lVar8 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x38) + 0x68);
    if (lVar8 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x70);
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + lVar7);
        FUN_14009136c(lVar2);
        local_50 = 0;
        pcVar6 = "<unknown>";
        if (*(int *)(lVar2 + 0x20) != 0) {
          pcVar6 = (char *)**(undefined8 **)(lVar2 + 0x28);
        }
        cVar3 = FUN_1400b2126(pcVar6,lVar2 == lVar5,0x40,&local_50);
        if (cVar3 != '\0') {
          *(longlong *)(lVar4 + 0x40) = lVar2;
        }
        if (lVar2 == lVar5) {
          FUN_140090647();
        }
        FUN_140091667();
        lVar7 = lVar7 + 8;
      } while (lVar8 * 8 != lVar7);
    }
    FUN_1400b1e9c();
  }
  FUN_140092bab(0,DAT_1401c86a4);
  pcVar6 = 
  "- Load additional fonts with io.Fonts->AddFontXXX() functions.\n- Read FAQ and docs/FONTS.md for more details."
  ;
  if ((*(byte *)(lVar4 + 4) & 0x10) == 0) {
    pcVar6 = 
    "- Load additional fonts with io.Fonts->AddFontXXX() functions.\n- The font atlas is built when calling io.Fonts->GetTexDataAsXXXX() or io.Fonts->Build().\n- Read FAQ and docs/FONTS.md for more details.\n- Legacy backend: if you need to add/remove fonts at runtime (e.g. for DPI change), do it before calling NewFrame()."
    ;
  }
  FUN_14009cf92(pcVar6);
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
}

