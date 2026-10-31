/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140011472 */

undefined8 FUN_140011472(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 **local_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_1;
  uVar1 = (**(code **)(*param_3 + 8))(param_3);
  FUN_14000169c(local_40,uVar1);
  FUN_14000ed8c(local_20,local_40,&DAT_1401728dd);
  FUN_1400017de(local_40);
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x210) != 0) {
    FUN_14001190c(*(longlong *)(param_2 + 0x210),local_40,0,0);
    FUN_14001a45e(&local_58,local_40);
    FUN_1400017de(local_40);
  }
  if (*(longlong *)(param_2 + 0x218) != 0) {
    FUN_14001190c(*(longlong *)(param_2 + 0x218),local_40,0,0);
    FUN_14001a45e(&local_58,local_40);
    FUN_1400017de(local_40);
  }
  if (local_58 != lStack_50) {
    FUN_14000169c(local_b8,&DAT_140172045);
    FUN_1400198e7(local_78,&local_58,local_b8);
    FUN_140018136(local_98,"Run with ",local_78);
    FUN_14000ed8c(local_40,local_98," for more information.\n");
    pppuVar2 = local_40;
    if (0xf < local_28) {
      pppuVar2 = (undefined8 ***)local_40[0];
    }
    FUN_14000b1f8(local_20,pppuVar2,local_30);
    FUN_1400017de(local_40);
    FUN_1400017de(local_98);
    FUN_1400017de(local_78);
  }
  FUN_14000eeca(&local_58);
  return local_20;
}

