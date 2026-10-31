/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10131e26 */

void FUN_10131e26(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong local_14;
  uint local_c;
  
  iVar3 = DAT_1039d74c;
  local_c = DAT_10388d00 ^ (uint)&local_14;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar3 + 0x14cc);
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    uVar2 = *(undefined4 *)(iVar1 + 0x1f0);
    *(undefined4 *)(iVar1 + 0x1f0) = 1;
    *(undefined1 *)(iVar1 + 0x184) = 0;
    if (*(float *)(iVar1 + 0x170) <= 0.0) {
      local_14 = (ulonglong)*(uint *)(iVar3 + 0x1228) << 0x20;
    }
    else {
      local_14 = 0;
    }
    FUN_1010c810(&local_14,0xbf800000);
    *(undefined4 *)(iVar1 + 0x1f0) = uVar2;
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

