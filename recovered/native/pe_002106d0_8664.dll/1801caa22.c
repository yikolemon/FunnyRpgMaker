/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801caa22 */

longlong * FUN_1801caa22(longlong param_1,char *param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if ((param_2 != (char *)0x0 && param_1 != 0) &&
     (uVar1 = *(uint *)(param_1 + 0x14), (ulonglong)uVar1 != 0)) {
    puVar4 = (undefined8 *)(param_1 + 0x18);
    do {
      plVar2 = (longlong *)*puVar4;
      iVar3 = strcmp(*(char **)(*plVar2 + 8),param_2);
      if (iVar3 == 0) {
        return plVar2;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 < (undefined8 *)(param_1 + (ulonglong)uVar1 * 8 + 0x18));
  }
  return (longlong *)0x0;
}

