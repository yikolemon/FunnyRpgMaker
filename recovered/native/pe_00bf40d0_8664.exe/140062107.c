/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140062107 */

void FUN_140062107(longlong param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x59) != '\0') {
    uVar4 = (ulonglong)*(ushort *)(lVar1 + 2);
    lVar2 = *(longlong *)(lVar1 + 8);
    lVar3 = *(longlong *)(lVar1 + 0x10);
    *(int *)(lVar2 + uVar4 * 8) = param_2 >> 10;
    *(int *)(lVar2 + 4 + uVar4 * 8) = param_3 >> 10;
    *(char *)(lVar3 + uVar4) = (param_4 == '\0') + '\x01';
  }
  *(short *)(lVar1 + 2) = *(short *)(lVar1 + 2) + 1;
  return;
}

