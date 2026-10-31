/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00450c1d */

uint __fastcall FUN_00450c1d(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  uVar1 = 0;
  if (param_2 != 0) {
    iVar3 = 0;
    do {
      uVar1 = (uint)*(byte *)(iVar2 + iVar3) | uVar1 << 8;
      iVar3 = iVar3 + 1;
    } while (param_2 != iVar3);
    iVar2 = iVar2 + param_2;
  }
  *param_1 = iVar2;
  return uVar1;
}

