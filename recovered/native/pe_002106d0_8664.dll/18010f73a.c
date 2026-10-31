/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010f73a */

void FUN_18010f73a(void)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  
  lVar1 = DAT_180419160;
  if (*(int *)(DAT_180419160 + 0x165c) != 0) {
    if (*(char *)(DAT_180419160 + 0x138) == '\0') {
      *(undefined4 *)(DAT_180419160 + 0x2ac8) = *(undefined4 *)(DAT_180419160 + 0x166c);
    }
    if (*(char *)(lVar1 + 0x2b09) == '\0') {
      cVar2 = FUN_180119733();
      if (cVar2 != '\0') {
        FUN_1801330a5("Programmer error: %d visible items with conflicting ID!",
                      *(undefined4 *)(lVar1 + 0x2ac8));
        FUN_180133606(
                     "Code should use PushID()/PopID() in loops, or append \"##xx\" to same-label identifiers!"
                     );
        FUN_180133606(
                     "Empty label e.g. Button(\"\") == same ID as parent widget/node. Use Button(\"##xx\") instead!"
                     );
        FUN_180133606(
                     "Set io.ConfigDebugHighlightIdConflicts=false to disable this warning in non-programmers builds."
                     );
        FUN_180137ca1();
        if (*(char *)(lVar1 + 0xb6) == '\x01') {
          FUN_1801330a5("(Hold Ctrl to: use ");
          FUN_180119893(0,0);
          cVar2 = FUN_18013425f("Item Picker");
          if (cVar2 != '\0') {
            FUN_18011993e();
          }
          FUN_180119893(0,0);
          pcVar3 = " to break in item call-stack, or ";
        }
        else {
          pcVar3 = "(Hold Ctrl to: ";
        }
        FUN_1801330a5(pcVar3);
        FUN_180119893(0,0);
        FUN_1801376fe("read FAQ \"About ID Stack System\"",
                      "https://github.com/ocornut/imgui/blob/master/docs/FAQ.md#qa-usage");
        FUN_180119893(0,0);
        FUN_1801330a5(&DAT_18037a326);
        thunk_FUN_18010f900();
      }
    }
  }
  if (0 < *(int *)(lVar1 + 0x2aa4)) {
    cVar2 = FUN_180119733();
    if (cVar2 != '\0') {
      FUN_180137ca1();
      FUN_1801330a5("(Hold Ctrl to: ");
      FUN_180119893(0,0);
      cVar2 = FUN_18013425f("Enable Asserts");
      if (cVar2 != '\0') {
        *(undefined1 *)(lVar1 + 0xb1) = 1;
      }
      FUN_180119893(0,0);
      FUN_1801330a5(&DAT_18037a326);
      thunk_FUN_18010f900();
      return;
    }
  }
  return;
}

