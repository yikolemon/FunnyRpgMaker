/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140077e3b */

void FUN_140077e3b(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  int iVar4;
  
  puVar3 = (ulonglong *)FUN_140011866();
  iVar1 = FUN_1401934d4(*puVar3 | 1,param_1,param_2,param_3,0,param_4);
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (param_1 != 0) {
    iVar4 = (int)param_2 + -1;
    if ((int)param_2 <= iVar2) {
      iVar2 = iVar4;
    }
    if (iVar1 < 0) {
      iVar2 = iVar4;
    }
    *(undefined1 *)(param_1 + iVar2) = 0;
  }
  return;
}

