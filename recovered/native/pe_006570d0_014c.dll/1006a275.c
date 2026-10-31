/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006a275 */

int __fastcall FUN_1006a275(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    uVar3 = (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2) * -0x47dc11f7;
    if ((*(int *)(param_1 + 0x18) - iVar1 >> 5 == uVar3) && (param_2 < uVar3)) {
      iVar2 = (*(int *)(iVar1 + 0x10 + param_2 * 0x20) - *(int *)(iVar1 + 0xc + param_2 * 0x20) >> 2
              ) * 0x38e38e39;
    }
  }
  return iVar2;
}

