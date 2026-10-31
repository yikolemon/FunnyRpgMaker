/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020b9cc */

void __fastcall FUN_1020b9cc(int param_1)

{
  if (*(char *)(param_1 + 0x2d8c) != '\0') {
    *(undefined1 *)(param_1 + 0x2d8d) = 1;
    FUN_1020b662(*(undefined4 *)(param_1 + 0x2dd8));
    if (*(char *)(param_1 + 0x2ddc) != '\0') {
      FUN_1020c871(param_1 + 0x2db4,*(undefined4 *)(param_1 + 0x2dbc),
                   *(undefined4 *)(param_1 + 0x2dc0),1);
    }
    *(undefined1 *)(param_1 + 0x2d8f) = 1;
    *(undefined2 *)(param_1 + 0x2d8c) = 0;
    *(undefined1 *)(param_1 + 0x2ddc) = 0;
  }
  return;
}

