/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180123f27 */

void FUN_180123f27(undefined8 param_1)

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
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  lVar4 = FUN_180107ee8();
  lVar5 = FUN_180116bf9();
  if (*(int *)(lVar5 + 0x20) == 0) {
    pcVar6 = "<unknown>";
  }
  else {
    pcVar6 = (char *)**(undefined8 **)(lVar5 + 0x28);
  }
  cVar3 = FUN_180138722(param_1,pcVar6,0);
  if (cVar3 != '\0') {
    lVar8 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x38) + 0x68);
    if (lVar8 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x70);
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + lVar7);
        FUN_180118054(lVar2);
        local_50 = 0;
        pcVar6 = "<unknown>";
        if (*(int *)(lVar2 + 0x20) != 0) {
          pcVar6 = (char *)**(undefined8 **)(lVar2 + 0x28);
        }
        cVar3 = FUN_1801391f6(pcVar6,lVar2 == lVar5,0x40,&local_50);
        if (cVar3 != '\0') {
          *(longlong *)(lVar4 + 0x40) = lVar2;
        }
        if (lVar2 == lVar5) {
          FUN_18011732f();
        }
        FUN_18011834f();
        lVar7 = lVar7 + 8;
      } while (lVar8 * 8 != lVar7);
    }
    FUN_180138f6c();
  }
  FUN_180119893(0,DAT_1802bb8e0);
  pcVar6 = 
  "- Load additional fonts with io.Fonts->AddFontXXX() functions.\n- Read FAQ and docs/FONTS.md for more details."
  ;
  if ((*(byte *)(lVar4 + 4) & 0x10) == 0) {
    pcVar6 = 
    "- Load additional fonts with io.Fonts->AddFontXXX() functions.\n- The font atlas is built when calling io.Fonts->GetTexDataAsXXXX() or io.Fonts->Build().\n- Read FAQ and docs/FONTS.md for more details.\n- Legacy backend: if you need to add/remove fonts at runtime (e.g. for DPI change), do it before calling NewFrame()."
    ;
  }
  FUN_180124063(pcVar6);
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
}

