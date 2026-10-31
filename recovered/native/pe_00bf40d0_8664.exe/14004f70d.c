/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004f70d */

int FUN_14004f70d(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  iVar5 = 3;
  if ((lVar2 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x170), lVar3 != 0)) {
    piVar4 = *(int **)(lVar3 + 0x268);
    uVar6 = *(uint *)(lVar3 + 0x260);
    uVar1 = *(uint *)(lVar2 + 0x168);
    uVar7 = FUN_14004ec5c((char *)(lVar3 + 0x230),uVar1,uVar6,piVar4);
    if (((char)uVar7 != '\0') &&
       (iVar5 = FUN_14004ec9a((char *)(lVar3 + 0x230),uVar1,uVar6,piVar4), iVar5 != 0)) {
      return iVar5;
    }
    uVar6 = FUN_14004f2c7(param_1,(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8));
    iVar5 = 3;
    if (uVar6 <= *(uint *)(param_1 + 0x30)) {
      iVar5 = FUN_14004fcc2(lVar3,param_1,uVar6);
      *(undefined1 *)(lVar3 + 0x231) = 1;
    }
  }
  return iVar5;
}

