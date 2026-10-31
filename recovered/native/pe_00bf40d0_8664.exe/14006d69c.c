/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006d69c */

int FUN_14006d69c(uint *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = *param_1 + 1;
  if (param_1[1] < uVar5) {
    iVar2 = FUN_14006d71d((longlong)param_1,uVar5,param_2);
    if (iVar2 != 0) {
      lVar4 = 0;
      goto LAB_14006d70b;
    }
  }
  lVar4 = *(longlong *)(param_1 + 2);
  uVar3 = (ulonglong)uVar5;
  iVar2 = 0;
  *(undefined4 *)(lVar4 + -0x18 + uVar3 * 0x18) = 0;
  *(undefined4 *)(lVar4 + -8 + uVar3 * 0x18) = 0;
  uVar1 = *(uint *)(lVar4 + -0x14 + uVar3 * 0x18);
  if (uVar1 != 0) {
    FUN_1400b3c00(*(undefined1 (**) [32])(lVar4 + uVar3 * 0x18 + -0x10),0,(ulonglong)(uVar1 >> 3));
  }
  lVar4 = lVar4 + uVar3 * 0x18 + -0x18;
  *param_1 = uVar5;
LAB_14006d70b:
  *param_3 = lVar4;
  return iVar2;
}

