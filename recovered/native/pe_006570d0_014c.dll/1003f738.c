/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003f738 */

void FUN_1003f738(undefined4 param_1,int param_2,int *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_38 [4];
  int *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint *puStack_28;
  uint local_20 [2];
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar1 = *(uint *)(param_2 + 0xc);
  if (uVar1 < 100) {
    bVar2 = (byte)((uVar1 * 0xcd & 0xffff) >> 0xb);
    iVar3 = param_3[1];
    uVar4 = iVar3 + 1;
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar3 = param_3[1];
      uVar4 = iVar3 + 1;
    }
    param_3[1] = uVar4;
    *(byte *)(*param_3 + iVar3) = bVar2 | 0x30;
    iVar3 = param_3[1];
    uVar4 = iVar3 + 1;
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar3 = param_3[1];
      uVar4 = iVar3 + 1;
    }
    param_3[1] = uVar4;
    *(byte *)(*param_3 + iVar3) = (char)uVar1 + bVar2 * -10 | 0x30;
  }
  else {
    local_34 = param_3;
    puStack_28 = local_20;
    uStack_2c = 0;
    local_30 = 1;
    local_20[0] = uVar1;
    FUN_1002479c(local_38,&local_34,"{:02}",5,1,0,puStack_28);
  }
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

