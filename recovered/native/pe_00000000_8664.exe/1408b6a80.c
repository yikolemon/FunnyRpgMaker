/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b6a80 */

void FUN_1408b6a80(ulonglong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 & 0xffffffff);
  if ((char)puVar3[5] == '\x02') {
    *(uint *)((ulonglong)*puVar3 + 0x350) = *(uint *)((ulonglong)*puVar3 + 0x350) & 0xfffffffd;
  }
  if ((char)puVar3[7] != '\0') {
    uVar1 = puVar3[6];
    lVar2 = FUN_1408b6ac0();
    *(uint *)(lVar2 + 0x10) = uVar1;
  }
  if ((char)puVar3[9] != '\0') {
    uVar1 = puVar3[8];
    lVar2 = FUN_1408b6ac0(puVar3);
    *(uint *)(lVar2 + 0x14) = uVar1;
  }
  return;
}

