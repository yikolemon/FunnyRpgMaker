/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111542 */

void FUN_10111542(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  *(undefined1 *)(iVar1 + 0x185) = 0;
  if (((*(float *)(iVar1 + 0x15c) < *(float *)(iVar1 + 0x144)) ||
      (*(float *)(iVar1 + 0x160) < *(float *)(iVar1 + 0x148))) && (*(char *)(iVar1 + 0xfe) == '\0'))
  {
    FUN_100fcef5(
                "Code uses SetCursorPos()/SetCursorScreenPos() to extend window/parent boundaries.\nPlease submit an item e.g. Dummy() afterwards in order to grow window/parent boundaries."
                );
  }
  return;
}

