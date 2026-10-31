/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004616f */

undefined8 FUN_14004616f(longlong param_1)

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
    cVar2 = (&DAT_1400f47c0)[bVar1];
    *(int *)(param_1 + 500) = (int)cVar2;
    if ((bVar1 & 0xfe) == 0x40) {
      lVar4 = (longlong)iVar3 + 1;
      if (*(int *)(param_1 + 0x1ec) <= (int)lVar4) goto LAB_1400461e2;
      *(uint *)(param_1 + 500) =
           2 - (uint)*(byte *)(*(longlong *)(param_1 + 0x1e0) + lVar4) * (int)cVar2;
    }
    return 0;
  }
LAB_1400461e2:
  *(undefined4 *)(param_1 + 0x20) = 0x83;
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}

