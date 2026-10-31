/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011cd3e */

int __fastcall FUN_1011cd3e(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x430) + 0x30);
  iVar3 = -1;
  if (iVar1 != 0) {
    iVar2 = FUN_1014f645(iVar1,*(undefined4 *)(param_1 + 0xb8));
    if (iVar2 != 0) {
      iVar3 = (iVar2 - *(int *)(iVar1 + 0xc) >> 4) * -0x55555555;
    }
  }
  return iVar3;
}

