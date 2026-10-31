/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012e1ca */

void FUN_1012e1ca(undefined4 param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined8 local_10;
  uint local_8;
  
  iVar1 = DAT_1039d74c;
  local_8 = DAT_10388d00 ^ (uint)&local_14;
  local_14 = *(undefined4 *)(DAT_1039d74c + 0xd10);
  *(undefined4 *)(DAT_1039d74c + 0xd10) = 0;
  local_10 = 0;
  FUN_1012df59(param_1,&local_10,0x8000);
  *(undefined4 *)(iVar1 + 0xd10) = local_14;
  if (DAT_10388d00 == (local_8 ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

