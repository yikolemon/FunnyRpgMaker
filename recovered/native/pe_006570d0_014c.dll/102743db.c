/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102743db */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_102743db(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_28;
  int iStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar2 = (undefined4 *)auStack_20;
  local_8 = 0;
  if (DAT_1039b400 != -1) {
    iStack_24 = DAT_1039b400;
    puVar2 = &uStack_28;
    uStack_28 = 0x102743fb;
    iVar1 = FUN_10274bb6();
    if (iVar1 != 0) {
      if (iVar1 == -1) goto LAB_10274413;
      goto LAB_10274404;
    }
  }
  *(undefined4 *)((int)puVar2 + -4) = 0x1027440f;
  iVar1 = FUN_10274709();
  if (iVar1 == 0) {
LAB_10274413:
                    /* WARNING: Subroutine does not return */
    *(undefined **)((int)puVar2 + -4) = &UNK_10274418;
    _abort();
  }
LAB_10274404:
  *(undefined4 *)((int)puVar2 + -4) = 0x10274409;
  return;
}

