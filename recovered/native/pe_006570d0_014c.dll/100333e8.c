/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100333e8 */

int * FUN_100333e8(int *param_1,int param_2,char param_3,uint param_4)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined1 uStack_18;
  char local_17;
  char local_16 [2];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&uStack_18;
  FUN_1003325a(0x5c);
  FUN_1003325a((int)param_3);
  local_16[0] = '0';
  local_16[1] = '0';
  pcVar2 = local_16 + 1;
  do {
    *pcVar2 = "0123456789abcdef"[param_4 & 0xf];
    param_4 = param_4 >> 4;
    pcVar2 = pcVar2 + -1;
  } while (param_4 != 0);
  bVar5 = false;
  pcVar2 = local_16;
  do {
    iVar4 = 0;
    if (param_2 != 0) {
      local_17 = *pcVar2;
      iVar4 = param_1[1];
      uVar3 = iVar4 + 1;
      if ((uint)param_1[2] < uVar3) {
        (*(code *)param_1[3])(param_1,uVar3);
        iVar4 = param_1[1];
        uVar3 = iVar4 + 1;
      }
      param_1[1] = uVar3;
      *(char *)(*param_1 + iVar4) = local_17;
      iVar4 = param_2 + -1;
    }
    bVar1 = !bVar5;
    bVar5 = true;
    pcVar2 = local_16 + 1;
    param_2 = iVar4;
  } while (bVar1);
  if (DAT_10388d00 == (local_14 ^ (uint)&uStack_18)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

