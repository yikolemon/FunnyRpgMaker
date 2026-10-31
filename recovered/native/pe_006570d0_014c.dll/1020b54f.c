/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020b54f */

int __fastcall FUN_1020b54f(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_1020b545();
  if (param_2 < uVar2) {
    iVar3 = *(int *)(*(int *)(param_1 + 8) + param_2 * 8);
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 4 + param_2 * 8);
    if (iVar1 == 1) {
      iVar3 = iVar3 + (iVar3 >> 0x1f) + 0x2000 >> 0xe;
    }
    else if (iVar1 == 2) {
      iVar3 = iVar3 << 0x10;
    }
  }
  else {
    FUN_1020a812();
    iVar3 = 0;
  }
  return iVar3;
}

