/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10277e73 */

void FUN_10277e73(undefined4 *param_1,undefined1 *param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  int local_14;
  int local_10;
  undefined4 uStack_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  uStack_c = 0;
  uVar2 = FUN_1028395e(*param_1,param_1[1],param_6,0,&local_14,param_4,param_5);
  bVar5 = local_14 == 0x2d;
  local_8 = local_10 + -1;
  iVar3 = param_3 - (uint)bVar5;
  if (param_3 == -1) {
    iVar3 = -1;
  }
  iVar3 = FUN_102837b4(param_2 + bVar5,iVar3,param_6,&local_14,uVar2,param_9,param_10);
  if (iVar3 == 0) {
    iVar3 = local_10 + -1;
    if ((iVar3 < -4) || (param_6 <= iVar3)) {
      FUN_102776b6(param_2,param_3,param_6,param_7,param_8,&local_14,1,param_10);
    }
    else {
      pcVar1 = param_2 + bVar5;
      if (local_8 < iVar3) {
        do {
          pcVar4 = pcVar1;
          pcVar1 = pcVar4 + 1;
        } while (*pcVar4 != '\0');
        pcVar4[-1] = '\0';
      }
      FUN_10277d0a(param_2,param_3,param_6,&local_14,1,param_10);
    }
  }
  else {
    *param_2 = 0;
  }
  return;
}

