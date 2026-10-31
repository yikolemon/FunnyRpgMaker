/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017e6c1 */

int FUN_14017e6c1(longlong param_1,undefined1 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_e8 [32];
  int local_c8 [34];
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  iVar3 = 0;
  piVar4 = local_c8;
  do {
    while( true ) {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 4) * iVar3;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 4) * param_3;
      *(undefined4 *)(param_1 + 0x38) = 0;
      cVar1 = FUN_14017e8ed(param_1,param_2);
      if (cVar1 == '\0') break;
      iVar2 = *(int *)(param_1 + 0x38);
      if (iVar2 != 0x62) goto LAB_14017e762;
      if (iVar3 == param_3) {
        iVar2 = 0x62;
        goto LAB_14017e762;
      }
      *piVar4 = iVar3;
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + param_3 + 1 >> 1;
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_14017e9f0(param_1);
    }
    if (piVar4 == local_c8) {
      iVar2 = 0;
LAB_14017e762:
      if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_e8)) {
        return iVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_140188a00(local_40 ^ (ulonglong)auStack_e8);
    }
    param_3 = iVar3 + -1;
    iVar3 = piVar4[-1];
    piVar4 = piVar4 + -1;
  } while( true );
}

