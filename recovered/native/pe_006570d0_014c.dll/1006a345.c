/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006a345 */

int __fastcall FUN_1006a345(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    uVar3 = (*(int *)(param_1 + 0x24) - iVar1 >> 2) * -0x47dc11f7;
    if ((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 5 == uVar3) && (param_2 < uVar3)) {
      iVar2 = (*(int *)(iVar1 + 0x7c + param_2 * 0xe4) - *(int *)(iVar1 + 0x78 + param_2 * 0xe4) >>
              3) * -0x55555555;
    }
  }
  return iVar2;
}

