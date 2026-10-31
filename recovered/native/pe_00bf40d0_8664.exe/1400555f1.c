/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400555f1 */

int FUN_1400555f1(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 != 0) {
    uVar2 = uVar3 >> 1;
    uVar4 = 0;
    do {
      uVar5 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 0x10);
      if (param_2 == uVar5) {
        return uVar2 + 1;
      }
      uVar1 = uVar2 + 1;
      if (param_2 < uVar5 || param_2 - uVar5 == 0) {
        uVar3 = uVar2;
        uVar1 = uVar4;
      }
      uVar4 = (param_2 - uVar5) + uVar2;
      uVar5 = (uVar3 - uVar1 >> 1) + uVar1;
      uVar2 = uVar4;
      if (uVar4 < uVar1) {
        uVar2 = uVar5;
      }
      if (uVar3 <= uVar4) {
        uVar2 = uVar5;
      }
      uVar4 = uVar1;
    } while (uVar1 < uVar3);
  }
  return 0;
}

