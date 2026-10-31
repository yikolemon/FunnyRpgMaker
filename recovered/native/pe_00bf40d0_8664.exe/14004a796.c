/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004a796 */

undefined8 FUN_14004a796(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_7b8 [32];
  undefined8 local_798;
  undefined8 local_790;
  undefined1 local_788;
  undefined4 local_780;
  code *local_778;
  undefined1 local_770 [64];
  int local_730;
  undefined1 local_714;
  undefined1 local_712;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_7b8;
  lVar1 = *(longlong *)(param_1 + 0x2a0);
  *param_2 = 0;
  local_798 = *(undefined8 *)(param_1 + 0x248);
  local_790 = *(undefined8 *)(param_1 + 0x2e0);
  local_778 = FUN_140049fcf;
  local_780 = 0;
  local_788 = 0;
  uVar2 = (*(code *)**(undefined8 **)(lVar1 + 0x18))(local_770,param_1,0,0);
  if ((int)uVar2 == 0) {
    local_712 = 1;
    local_714 = 0;
    local_fc = *(undefined4 *)(param_1 + 0x220);
    local_f8 = *(undefined8 *)(param_1 + 0x228);
    uStack_f0 = *(undefined8 *)(param_1 + 0x230);
    local_e8 = *(undefined8 *)(param_1 + 0x238);
    local_50 = *(undefined8 *)(param_1 + 0x2f8);
    local_48 = *(undefined4 *)(param_1 + 0x2f0);
    *param_2 = 0;
    if (0 < *(int *)(param_1 + 0x240)) {
      uVar3 = 0;
      do {
        FUN_140049fcf((longlong)local_770,uVar3);
        if ((uVar3 == 0) || (*param_2 < local_730)) {
          *param_2 = local_730;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(param_1 + 0x240));
    }
    (**(code **)(*(longlong *)(lVar1 + 0x18) + 8))(local_770);
    uVar2 = 0;
  }
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_7b8)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_7b8);
}

