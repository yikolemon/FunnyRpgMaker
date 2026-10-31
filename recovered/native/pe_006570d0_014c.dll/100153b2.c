/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100153b2 */

void __thiscall FUN_100153b2(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = param_3 * 8 + uVar1;
  *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uint)CARRY4(param_3 * 8,uVar1);
  if (param_3 != 0) {
    uVar1 = uVar1 >> 3 & 0x3f;
    do {
      uVar3 = 0x40 - uVar1;
      iVar2 = uVar1 + param_1 + 1;
      if (param_3 < uVar3) {
        thunk_FUN_10006e05(param_2,param_3,iVar2);
        return;
      }
      thunk_FUN_10006e05(param_2,uVar3,iVar2);
      FUN_100154c2(param_1 + 1);
      param_2 = param_2 + uVar3;
      uVar1 = 0;
      param_3 = param_3 - uVar3;
    } while (param_3 != 0);
  }
  return;
}

