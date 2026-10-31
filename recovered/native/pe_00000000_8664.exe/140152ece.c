/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140152ece */

uint FUN_140152ece(undefined8 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [44];
  byte local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  iVar1 = FUN_14012d656(*param_1,local_1c);
  uVar2 = 0;
  if ((iVar1 == 0) && ((ulonglong)*(byte *)((longlong)param_1 + 0x14) != 0)) {
    uVar2 = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar2 << 8 | (uint)local_1c[uVar3];
      uVar3 = uVar3 + 1;
    } while (*(byte *)((longlong)param_1 + 0x14) != uVar3);
  }
  *param_2 = iVar1;
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

