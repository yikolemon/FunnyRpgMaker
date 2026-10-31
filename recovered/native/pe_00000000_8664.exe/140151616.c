/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140151616 */

undefined8 FUN_140151616(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar4 = 0xa1;
  if (lVar1 + 0x10U <= *(ulonglong *)(param_1 + 0x28)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    iVar3 = FUN_140151377(param_1,lVar1);
    uVar4 = 3;
    if (-1 < iVar3) {
      *(int *)(lVar2 + 0x74) = iVar3;
      iVar3 = FUN_140151377(param_1,lVar1 + 8);
      if (-1 < iVar3) {
        *(int *)(lVar2 + 0x70) = iVar3;
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

