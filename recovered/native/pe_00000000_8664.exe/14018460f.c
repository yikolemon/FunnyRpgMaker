/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018460f */

undefined8 FUN_14018460f(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = param_3;
  param_1[2] = *(longlong *)(param_2 + 0x30);
  param_1[0x410] = (longlong)param_1 + 0x2074;
  param_1[0x40f] = (longlong)param_1 + 0x2074;
  *(undefined4 *)((longlong)param_1 + 0x2074) = 0;
  uVar3 = FUN_14018448e(param_3);
  if ((int)uVar3 == 0) {
    uVar1 = FUN_14012db43(param_3);
    *(undefined4 *)(param_1 + 0xe) = uVar1;
    param_1[9] = (longlong)FUN_140184979;
    param_1[10] = (longlong)&LAB_1401849c1;
    param_1[0xb] = *(longlong *)(param_3 + 0x30);
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[3] = (longlong)param_1 + 0x1074;
    iVar2 = FUN_1401849c6(param_1 + 3,0xfffffff1);
    if ((iVar2 != 0) || (uVar3 = 0, param_1[3] == 0)) {
      uVar3 = 3;
    }
  }
  return uVar3;
}

