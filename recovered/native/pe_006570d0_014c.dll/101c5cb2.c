/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c5cb2 */

int __fastcall FUN_101c5cb2(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  char local_21;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_38;
  local_2c = *param_1;
  uVar4 = param_3 & 0xffff;
  if ((int)param_3 < 1) {
    uVar4 = param_3;
  }
  local_28 = FUN_101c4a88(param_2);
  iVar1 = FUN_101c5ead(&local_1c,&local_20,&local_21);
  if (iVar1 == 0) {
    iVar1 = 8;
    if ((*(uint *)(param_2 + 4) < local_1c) || (*(uint *)(param_2 + 4) - local_1c < local_20))
    goto LAB_101c5d3a;
    local_38 = local_20;
    iVar1 = FUN_101c461e(param_2,local_1c + local_28);
    if ((iVar1 == 0) &&
       (local_30 = param_2, uVar3 = FUN_101c21f6(local_2c,local_38,&local_18), iVar2 = local_30,
       iVar1 = local_18, param_2 = iVar2, local_18 == 0)) {
      local_34 = uVar3;
      iVar1 = FUN_101c4659(local_30,uVar3,local_38);
      param_2 = local_30;
      if (iVar1 == 0) {
        pcVar5 = "t1cid";
        if (local_21 == '\0') {
          pcVar5 = "type1";
        }
        iVar1 = FUN_101c602f(local_38,(int)uVar4 >> 0x1f & uVar4,pcVar5,param_4);
      }
      else {
        FUN_101c0017(local_2c,local_34);
        param_2 = iVar2;
      }
    }
  }
  if (((char)iVar1 == '\x02') && (iVar2 = FUN_101c461e(param_2,local_28), iVar2 != 0)) {
    iVar1 = iVar2;
  }
LAB_101c5d3a:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar1;
}

