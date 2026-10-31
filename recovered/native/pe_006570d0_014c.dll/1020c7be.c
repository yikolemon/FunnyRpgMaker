/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020c7be */

void __fastcall FUN_1020c7be(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_38;
  local_18 = 1;
  local_38 = *(undefined8 *)(param_1 + 0x2dcc);
  cVar1 = FUN_1000e094();
  if (cVar1 == '\0') {
    FUN_1020b5dc(*(undefined4 *)(param_1 + 0x2dd8));
  }
  FUN_1020cb0c(&local_30,param_2,param_3);
  (*(code *)**(undefined4 **)(param_1 + 4))(*(undefined4 **)(param_1 + 4),&local_38);
  *(undefined4 *)(param_1 + 0x2dd0) = local_2c;
  *(undefined4 *)(param_1 + 0x2dcc) = local_30;
  *(undefined4 *)(param_1 + 0x2db4) = param_2;
  *(undefined4 *)(param_1 + 0x2db8) = param_3;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

