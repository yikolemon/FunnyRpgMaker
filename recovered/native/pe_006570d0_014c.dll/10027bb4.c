/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10027bb4 */

undefined4 * FUN_10027bb4(undefined4 *param_1,int *param_2,undefined1 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&uStack_18;
  iVar1 = param_2[1];
  uVar2 = iVar1 + 1;
  if ((uint)param_2[2] < uVar2) {
    (*(code *)param_2[3])(param_2,uVar2);
    iVar1 = param_2[1];
    uVar2 = iVar1 + 1;
  }
  param_2[1] = uVar2;
  *(undefined1 *)(*param_2 + iVar1) = 0x5c;
  iVar1 = param_2[1];
  uVar2 = iVar1 + 1;
  if ((uint)param_2[2] < uVar2) {
    (*(code *)param_2[3])(param_2,uVar2);
    iVar1 = param_2[1];
    uVar2 = iVar1 + 1;
  }
  param_2[1] = uVar2;
  *(undefined1 *)(*param_2 + iVar1) = param_3;
  uStack_18 = 0x30303030;
  pcVar3 = (char *)((int)&uStack_18 + 3);
  do {
    *pcVar3 = "0123456789abcdef"[param_4 & 0xf];
    param_4 = param_4 >> 4;
    pcVar3 = pcVar3 + -1;
  } while (param_4 != 0);
  FUN_1001909c(&uStack_18,&local_14);
  *param_1 = param_2;
  if (DAT_10388d00 == (local_14 ^ (uint)&uStack_18)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

