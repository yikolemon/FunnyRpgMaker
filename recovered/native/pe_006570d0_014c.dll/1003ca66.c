/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003ca66 */

undefined4 __thiscall FUN_1003ca66(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  iVar3 = (*(int *)(param_2 + 0x14) - *(int *)(param_1 + 0x1c)) -
          (uint)(*(uint *)(param_2 + 0x10) < *(uint *)(param_1 + 0x18));
  uVar4 = 0;
  uVar1 = (uint)(99999999 < *(uint *)(param_2 + 0x10) - *(uint *)(param_1 + 0x18));
  iVar2 = -iVar3;
  if ((SBORROW4(0,iVar3) != SBORROW4(iVar2,uVar1)) == (int)(iVar2 - uVar1) < 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    local_18 = param_3[8];
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    local_28 = param_3[4];
    uStack_24 = param_3[5];
    uStack_20 = param_3[6];
    uStack_1c = param_3[7];
    lVar5 = FUN_1026a131(&local_38);
    if (lVar5 != -1) {
      local_3c = (uint)((ulonglong)lVar5 >> 0x20);
      lVar6 = FUN_1026a11e(&local_38);
      if (lVar6 != -1) {
        uVar4 = __alldiv(lVar6 - CONCAT44(local_3c,(int)lVar5),0x3c,0);
      }
    }
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_3c)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

