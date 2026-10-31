/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003f934 */

void FUN_1003f934(undefined4 param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_38 [4];
  int *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint *puStack_28;
  undefined4 uStack_24;
  uint local_20 [2];
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar2 = FUN_1003b6df();
  if (uVar2 < 100) {
    bVar1 = (byte)((uVar2 * 0xcd & 0xffff) >> 0xb);
    iVar3 = param_3[1];
    uVar4 = iVar3 + 1;
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar3 = param_3[1];
      uVar4 = iVar3 + 1;
    }
    param_3[1] = uVar4;
    *(byte *)(*param_3 + iVar3) = bVar1 | 0x30;
    iVar3 = param_3[1];
    uVar4 = iVar3 + 1;
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar3 = param_3[1];
      uVar4 = iVar3 + 1;
    }
    param_3[1] = uVar4;
    *(byte *)(*param_3 + iVar3) = (char)uVar2 + bVar1 * -10 | 0x30;
  }
  else {
    local_34 = param_3;
    puStack_28 = local_20;
    uStack_2c = 0;
    local_30 = 1;
    local_20[0] = uVar2;
    FUN_1002479c(local_38,&local_34,"{:02}",5,1,0,puStack_28,uStack_24);
  }
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

