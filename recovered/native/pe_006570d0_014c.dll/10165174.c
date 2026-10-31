/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10165174 */

undefined1 * FUN_10165174(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x1ed) != '\0') ||
     (puVar1 = &DAT_10356101, param_2 < *(short *)(param_1 + 0x1ba))) {
    iVar2 = (int)*(short *)(*(int *)(param_1 + 0x10) + 0x54 + param_2 * 0x74);
    if (iVar2 == -1) {
      puVar1 = &DAT_10356101;
    }
    else {
      puVar1 = (undefined1 *)(iVar2 + *(int *)(param_1 + 0x164));
    }
  }
  return puVar1;
}

