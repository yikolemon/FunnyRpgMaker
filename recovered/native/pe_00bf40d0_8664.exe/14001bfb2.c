/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001bfb2 */

byte * FUN_14001bfb2(int *param_1,byte param_2,undefined8 *param_3,byte *param_4,byte param_5,
                    byte param_6)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  
  switch(param_5 & 3) {
  case 1:
    *param_1 = 1;
    break;
  case 2:
    param_1[6] = 1;
    break;
  case 3:
    param_1[5] = 1;
  }
  switch(param_6 | param_2) {
  case 1:
  case 5:
    bVar1 = *param_4;
    puVar3 = &DAT_14014e230;
    break;
  case 2:
  case 6:
    pbVar2 = (byte *)switchD_14001c1d2::caseD_0
                               (param_1,(uint *)&DAT_14014d0d0,param_3,(undefined8 *)param_4);
    return pbVar2;
  case 3:
    pbVar2 = (byte *)switchD_14001c1d2::caseD_0
                               (param_1,(uint *)&DAT_14014d0e0,param_3,(undefined8 *)param_4);
    return pbVar2;
  case 4:
    bVar1 = *param_4;
    puVar3 = &DAT_14014d230;
    break;
  default:
    return param_4 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014001c037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pbVar2 = (byte *)(**(code **)(puVar3 + (ulonglong)bVar1 * 0x10 + 8))
                             (param_1,puVar3 + (ulonglong)bVar1 * 0x10);
  return pbVar2;
}

