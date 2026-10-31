/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10118c2f */

void FUN_10118c2f(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  if ((*(byte *)(param_1 + 0x27b5) & 4) != 0) {
    FUN_100f99e6("[docking] DockContextProcessUndockWindow window \'%s\', clear_persistent_docking_ref = %d\n"
                 ,*(undefined4 *)(param_2 + 4),param_3);
  }
  if (*(int *)(param_2 + 0x430) == 0) {
    *(undefined4 *)(param_2 + 0x438) = 0;
  }
  else {
    uVar1 = 0;
    if (param_3 == '\0') {
      uVar1 = *(undefined4 *)(param_2 + 0x438);
    }
    FUN_1011b729(uVar1);
  }
  *(undefined1 *)(param_2 + 0xfc) = 0;
  *(byte *)(param_2 + 0x409) = *(byte *)(param_2 + 0x409) & 0xf8;
  FUN_1011b8ea(*(undefined4 *)(param_2 + 0x3c));
  *(undefined4 *)(param_2 + 0x58) = local_18;
  *(undefined4 *)(param_2 + 0x5c) = uStack_14;
  *(undefined4 *)(param_2 + 0x60) = local_18;
  *(undefined4 *)(param_2 + 100) = uStack_14;
  if (DAT_10388d00 == (local_10 ^ (uint)&local_18)) {
    FUN_10118556();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

