/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075b127 */

void FUN_14075b127(undefined8 param_1,int param_2)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 unaff_RBX;
  int unaff_EBP;
  int *piVar5;
  int unaff_retaddr;
  
  uVar2 = (uint)((ulonglong)unaff_RBX >> 0x20);
  piVar5 = (int *)(ulonglong)uVar2;
  uVar3 = (uint)(short)piVar5[2];
  if (piVar5[(ulonglong)uVar3 * 2 + 3] == unaff_EBP) {
    uVar2 = uVar2 + uVar3 * 8 + 0xc;
  }
  else {
    iVar4 = (int)((ulonglong)((longlong)(int)uVar3 * (longlong)param_2) >> 0x20);
    uVar3 = uVar3 + (iVar4 - (iVar4 >> 0x1f)) * -6;
    *(short *)(piVar5 + 2) = (short)uVar3;
    uVar2 = uVar2 + 0xc + uVar3 * 8;
    piVar5[(ulonglong)uVar3 * 2 + 3] = unaff_EBP;
    piVar5[(ulonglong)uVar3 * 2 + 4] = 0;
  }
  if (unaff_retaddr == -1) {
    psVar1 = (short *)((ulonglong)uVar2 + 6);
    *psVar1 = *psVar1 + 1;
    piVar5[1] = piVar5[1] + 1;
  }
  else {
    psVar1 = (short *)((ulonglong)uVar2 + 4);
    *psVar1 = *psVar1 + 1;
    *piVar5 = *piVar5 + 1;
  }
  return;
}

