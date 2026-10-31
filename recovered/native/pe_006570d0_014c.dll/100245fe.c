/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100245fe */

void FUN_100245fe(uint param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_2c [21];
  undefined1 local_17 [3];
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_2c;
  if (param_1 < 1000) {
    uVar4 = (param_1 & 0xffff) / 100;
    iVar5 = param_1 + uVar4 * -100;
    iVar2 = param_2[1];
    uVar3 = iVar2 + 1;
    if ((uint)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2,uVar3);
      iVar2 = param_2[1];
      uVar3 = iVar2 + 1;
    }
    param_2[1] = uVar3;
    *(byte *)(*param_2 + iVar2) = (byte)uVar4 | 0x30;
    bVar1 = (byte)((iVar5 * 0xcd & 0xffffU) >> 0xb);
    iVar2 = param_2[1];
    uVar3 = iVar2 + 1;
    if ((uint)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2,uVar3);
      iVar2 = param_2[1];
      uVar3 = iVar2 + 1;
    }
    param_2[1] = uVar3;
    *(byte *)(*param_2 + iVar2) = bVar1 | 0x30;
    iVar2 = param_2[1];
    uVar3 = iVar2 + 1;
    if ((uint)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2,uVar3);
      iVar2 = param_2[1];
      uVar3 = iVar2 + 1;
    }
    param_2[1] = uVar3;
    *(byte *)(*param_2 + iVar2) = (char)iVar5 + bVar1 * -10 | 0x30;
  }
  else {
    local_14 = FUN_1002472e(auStack_2c,param_1,0x15);
    FUN_1001909c(local_14,local_17);
  }
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

