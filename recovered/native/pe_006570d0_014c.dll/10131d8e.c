/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10131d8e */

void FUN_10131d8e(undefined8 *param_1)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined8 local_14;
  uint local_c;
  
  iVar1 = DAT_1039d74c;
  local_c = DAT_10388d00 ^ (uint)&local_1c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar1 + 0x14cc);
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    local_1c = *(undefined4 *)(iVar1 + 0x144);
    local_18 = *(undefined4 *)(iVar1 + 0x148);
    local_14 = CONCAT44((float)((ulonglong)*param_1 >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)(iVar1 + 0x144) >> 0x20),
                        (float)*param_1 + (float)*(undefined8 *)(iVar1 + 0x144));
    FUN_1010c810(param_1,0xbf800000);
    FUN_1010c9d8(&local_1c,0,0,0);
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

