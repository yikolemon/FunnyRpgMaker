/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a6b70 */

int FUN_1802a6b70(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *param_2;
  iVar2 = (uint)*param_1 - (uint)uVar1;
  if (iVar2 == 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      if (uVar1 == 0) break;
      uVar1 = param_2[1];
      param_2 = param_2 + 1;
      iVar2 = (uint)*(ushort *)(lVar3 + (longlong)param_2) - (uint)uVar1;
    } while (iVar2 == 0);
  }
  return (iVar2 >> 0x1f) - (-iVar2 >> 0x1f);
}

