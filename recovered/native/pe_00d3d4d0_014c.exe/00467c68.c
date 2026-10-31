/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00467c68 */

int __fastcall FUN_00467c68(uint *param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *param_1 + 1;
  if (param_1[1] < uVar5) {
    iVar3 = FUN_00467cd4((int)param_1,uVar5,param_2);
    if (iVar3 != 0) {
      iVar4 = 0;
      goto LAB_00467ccd;
    }
  }
  uVar1 = param_1[2];
  iVar4 = uVar5 * 0x10;
  *(undefined4 *)((uVar1 - 0x10) + iVar4) = 0;
  *(undefined4 *)((uVar1 - 4) + iVar4) = 0;
  uVar2 = *(uint *)((uVar1 - 0xc) + iVar4);
  if (uVar2 != 0) {
    _memset(*(void **)(iVar4 + uVar1 + -8),0,uVar2 >> 3);
  }
  iVar3 = 0;
  iVar4 = iVar4 + uVar1 + -0x10;
  *param_1 = uVar5;
LAB_00467ccd:
  *param_3 = iVar4;
  return iVar3;
}

