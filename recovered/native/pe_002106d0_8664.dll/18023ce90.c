/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023ce90 */

undefined8 * FUN_18023ce90(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar1 = (undefined8 *)FUN_180239630();
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = std::locale::_Locimp::vftable;
  puVar1[2] = 0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)((longlong)puVar1 + 0x24) = *(undefined1 *)(param_1 + 0x24);
  lVar4 = *(longlong *)(param_1 + 0x28);
  *(undefined1 *)(puVar1 + 6) = 0;
  if (lVar4 == 0) {
    lVar4 = param_1 + 0x30;
    puVar1[5] = 0;
    if (lVar4 == 0) goto LAB_18023cf3f;
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
    FUN_1802a82f0(lVar3,lVar4,lVar2);
  }
  puVar1[5] = lVar3;
LAB_18023cf3f:
  FUN_18023f340(puVar1,param_1);
  return puVar1;
}

