/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043a4d2 */

void __fastcall FUN_0043a4d2(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  
  uVar1 = *param_2;
  uVar5 = uVar1 & 0xffff;
  if (uVar5 < *(ushort *)(param_1 + 0x28)) {
    iVar2 = 0;
    if ((*(byte *)(param_1 + 0x148) & 1) != 0) {
      iVar3 = (**(code **)(param_1 + 0x1dc))
                        (param_1,*(undefined4 *)(*(int *)(param_1 + 0x30) + uVar5 * 8),
                         *(undefined4 *)(*(int *)(param_1 + 0x30) + 4 + uVar5 * 8));
      iVar2 = (**(code **)(param_1 + 0x1d0))(param_1,iVar3,0);
      iVar2 = iVar2 - iVar3;
    }
    (**(code **)(param_1 + 0x1e8))(param_1,param_1 + 0x28,uVar5,iVar2);
    uVar4 = (undefined2)uVar1;
    *(undefined2 *)(param_1 + 0xe8) = uVar4;
    *(undefined2 *)(param_1 + 0xea) = uVar4;
  }
  else if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
  }
  return;
}

