/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a2689 */

void FUN_1801a2689(ulonglong param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80000000;
  if ((param_1 & 8) == 0) {
    uVar2 = 0xcf0000;
  }
  *param_2 = uVar2;
  uVar1 = 0x80;
  if ((param_1 & 0x10) == 0) {
    uVar1 = 0x40000;
  }
  *param_3 = (uint)(param_1 >> 7) & 8 | uVar1;
  return;
}

