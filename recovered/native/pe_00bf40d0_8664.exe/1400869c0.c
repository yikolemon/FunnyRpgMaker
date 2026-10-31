/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400869c0 */

undefined8 * FUN_1400869c0(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = -1;
  do {
    lVar2 = lVar3 * 2;
    lVar3 = lVar3 + 1;
  } while (*(short *)((longlong)param_1 + lVar2 + 2) != 0);
  uVar1 = lVar3 * 2 + 2;
  puVar4 = _malloc_base(uVar1);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1400b3550(puVar4,param_1,uVar1);
  }
  return puVar4;
}

