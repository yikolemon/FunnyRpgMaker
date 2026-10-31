/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408be905 */

ulonglong FUN_1408be905(uint param_1)

{
  byte bVar1;
  uint uVar2;
  longlong in_R10;
  
  uVar2 = *(uint *)((ulonglong)param_1 + 8);
  if (uVar2 == *(uint *)((ulonglong)param_1 + 4)) {
    return 0xffffffff;
  }
  bVar1 = *(byte *)(ulonglong)uVar2;
  *(uint *)(in_R10 + 8) = uVar2;
  return (ulonglong)bVar1;
}

