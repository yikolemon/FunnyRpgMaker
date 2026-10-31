/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407aa1db */

int FUN_1407aa1db(uint param_1,int param_2)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  FUN_1407aa254();
  if (*(short *)(uVar3 + 0xa18) == 99) {
    FUN_1407aa268(uVar3);
  }
  if (param_2 < 1000) {
    iVar2 = *(int *)(uVar3 + 0xa1c);
    while (999 < iVar2 + param_2) {
      FUN_1407aa268(uVar3);
      iVar2 = *(int *)(uVar3 + 0xa1c);
    }
    sVar1 = *(short *)(uVar3 + 0xa18);
    *(short *)(uVar3 + 0xa18) = sVar1 + 1;
    iVar2 = sVar1 * 0x10 + param_1;
  }
  else {
    *(undefined2 *)(uVar3 + 0xa18) = 0;
    *(undefined4 *)(uVar3 + 0xa1c) = 0;
    iVar2 = 0;
  }
  return iVar2;
}

