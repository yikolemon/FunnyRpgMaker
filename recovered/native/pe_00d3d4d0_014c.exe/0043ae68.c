/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043ae68 */

void __fastcall FUN_0043ae68(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  
  uVar1 = *param_2;
  uVar5 = uVar1 & 0xffff;
  if ((uVar5 < *(ushort *)(param_1 + 0x44)) &&
     (uVar2 = (uint)*(ushort *)(param_1 + 0xe8),
     *(ushort *)(param_1 + 0xe8) < *(ushort *)(param_1 + 0x28))) {
    if (*(short *)(param_1 + 0xf0) == 0) {
      *(undefined8 *)(*(int *)(param_1 + 0x48) + uVar5 * 8) =
           *(undefined8 *)(*(int *)(param_1 + 0x2c) + uVar2 * 8);
      (**(code **)(param_1 + 0x1ec))(param_1,param_1 + 0x44,uVar5,param_2[1]);
      *(undefined8 *)(*(int *)(param_1 + 0x4c) + uVar5 * 8) =
           *(undefined8 *)(*(int *)(param_1 + 0x48) + uVar5 * 8);
      uVar2 = (uint)*(ushort *)(param_1 + 0xe8);
    }
    iVar3 = (**(code **)(param_1 + 0x1dc))
                      (param_1,*(int *)(*(int *)(param_1 + 0x4c) + uVar5 * 8) -
                               *(int *)(*(int *)(param_1 + 0x30) + uVar2 * 8),
                       *(int *)(*(int *)(param_1 + 0x4c) + 4 + uVar5 * 8) -
                       *(int *)(*(int *)(param_1 + 0x30) + 4 + uVar2 * 8));
    (**(code **)(param_1 + 0x1e8))(param_1,param_1 + 0x44,uVar5,param_2[1] - iVar3);
    *(undefined2 *)(param_1 + 0xea) = *(undefined2 *)(param_1 + 0xe8);
    uVar4 = (undefined2)uVar1;
    *(undefined2 *)(param_1 + 0xec) = uVar4;
    if ((*(byte *)(param_1 + 0x148) & 1) != 0) {
      *(undefined2 *)(param_1 + 0xe8) = uVar4;
    }
  }
  else if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
  }
  return;
}

