/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a9370 */

int __thiscall FUN_100a9370(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int local_20;
  int local_1c [2];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  cVar1 = FUN_100628c6(param_2);
  if (cVar1 == '\0') {
    local_20 = (param_1[1] - *param_1 >> 4) * -0x55555555;
    FUN_100a9c0c(local_1c,param_2,&local_20);
    iVar2 = FUN_100aa4e4();
  }
  else {
    FUN_100a9d84(local_1c,param_2);
    iVar2 = *(int *)(local_1c[0] + 0x20) * 0x30 + *param_1;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

