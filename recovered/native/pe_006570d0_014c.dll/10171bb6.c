/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10171bb6 */

bool __fastcall FUN_10171bb6(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0xac);
    uVar3 = *(uint *)(param_1 + 0xb0);
  }
  else {
    iVar2 = *(int *)(param_1 + 0xac);
    uVar3 = *(uint *)(param_1 + 0xb0);
    iVar4 = uVar3 - iVar2;
    iVar5 = param_3 - iVar4;
    if (iVar5 != 0 && iVar4 <= param_3) {
      FUN_1025b2d0(param_2,iVar2,iVar4);
      iVar2 = (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_1 + 0x1c),param_2 + iVar4,iVar5);
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xb0);
      return iVar2 == iVar5;
    }
  }
  bVar1 = (uint)(iVar2 + param_3) <= uVar3;
  if (bVar1) {
    FUN_1025b2d0(param_2,iVar2,param_3);
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + param_3;
  }
  return bVar1;
}

