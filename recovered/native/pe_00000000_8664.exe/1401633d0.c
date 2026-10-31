/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401633d0 */

void FUN_1401633d0(longlong param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x5c) != '\0') {
    uVar5 = (ulonglong)*(ushort *)(lVar1 + 2);
    lVar2 = *(longlong *)(lVar1 + 8);
    lVar3 = *(longlong *)(lVar1 + 0x10);
    iVar4 = FUN_14012e438(param_2);
    *(int *)(lVar2 + uVar5 * 8) = iVar4 >> 0x10;
    iVar4 = FUN_14012e438(param_3);
    *(int *)(lVar2 + 4 + uVar5 * 8) = iVar4 >> 0x10;
    *(char *)(lVar3 + uVar5) = (param_4 == '\0') + '\x01';
  }
  *(short *)(lVar1 + 2) = *(short *)(lVar1 + 2) + 1;
  return;
}

