/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140050534 */

char FUN_140050534(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0x9c;
  puVar2 = param_1;
  do {
    uVar5 = uVar4 >> 1;
    uVar4 = ~uVar5 + uVar4;
    puVar1 = puVar2 + uVar5 + 1;
    if (param_2 < puVar2[uVar5]) {
      uVar4 = uVar5;
      puVar1 = puVar2;
    }
    puVar2 = puVar1;
  } while (0 < (longlong)uVar4);
  if ((longlong)puVar2 - (longlong)param_1 == 0) {
    return -1;
  }
  lVar3 = (longlong)puVar2 - (longlong)param_1 >> 2;
  return (param_2 < (uint)*(ushort *)((longlong)param_1 + lVar3 * 2 + 0x26e) + param_1[lVar3 + -1])
         + -1;
}

