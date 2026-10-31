/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100334ab */

int * FUN_100334ab(int *param_1,int param_2,char param_3,uint param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_18 [3];
  undefined1 local_15;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_18;
  FUN_1003325a(0x5c);
  FUN_1003325a((int)param_3);
  pcVar1 = (char *)((int)&local_14 + 3);
  local_14 = 0x30303030;
  do {
    *pcVar1 = "0123456789abcdef"[param_4 & 0xf];
    param_4 = param_4 >> 4;
    pcVar1 = pcVar1 + -1;
  } while (param_4 != 0);
  iVar4 = 0;
  do {
    iVar3 = 0;
    if (param_2 != 0) {
      local_15 = *(undefined1 *)((int)&local_14 + iVar4);
      iVar3 = param_1[1];
      uVar2 = iVar3 + 1;
      if ((uint)param_1[2] < uVar2) {
        (*(code *)param_1[3])(param_1,uVar2);
        iVar3 = param_1[1];
        uVar2 = iVar3 + 1;
      }
      param_1[1] = uVar2;
      *(undefined1 *)(*param_1 + iVar3) = local_15;
      iVar3 = param_2 + -1;
    }
    iVar4 = iVar4 + 1;
    param_2 = iVar3;
  } while (iVar4 != 4);
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_18)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

