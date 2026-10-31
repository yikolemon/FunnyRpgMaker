/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400821ff */

ulonglong FUN_1400821ff(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  param_1[1] = param_2;
  *param_1 = param_3;
  param_1[2] = *(undefined8 *)(param_2 + 0x30);
  param_1[0x410] = (longlong)param_1 + 0x2074;
  param_1[0x40f] = (longlong)param_1 + 0x2074;
  *(undefined4 *)((longlong)param_1 + 0x2074) = 0;
  uVar2 = FUN_14008207e(param_3);
  if ((int)uVar2 == 0) {
    uVar1 = FUN_140020f72((longlong)param_3);
    *(undefined4 *)(param_1 + 0xe) = uVar1;
    param_1[9] = FUN_140082569;
    param_1[10] = &LAB_1400825b1;
    param_1[0xb] = param_3[6];
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[3] = (longlong)param_1 + 0x1074;
    uVar2 = FUN_1400825b6((longlong)(param_1 + 3),0xfffffff1);
    if (((int)uVar2 != 0) || (uVar2 = 0, param_1[3] == 0)) {
      uVar2 = 3;
    }
  }
  return uVar2;
}

