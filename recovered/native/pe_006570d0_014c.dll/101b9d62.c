/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b9d62 */

void FUN_101b9d62(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  undefined1 *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  iVar4 = *param_1 + -1 + (uint)(*param_1 == 0);
  local_18 = &stack0x0000000c;
  FUN_100fb9e6(param_2,local_18);
  iVar3 = *param_1 + -1 + (uint)(*param_1 == 0);
  iVar6 = iVar3;
  if (iVar4 < iVar3) {
    do {
      local_1c = iVar6;
      pcVar1 = (char *)(param_1[2] + iVar4);
      iVar4 = iVar4 + 1;
      if (*pcVar1 == '\n') {
        iVar6 = param_1[0x47];
        if (iVar6 == param_1[0x48]) {
          if (iVar6 == 0) {
            iVar3 = 8;
          }
          else {
            iVar3 = iVar6 / 2 + iVar6;
          }
          iVar5 = iVar6 + 1;
          if (iVar6 + 1 < iVar3) {
            iVar5 = iVar3;
          }
          iVar2 = FUN_100fa1fa(iVar5 * 4);
          if (param_1[0x49] != 0) {
            FUN_1025b2d0(iVar2,param_1[0x49],param_1[0x47] << 2);
            FUN_100fa2cb(param_1[0x49]);
          }
          param_1[0x49] = iVar2;
          param_1[0x48] = iVar5;
          iVar6 = param_1[0x47];
          iVar3 = local_1c;
        }
        else {
          iVar2 = param_1[0x49];
        }
        *(int *)(iVar2 + iVar6 * 4) = iVar4;
        param_1[0x47] = param_1[0x47] + 1;
      }
      iVar6 = local_1c;
    } while (iVar4 < iVar3);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

