/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400da9bc */

void FUN_1400da9bc(int *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar2 = *param_1;
  lVar1 = *(longlong *)(param_1 + 2) + (longlong)iVar2 * 0x48;
  if ((*(int *)(lVar1 + -0x20) != 0) &&
     ((*(longlong *)(lVar1 + -0x30) != *(longlong *)(param_1 + 0x1e) ||
      (*(longlong *)(lVar1 + -0x38) != *(longlong *)(param_1 + 0x1c))))) {
    FUN_1400da69a(param_1);
    return;
  }
  if (*(longlong *)(lVar1 + -0x18) == 0) {
    if ((((1 < iVar2) && (*(int *)(lVar1 + -0x20) == 0)) &&
        (iVar4 = memcmp(param_1 + 0x18,(void *)(lVar1 + -0x90),0x24), iVar4 == 0)) &&
       ((*(int *)(lVar1 + -0x68) + *(int *)(lVar1 + -0x6c) == *(int *)(lVar1 + -0x24) &&
        (*(longlong *)(lVar1 + -0x60) == 0)))) {
      *param_1 = iVar2 + -1;
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x1e);
    *(undefined8 *)(lVar1 + -0x38) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)(lVar1 + -0x30) = uVar3;
  }
  return;
}

