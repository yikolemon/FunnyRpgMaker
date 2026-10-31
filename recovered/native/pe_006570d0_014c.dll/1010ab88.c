/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010ab88 */

void FUN_1010ab88(void)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  
  iVar1 = DAT_1039d74c;
  if (*(int *)(DAT_1039d74c + 0x1508) != 0) {
    if (*(char *)(DAT_1039d74c + 0x104) == '\0') {
      *(undefined4 *)(DAT_1039d74c + 0x27b0) = *(undefined4 *)(DAT_1039d74c + 0x1518);
    }
    if (*(char *)(iVar1 + 0x27e5) == '\0') {
      cVar2 = FUN_101148bc();
      if (cVar2 != '\0') {
        FUN_1012d08c("Programmer error: %d visible items with conflicting ID!",
                     *(undefined4 *)(iVar1 + 0x27b0));
        FUN_1012d551(
                    "Code should use PushID()/PopID() in loops, or append \"##xx\" to same-label identifiers!"
                    );
        FUN_1012d551(
                    "Empty label e.g. Button(\"\") == same ID as parent widget/node. Use Button(\"##xx\") instead!"
                    );
        FUN_1012d551(
                    "Set io.ConfigDebugHighlightIdConflicts=false to disable this warning in non-programmers builds."
                    );
        FUN_10132188();
        pcVar3 = "(Hold Ctrl to: ";
        if (*(char *)(iVar1 + 0xa2) == '\x01') {
          FUN_1012d08c("(Hold Ctrl to: use ");
          FUN_10114a0e(0,0);
          cVar2 = FUN_1012e1ca("Item Picker");
          if (cVar2 != '\0') {
            FUN_10114acd();
          }
          FUN_10114a0e(0,0);
          pcVar3 = " to break in item call-stack, or ";
        }
        FUN_1012d08c(pcVar3);
        FUN_10114a0e(0,0);
        FUN_10131c6c("read FAQ \"About ID Stack System\"",
                     "https://github.com/ocornut/imgui/blob/master/docs/FAQ.md#qa-usage");
        FUN_10114a0e(0,0);
        FUN_1012d08c(&DAT_1034a243);
        thunk_FUN_1010ad44();
      }
    }
  }
  if (0 < *(int *)(iVar1 + 0x2790)) {
    cVar2 = FUN_101148bc();
    if (cVar2 != '\0') {
      FUN_10132188();
      FUN_1012d08c("(Hold Ctrl to: ");
      FUN_10114a0e(0,0);
      cVar2 = FUN_1012e1ca("Enable Asserts");
      if (cVar2 != '\0') {
        *(undefined1 *)(iVar1 + 0x9d) = 1;
      }
      FUN_10114a0e(0,0);
      FUN_1012d08c(&DAT_1034a243);
      thunk_FUN_1010ad44();
      return;
    }
  }
  return;
}

