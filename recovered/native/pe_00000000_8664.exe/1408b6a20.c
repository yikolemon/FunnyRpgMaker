/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b6a20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1408b6a20(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(ulonglong)param_1;
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  *(undefined1 *)(puVar3 + 5) = 0;
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 2) = 0;
  *(undefined1 *)(puVar3 + 7) = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  uVar2 = _DAT_b4c40d8b1039b4c0;
  if (uVar1 != 0) {
    uVar2 = ((undefined4 *)(ulonglong)uVar1)[1];
    puVar3[3] = *(undefined4 *)(ulonglong)uVar1;
    *(undefined1 *)(puVar3 + 5) = 1;
    puVar3[4] = uVar2;
    return puVar3;
  }
  if (_DAT_150c5ba64 == 0) {
    *(undefined1 *)(puVar3 + 5) = 1;
    puVar3[4] = 0;
    puVar3[3] = uVar2;
  }
  return puVar3;
}

