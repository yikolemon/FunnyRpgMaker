/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044e360 */

undefined8 * FUN_14044e360(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar1 = (undefined8 *)FUN_14044ab00();
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = &DAT_1404ebc00;
  puVar1[2] = 0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)((longlong)puVar1 + 0x24) = *(undefined1 *)(param_1 + 0x24);
  lVar4 = *(longlong *)(param_1 + 0x28);
  *(undefined1 *)(puVar1 + 6) = 0;
  if (lVar4 == 0) {
    lVar4 = param_1 + 0x30;
    puVar1[5] = 0;
    if (lVar4 == 0) goto LAB_14044e40f;
  }
  puVar1[5] = 0;
  lVar3 = -1;
  do {
    lVar2 = lVar3;
    lVar3 = lVar2 + 1;
  } while (*(char *)(lVar4 + lVar3) != '\0');
  lVar2 = lVar2 + 2;
  lVar3 = _malloc_base(lVar2);
  if (lVar3 != 0) {
    FUN_1404b97c0(lVar3,lVar4,lVar2);
  }
  puVar1[5] = lVar3;
LAB_14044e40f:
  FUN_140450810(puVar1,param_1);
  return puVar1;
}

