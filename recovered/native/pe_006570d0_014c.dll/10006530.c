/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10006530 */

void __thiscall FUN_10006530(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_40;
  undefined8 local_3c;
  int local_34;
  int *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_1000679b(&local_28,param_1 + 4,param_2);
  if ((char)local_28 == '\r') {
    iVar1 = *param_1;
    *param_1 = param_3;
    param_1[1] = param_1[1] + (iVar1 - param_3);
  }
  local_40 = param_1[4];
  local_3c = *(undefined8 *)(param_1 + 5);
  local_34 = param_1[7];
  local_30 = param_1;
  FUN_100067c4(&local_2c,&local_40,local_28,uStack_24,uStack_20,uStack_1c);
  param_1[4] = local_2c;
  if (DAT_10388d00 == (local_14 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

