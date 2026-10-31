/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017759e */

bool FUN_18017759e(longlong param_1,longlong param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar4 = *(longlong *)(param_1 + 0xc0);
    uVar3 = *(ulonglong *)(param_1 + 200);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0xc0);
    uVar3 = *(ulonglong *)(param_1 + 200);
    iVar2 = (int)uVar3 - (int)lVar4;
    iVar5 = param_3 - iVar2;
    if (iVar5 != 0 && iVar2 <= param_3) {
      FUN_1802a82f0(param_2,lVar4,(longlong)iVar2);
      iVar2 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x28),param_2 + iVar2,iVar5);
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 200);
      return iVar2 == iVar5;
    }
  }
  lVar6 = (longlong)param_3;
  bVar1 = (ulonglong)(lVar4 + lVar6) <= uVar3;
  if (bVar1) {
    FUN_1802a82f0(param_2,lVar4,lVar6);
    *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + lVar6;
  }
  return bVar1;
}

