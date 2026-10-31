/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180155ad4 */

ulonglong FUN_180155ad4(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (*(char *)(*param_1 + 0x8d) == '\x01') {
    uVar4 = FUN_1801476ea();
    return uVar4;
  }
  uVar2 = FUN_180155a37();
  uVar1 = *(uint *)(param_1 + 3);
  while( true ) {
    uVar4 = (ulonglong)uVar2;
    if ((int)uVar1 <= (int)uVar2) break;
    iVar3 = FUN_180156308(param_1,uVar4);
    if (iVar3 != 0) break;
    uVar2 = FUN_180155a37(param_1,uVar4);
  }
  uVar5 = (ulonglong)uVar1;
  if ((int)uVar2 < (int)uVar1) {
    uVar5 = uVar4;
  }
  return uVar5;
}

