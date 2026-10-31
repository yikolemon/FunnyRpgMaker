/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140048708 */

int FUN_140048708(longlong param_1,int param_2,uint param_3,ulonglong param_4,
                 undefined1 (*param_5) [32])

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_7c8 [32];
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined1 local_798;
  undefined4 local_790;
  code *local_788;
  undefined1 local_778 [64];
  int local_738;
  undefined1 local_71c;
  undefined1 local_71a;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_7c8;
  if ((param_4 & 0x10) == 0) {
    local_7a8 = *(undefined8 *)(param_1 + 0x248);
    local_7a0 = *(undefined8 *)(param_1 + 0x2e0);
    local_788 = FUN_140049fcf;
    local_790 = 0;
    local_798 = 0;
    iVar1 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x2a0) + 0x18))
                      (local_778,param_1,0,0);
    if (iVar1 != 0) goto LAB_140048859;
    local_71a = 1;
    local_71c = 0;
    local_104 = *(undefined4 *)(param_1 + 0x220);
    local_100 = *(undefined8 *)(param_1 + 0x228);
    uStack_f8 = *(undefined8 *)(param_1 + 0x230);
    local_f0 = *(undefined8 *)(param_1 + 0x238);
    local_58 = *(undefined8 *)(param_1 + 0x2f8);
    local_50 = *(undefined4 *)(param_1 + 0x2f0);
    iVar1 = 0;
    if (param_3 == 0) goto LAB_140048859;
    uVar4 = 0;
    do {
      iVar1 = FUN_140049fcf((longlong)local_778,param_2 + (int)uVar4);
      iVar3 = 0;
      if (iVar1 == 0) {
        uVar2 = FUN_140021867(local_738);
        iVar3 = (int)uVar2 >> 0x10;
      }
      *(int *)(*param_5 + uVar4 * 4) = iVar3;
      uVar4 = uVar4 + 1;
    } while (param_3 != uVar4);
  }
  else if (param_3 != 0) {
    iVar1 = 0;
    FUN_1400b3c00(param_5,0,(ulonglong)param_3 << 2);
    goto LAB_140048859;
  }
  iVar1 = 0;
LAB_140048859:
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStack_7c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStack_7c8);
  }
  return iVar1;
}

