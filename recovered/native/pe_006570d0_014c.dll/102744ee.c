/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102744ee */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

int FUN_102744ee(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  undefined4 uStack_28;
  int iStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar2 = (undefined4 *)auStack_20;
  iVar3 = 0;
  local_8 = 0;
  if (DAT_1039b400 != -1) {
    iStack_24 = DAT_1039b400;
    puVar2 = &uStack_28;
    uStack_28 = 0x1027450f;
    iVar1 = FUN_10274bb6();
    if (iVar1 != 0) {
      bVar4 = iVar1 == -1;
      goto LAB_1027451f;
    }
  }
  *(undefined4 *)((int)puVar2 + -4) = 0x1027451d;
  iVar1 = FUN_10274709();
  bVar4 = iVar1 == 0;
LAB_1027451f:
  if (!bVar4) {
    iVar3 = param_2 * 0x364 + iVar1;
  }
  *(undefined4 *)((int)puVar2 + -4) = 0x10274531;
  return iVar3;
}

