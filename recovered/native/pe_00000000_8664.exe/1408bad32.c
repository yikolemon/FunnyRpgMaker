/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408bad32 */

void FUN_1408bad32(uint *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = *param_1;
  *(char **)param_1 = (char *)(ulonglong)uVar2;
  cVar1 = *(char *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if ((cVar1 != '\0') && (*(char *)(ulonglong)uVar2 != cVar1)) {
    puVar3 = (undefined4 *)FUN_1408c0ecd();
    *puVar3 = 0x16;
    FUN_1408cbd78();
  }
  return;
}

