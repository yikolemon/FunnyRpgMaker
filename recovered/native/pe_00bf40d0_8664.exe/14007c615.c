/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007c615 */

int FUN_14007c615(byte *param_1,byte param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_e8 [32];
  int local_c8 [34];
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStack_e8;
  iVar3 = 0;
  piVar4 = local_c8;
  do {
    while( true ) {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 4) * iVar3;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 4) * param_3;
      param_1[0x38] = 0;
      param_1[0x39] = 0;
      param_1[0x3a] = 0;
      param_1[0x3b] = 0;
      uVar2 = FUN_14007c841(param_1,(uint)param_2);
      if ((char)uVar2 == '\0') break;
      iVar1 = *(int *)(param_1 + 0x38);
      if (iVar1 != 0x62) goto LAB_14007c6b6;
      if (iVar3 == param_3) {
        iVar1 = 0x62;
        goto LAB_14007c6b6;
      }
      *piVar4 = iVar3;
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + param_3 + 1 >> 1;
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_14007c944((longlong)param_1);
    }
    if (piVar4 == local_c8) {
      iVar1 = 0;
LAB_14007c6b6:
      if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStack_e8)) {
        return iVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_140086440(local_40 ^ (ulonglong)auStack_e8);
    }
    param_3 = iVar3 + -1;
    iVar3 = piVar4[-1];
    piVar4 = piVar4 + -1;
  } while( true );
}

