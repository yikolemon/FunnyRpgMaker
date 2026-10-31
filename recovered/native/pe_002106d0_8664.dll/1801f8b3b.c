/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f8b3b */

undefined8 FUN_1801f8b3b(longlong param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = (longlong)*(int *)(param_1 + 0x1e8) + (longlong)*(int *)(param_1 + 500);
  iVar3 = (int)lVar4;
  *(int *)(param_1 + 0x1e8) = iVar3;
  if (iVar3 < *(int *)(param_1 + 0x1ec)) {
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x1e0) + lVar4);
    *(byte *)(param_1 + 0x1f0) = bVar1;
    cVar2 = (&DAT_1803376a0)[bVar1];
    *(int *)(param_1 + 500) = (int)cVar2;
    if ((bVar1 & 0xfe) == 0x40) {
      lVar4 = (longlong)iVar3 + 1;
      if (*(int *)(param_1 + 0x1ec) <= (int)lVar4) goto LAB_1801f8bae;
      *(uint *)(param_1 + 500) =
           2 - (uint)*(byte *)(*(longlong *)(param_1 + 0x1e0) + lVar4) * (int)cVar2;
    }
    return 0;
  }
LAB_1801f8bae:
  *(undefined4 *)(param_1 + 0x20) = 0x83;
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}

