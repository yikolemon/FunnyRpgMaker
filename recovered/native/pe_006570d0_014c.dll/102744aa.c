/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102744aa */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_102744aa(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
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
    uStack_28 = 0x102744ca;
    iVar1 = FUN_10274bb6();
    if (iVar1 != 0) {
      puVar2[-1] = 0;
      puVar2[-2] = DAT_1039b400;
      puVar3 = puVar2 + -3;
      puVar2 = puVar2 + -3;
      *puVar3 = 0x102744dd;
      FUN_10274bc2();
      *(int *)((int)puVar2 + -4) = iVar1;
      *(undefined4 *)((int)puVar2 + -8) = 0x102744e3;
      destroy_fls(*(void **)((int)puVar2 + -4));
    }
  }
  *(undefined4 *)((int)puVar2 + -4) = 0x102744e8;
  return;
}

