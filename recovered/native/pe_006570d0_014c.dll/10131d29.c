/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10131d29 */

void FUN_10131d29(void)

{
  int iVar1;
  undefined8 local_c;
  uint local_4;
  
  iVar1 = DAT_1039d74c;
  local_4 = DAT_10388d00 ^ (uint)&local_c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x14cc) + 0xfe) == '\0') {
    local_c = 0;
    FUN_1010c810(&local_c,0xbf800000);
  }
  if (DAT_10388d00 == (local_4 ^ (uint)&local_c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

