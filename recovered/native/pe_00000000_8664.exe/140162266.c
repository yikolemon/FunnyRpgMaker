/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140162266 */

uint FUN_140162266(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    uVar3 = uVar1 >> 1;
    uVar2 = 0;
    do {
      uVar4 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar3 * 8);
      if (param_2 == uVar4) {
        return *(int *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)uVar3 * 8) + 1U & 0xffff;
      }
      uVar5 = uVar3 + 1;
      if (param_2 < uVar4) {
        uVar1 = uVar3;
        uVar5 = uVar2;
      }
      uVar2 = uVar5;
      uVar4 = (param_2 - uVar4) + uVar3;
      uVar5 = uVar2 + uVar1 >> 1;
      uVar3 = uVar4;
      if (uVar4 < uVar2) {
        uVar3 = uVar5;
      }
      if (uVar1 <= uVar4) {
        uVar3 = uVar5;
      }
    } while (uVar2 < uVar1);
  }
  return 0;
}

