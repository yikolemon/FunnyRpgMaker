/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10207680 */

int __fastcall FUN_10207680(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  iVar2 = *param_1;
  iVar3 = FUN_101c00c3(param_1[7],1,param_1[2],param_2,iVar2,&local_18);
  *param_1 = iVar3;
  if (local_18 == 0) {
    if (((iVar2 != 0) && (iVar3 != iVar2)) && (0 < param_1[4])) {
      piVar4 = (int *)param_1[5];
      piVar1 = piVar4 + param_1[4];
      do {
        if (*piVar4 != 0) {
          *piVar4 = (*piVar4 - iVar2) + *param_1;
        }
        piVar4 = piVar4 + 1;
      } while (piVar4 < piVar1);
    }
    param_1[2] = param_2;
    local_18 = 0;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

