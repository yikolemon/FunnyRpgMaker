/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006a2fb */

int __fastcall FUN_1006a2fb(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x24) - iVar1 >> 3;
    if (((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2) * 0x3cf3cf3d +
         iVar3 * -0x4f72c235 == 0) && (param_2 < (uint)(iVar3 * 0x4f72c235))) {
      iVar2 = (*(int *)(iVar1 + 0x7c + param_2 * 0xe8) - *(int *)(iVar1 + 0x78 + param_2 * 0xe8) >>
              3) * -0x55555555;
    }
  }
  return iVar2;
}

