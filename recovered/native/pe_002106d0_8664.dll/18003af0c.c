/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003af0c */

void FUN_18003af0c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  iVar1 = (int)param_1[2];
  if (-1 < (longlong)iVar1) {
    FUN_180018bde(param_1[1],param_1[3],(longlong)iVar1 + param_1[3]);
    return;
  }
  if (*(char *)(*param_1 + 0xc) == '\x01') {
    lVar2 = param_1[1];
    uVar5 = iVar1 + *(int *)(lVar2 + 8);
    uVar4 = 0;
    if (0 < (int)uVar5) {
      uVar4 = (ulonglong)uVar5;
    }
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (uVar3 < uVar4) {
      (**(code **)(lVar2 + 0x18))(lVar2,uVar4);
      uVar3 = *(ulonglong *)(lVar2 + 0x10);
    }
    if (uVar4 < uVar3) {
      uVar3 = uVar4;
    }
    *(ulonglong *)(lVar2 + 8) = uVar3;
  }
  return;
}

