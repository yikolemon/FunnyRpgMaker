/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027441e */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

int FUN_1027441e(void)

{
  int iVar1;
  DWORD DVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uStack_28;
  int iStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x1027442a;
  puVar5 = (undefined4 *)auStack_20;
  if (DAT_103a50ec != '\0') {
    local_8 = 0;
    if (DAT_1039b400 != -1) {
      iStack_24 = DAT_1039b400;
      puVar5 = &uStack_28;
      uStack_28 = 0x10274447;
      iVar1 = FUN_10274bce();
      if (iVar1 != 0) {
        if (iVar1 == -1) {
          iVar1 = 0;
        }
        goto LAB_1027449d;
      }
    }
    *(undefined4 *)((int)puVar5 + -4) = 0x1027445c;
    iVar1 = FUN_10274709();
    goto LAB_1027449d;
  }
  piVar3 = &iStack_24;
  iStack_24 = 0x10274466;
  DVar2 = GetLastError();
  local_8 = 1;
  if (DAT_1039b400 == -1) {
LAB_1027448f:
    *(undefined4 *)((int)piVar3 + -4) = 0x10274494;
    iVar1 = FUN_10274709();
  }
  else {
    piVar3[-1] = DAT_1039b400;
    piVar4 = piVar3 + -2;
    piVar3 = piVar3 + -2;
    *piVar4 = 0x1027447f;
    iVar1 = FUN_10274bb6();
    if (iVar1 == 0) goto LAB_1027448f;
    if (iVar1 == -1) {
      iVar1 = 0;
    }
  }
  *(DWORD *)((int)piVar3 + -4) = DVar2;
  puVar5 = (undefined4 *)((int)piVar3 + -8);
  *(undefined4 *)((int)piVar3 + -8) = 0x1027449d;
  SetLastError(*(DWORD *)((int)piVar3 + -4));
LAB_1027449d:
  *(undefined4 *)((int)puVar5 + -4) = 0x102744a4;
  return iVar1;
}

