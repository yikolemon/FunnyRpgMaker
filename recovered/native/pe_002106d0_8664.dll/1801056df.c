/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801056df */

void FUN_1801056df(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x15a8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x15b0);
    lVar3 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar2 + lVar3) + 0x31c) = 0xffffffff;
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if (*(longlong *)(param_1 + 0x29a0) != 0) {
    *(undefined8 *)(param_1 + 0x2998) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(param_1 + 0x29a0) = 0;
  }
  return;
}

