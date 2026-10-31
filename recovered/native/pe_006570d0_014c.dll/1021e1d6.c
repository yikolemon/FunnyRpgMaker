/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021e1d6 */

int __fastcall FUN_1021e1d6(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_98;
  int local_94 [32];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_98;
  piVar3 = local_94;
  iVar4 = 0;
  local_98 = param_2;
  do {
    while( true ) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 4) * iVar4;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 4) * param_3;
      *(undefined4 *)(param_1 + 0x24) = 0;
      cVar1 = FUN_1021e398();
      if (cVar1 != '\0') break;
      if (*(int *)(param_1 + 0x48) != 0) {
        FUN_1021e473();
      }
      if (piVar3 == local_94) {
        iVar2 = 0;
LAB_1021e265:
        if (DAT_10388d00 == (local_14 ^ (uint)&local_98)) {
          return iVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_102283e0();
      }
      param_3 = iVar4 + -1;
      iVar4 = piVar3[-1];
      piVar3 = piVar3 + -1;
    }
    iVar2 = *(int *)(param_1 + 0x24);
    if (iVar2 != 0x62) goto LAB_1021e265;
    if (iVar4 == param_3) {
      iVar2 = 0x62;
      goto LAB_1021e265;
    }
    *piVar3 = iVar4;
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + param_3 + 1 >> 1;
  } while( true );
}

