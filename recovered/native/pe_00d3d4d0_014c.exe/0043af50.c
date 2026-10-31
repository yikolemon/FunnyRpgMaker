/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043af50 */

void __fastcall FUN_0043af50(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (*(int *)(param_1 + 0x24) < iVar1) {
    uVar2 = 0x81;
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar1;
    if (*(ushort *)(param_1 + 0xe8) < *(ushort *)(param_1 + 0x28)) {
      if (iVar1 != 0) {
        iVar4 = 0;
        do {
          uVar5 = (uint)*(ushort *)(param_2 + -4 + iVar4 * 4);
          if (uVar5 < *(ushort *)(param_1 + 0x44)) {
            iVar3 = (**(code **)(param_1 + 0x1dc))
                              (param_1,*(int *)(*(int *)(param_1 + 0x4c) + uVar5 * 8) -
                                       *(int *)(*(int *)(param_1 + 0x30) +
                                               (uint)*(ushort *)(param_1 + 0xe8) * 8),
                               *(int *)(*(int *)(param_1 + 0x4c) + 4 + uVar5 * 8) -
                               *(int *)(*(int *)(param_1 + 0x30) + 4 +
                                       (uint)*(ushort *)(param_1 + 0xe8) * 8));
            (**(code **)(param_1 + 0x1e8))(param_1,param_1 + 0x44,uVar5,-iVar3);
          }
          else if (*(char *)(param_1 + 0x1ce) != '\0') {
            *(undefined4 *)(param_1 + 0x10) = 0x86;
            return;
          }
          iVar4 = iVar4 + -1;
        } while (-iVar1 != iVar4);
      }
      goto LAB_0043b002;
    }
    uVar2 = 0x86;
  }
  if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = uVar2;
  }
LAB_0043b002:
  *(undefined4 *)(param_1 + 0x100) = 1;
  return;
}

