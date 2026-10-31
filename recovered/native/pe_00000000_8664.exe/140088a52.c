/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140088a52 */

void FUN_140088a52(void)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  
  lVar1 = DAT_140f2a910;
  if (*(int *)(DAT_140f2a910 + 0x165c) != 0) {
    if (*(char *)(DAT_140f2a910 + 0x138) == '\0') {
      *(undefined4 *)(DAT_140f2a910 + 0x2ac8) = *(undefined4 *)(DAT_140f2a910 + 0x166c);
    }
    if (*(char *)(lVar1 + 0x2b09) == '\0') {
      cVar2 = FUN_140092a4b();
      if (cVar2 != '\0') {
        FUN_1400abfd5("Programmer error: %d visible items with conflicting ID!",
                      *(undefined4 *)(lVar1 + 0x2ac8));
        FUN_1400ac536(
                     "Code should use PushID()/PopID() in loops, or append \"##xx\" to same-label identifiers!"
                     );
        FUN_1400ac536(
                     "Empty label e.g. Button(\"\") == same ID as parent widget/node. Use Button(\"##xx\") instead!"
                     );
        FUN_1400ac536(
                     "Set io.ConfigDebugHighlightIdConflicts=false to disable this warning in non-programmers builds."
                     );
        FUN_1400b0bd1();
        if (*(char *)(lVar1 + 0xb6) == '\x01') {
          FUN_1400abfd5("(Hold Ctrl to: use ");
          FUN_140092bab(0,0);
          cVar2 = FUN_1400ad18f("Item Picker");
          if (cVar2 != '\0') {
            FUN_140092c56();
          }
          FUN_140092bab(0,0);
          pcVar3 = " to break in item call-stack, or ";
        }
        else {
          pcVar3 = "(Hold Ctrl to: ";
        }
        FUN_1400abfd5(pcVar3);
        FUN_140092bab(0,0);
        FUN_1400b062e("read FAQ \"About ID Stack System\"",
                      "https://github.com/ocornut/imgui/blob/master/docs/FAQ.md#qa-usage");
        FUN_140092bab(0,0);
        FUN_1400abfd5(&DAT_140ed9598);
        thunk_FUN_140088c18();
      }
    }
  }
  if (0 < *(int *)(lVar1 + 0x2aa4)) {
    cVar2 = FUN_140092a4b();
    if (cVar2 != '\0') {
      FUN_1400b0bd1();
      FUN_1400abfd5("(Hold Ctrl to: ");
      FUN_140092bab(0,0);
      cVar2 = FUN_1400ad18f("Enable Asserts");
      if (cVar2 != '\0') {
        *(undefined1 *)(lVar1 + 0xb1) = 1;
      }
      FUN_140092bab(0,0);
      FUN_1400abfd5(&DAT_140ed9598);
      thunk_FUN_140088c18();
      return;
    }
  }
  return;
}

