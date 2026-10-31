/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801eecfb */

void FUN_1801eecfb(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x3c) < iVar4) {
    uVar2 = 0x81;
  }
  else {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar4;
    if (*(ushort *)(param_1 + 0x18c) < *(ushort *)(param_1 + 0x40)) {
      if (iVar4 != 0) {
        do {
          param_2 = param_2 + -2;
          uVar1 = *param_2;
          if (uVar1 < *(ushort *)(param_1 + 0x78)) {
            iVar3 = (**(code **)(param_1 + 0x2d8))
                              (param_1,*(int *)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar1 * 8
                                               ) -
                                       *(int *)(*(longlong *)(param_1 + 0x50) +
                                               (ulonglong)*(ushort *)(param_1 + 0x18c) * 8),
                               *(int *)(*(longlong *)(param_1 + 0x88) + 4 + (ulonglong)uVar1 * 8) -
                               *(int *)(*(longlong *)(param_1 + 0x50) + 4 +
                                       (ulonglong)*(ushort *)(param_1 + 0x18c) * 8));
            (**(code **)(param_1 + 0x2f0))(param_1,(ushort *)(param_1 + 0x78),uVar1,-iVar3);
          }
          else if (*(char *)(param_1 + 0x2c6) != '\0') {
            *(undefined4 *)(param_1 + 0x20) = 0x86;
            return;
          }
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      goto LAB_1801eedb2;
    }
    uVar2 = 0x86;
  }
  if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
LAB_1801eedb2:
  *(undefined4 *)(param_1 + 0x1a4) = 1;
  return;
}

