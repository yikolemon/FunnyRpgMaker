/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140061320 */

void FUN_140061320(longlong param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x5c) != '\0') {
    uVar5 = (ulonglong)*(ushort *)(lVar1 + 2);
    lVar2 = *(longlong *)(lVar1 + 8);
    lVar3 = *(longlong *)(lVar1 + 0x10);
    uVar4 = FUN_140021867(param_2);
    *(int *)(lVar2 + uVar5 * 8) = (int)uVar4 >> 0x10;
    uVar4 = FUN_140021867(param_3);
    *(int *)(lVar2 + 4 + uVar5 * 8) = (int)uVar4 >> 0x10;
    *(char *)(lVar3 + uVar5) = (param_4 == '\0') + '\x01';
  }
  *(short *)(lVar1 + 2) = *(short *)(lVar1 + 2) + 1;
  return;
}

