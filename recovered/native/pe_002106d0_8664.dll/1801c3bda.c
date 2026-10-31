/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c3bda */

undefined8 FUN_1801c3bda(undefined8 param_1,int *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(longlong *)(*(longlong *)(param_3 + 0x20) + 0x20) != 0) ||
     (cVar1 = FUN_1800fff6e(param_1,param_3,0), cVar1 != '\0')) {
    iVar2 = param_2[2];
    if ((iVar2 < *param_2) || (param_2[1] <= iVar2)) {
      if (0 < *(int *)(param_3 + 0x28)) {
        cVar1 = FUN_18014d0ad(*(undefined4 *)(param_3 + 0x1c));
        if (cVar1 != '\0') {
          FUN_18014d768(param_3);
          param_2[2] = param_2[2] + 1;
          goto LAB_1801c3c44;
        }
        iVar2 = param_2[2];
      }
      param_2[2] = iVar2 + 1;
    }
    else {
      cVar1 = FUN_1801c3c94(param_1,param_3);
      param_2[2] = param_2[2] + 1;
      if (cVar1 != '\0') {
LAB_1801c3c44:
        return **(undefined8 **)(param_3 + 0x30);
      }
    }
  }
  iVar2 = *(int *)(param_3 + 0x38) + 1;
  lVar3 = *(longlong *)(param_3 + 0x20);
  if (*(int *)(lVar3 + 0x28) <= iVar2) {
    do {
      if (*(longlong *)(lVar3 + 0x20) == 0) {
        return 0;
      }
      FUN_18014d7a9();
      iVar2 = *(int *)(lVar3 + 0x38) + 1;
      lVar3 = *(longlong *)(lVar3 + 0x20);
    } while (*(int *)(lVar3 + 0x28) <= iVar2);
  }
  return *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8);
}

