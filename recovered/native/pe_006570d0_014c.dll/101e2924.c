/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e2924 */

void __fastcall FUN_101e2924(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *param_2;
  uVar3 = uVar1 & 0xffff;
  if (uVar3 < *(ushort *)(param_1 + 0x44)) {
    uVar2 = param_2[1];
    uVar5 = uVar2 & 0xffff;
    if (uVar5 < *(ushort *)(param_1 + 0x28)) {
      iVar4 = (**(code **)(param_1 + 0x1dc))
                        (param_1,*(int *)(*(int *)(param_1 + 0x30) + uVar5 * 8) -
                                 *(int *)(*(int *)(param_1 + 0x4c) + uVar3 * 8),
                         *(int *)(*(int *)(param_1 + 0x30) + 4 + uVar5 * 8) -
                         *(int *)(*(int *)(param_1 + 0x4c) + 4 + uVar3 * 8));
      (**(code **)(param_1 + 0x1e8))(param_1,param_1 + 0x44,uVar1 & 0xffff,iVar4 / 2);
      (**(code **)(param_1 + 0x1e8))(param_1,param_1 + 0x28,uVar2 & 0xffff,-(iVar4 / 2));
      return;
    }
  }
  if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
  }
  return;
}

