/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c196f */

uint FUN_101c196f(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x5c), iVar1 != 0)) {
    uVar2 = (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1,param_2);
    uVar3 = 0;
    if (uVar2 < *(uint *)(param_1 + 0x10)) {
      uVar3 = uVar2;
    }
  }
  return uVar3;
}

