/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006c70a */

int FUN_1006c70a(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_260 [44];
  short local_234;
  short local_232;
  short local_230;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_260;
  iVar1 = *param_1;
  do {
    iVar2 = FUN_10229020(*(undefined4 *)(iVar1 + 0x38),auStack_260);
    if (iVar2 != 0) {
      if (iVar2 != 0x12) goto LAB_1006c76f;
      FUN_1006c79a();
      goto LAB_1006c76d;
    }
  } while ((local_234 == 0x2e) && ((local_232 == 0 || ((local_232 == 0x2e && (local_230 == 0))))));
  FUN_1006c2ce(auStack_260);
LAB_1006c76d:
  iVar2 = 0;
LAB_1006c76f:
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_260)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

