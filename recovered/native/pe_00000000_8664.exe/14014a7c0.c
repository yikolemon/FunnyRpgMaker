/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014a7c0 */

int FUN_14014a7c0(longlong param_1,int param_2,uint param_3,ulonglong param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_7c8 [32];
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined1 local_798;
  undefined4 local_790;
  code *local_788;
  undefined1 local_778 [64];
  undefined4 local_738;
  undefined1 local_71c;
  undefined1 local_71a;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_7c8;
  if ((param_4 & 0x10) == 0) {
    local_7a8 = *(undefined8 *)(param_1 + 0x248);
    local_7a0 = *(undefined8 *)(param_1 + 0x2e0);
    local_788 = FUN_14014c081;
    local_790 = 0;
    local_798 = 0;
    iVar1 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x2a0) + 0x18))
                      (local_778,param_1,0,0);
    if (iVar1 != 0) goto LAB_14014a911;
    local_71a = 1;
    local_71c = 0;
    local_104 = *(undefined4 *)(param_1 + 0x220);
    local_100 = *(undefined4 *)(param_1 + 0x228);
    uStack_fc = *(undefined4 *)(param_1 + 0x22c);
    uStack_f8 = *(undefined4 *)(param_1 + 0x230);
    uStack_f4 = *(undefined4 *)(param_1 + 0x234);
    local_f0 = *(undefined8 *)(param_1 + 0x238);
    local_58 = *(undefined8 *)(param_1 + 0x2f8);
    local_50 = *(undefined4 *)(param_1 + 0x2f0);
    iVar1 = 0;
    if (param_3 == 0) goto LAB_14014a911;
    uVar3 = 0;
    do {
      iVar1 = FUN_14014c081(local_778,param_2 + (int)uVar3);
      iVar2 = 0;
      if (iVar1 == 0) {
        iVar2 = FUN_14012e438(local_738);
        iVar2 = iVar2 >> 0x10;
      }
      *(int *)(param_5 + uVar3 * 4) = iVar2;
      uVar3 = uVar3 + 1;
    } while (param_3 != uVar3);
  }
  else if (param_3 != 0) {
    iVar1 = 0;
    FUN_1401c5830(param_5,0,(ulonglong)param_3 << 2);
    goto LAB_14014a911;
  }
  iVar1 = 0;
LAB_14014a911:
  if (DAT_140f17b40 != (local_38 ^ (ulonglong)auStack_7c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_38 ^ (ulonglong)auStack_7c8);
  }
  return iVar1;
}

