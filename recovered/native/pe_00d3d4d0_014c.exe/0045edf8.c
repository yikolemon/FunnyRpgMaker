/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045edf8 */

int __fastcall FUN_0045edf8(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  iVar2 = *param_1;
  iVar3 = FUN_0041c6b3(param_1[7],1,param_1[2],param_2,iVar2,&local_18);
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
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

