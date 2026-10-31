/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043b93c */

void __fastcall FUN_0043b93c(int param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = *param_2;
  if (uVar1 < *(uint *)(param_1 + 0x150)) {
    FUN_0044235e(param_1);
    if (*(int *)(param_1 + 0x10) == 0) {
      lVar2 = (longlong)(int)param_2[1] * (longlong)*(int *)(param_1 + 0xe0);
      iVar3 = (int)(lVar2 >> 0x3f);
      lVar2 = lVar2 + CONCAT44(iVar3,iVar3) + 0x8000;
      *(uint *)(*(int *)(param_1 + 0x154) + uVar1 * 4) =
           (int)((ulonglong)lVar2 >> 0x20) << 0x10 | (uint)lVar2 >> 0x10;
    }
  }
  else if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
  }
  return;
}

