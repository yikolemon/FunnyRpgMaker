/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407aa655 */

void FUN_1407aa655(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 unaff_RDI;
  
  if (param_2 - param_1 != 0) {
    uVar1 = (int)(param_2 - param_1) >> 2;
    do {
      uVar3 = uVar1 >> 1;
      uVar4 = ~uVar3 + uVar1;
      uVar2 = param_1 + uVar3 * 4 + 4;
      uVar1 = uVar3;
      if (*(int *)((ulonglong)uVar2 - 4) < (int)((ulonglong)unaff_RDI >> 0x20)) {
        param_1 = uVar2;
        uVar1 = uVar4;
      }
    } while (uVar1 != 0);
  }
  return;
}

