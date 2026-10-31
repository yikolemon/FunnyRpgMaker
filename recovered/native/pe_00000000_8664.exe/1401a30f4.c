/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a30f4 */

ulonglong _fgetc_nolock(undefined8 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined4 *)FUN_14019e8cc();
    *puVar2 = 0x16;
    FUN_1401ae640();
    uVar3 = 0xffffffff;
  }
  else {
    piVar1 = (int *)(param_1 + 2);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar3 = FUN_1401bbe58();
      return uVar3;
    }
    uVar3 = (ulonglong)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
  }
  return uVar3;
}

