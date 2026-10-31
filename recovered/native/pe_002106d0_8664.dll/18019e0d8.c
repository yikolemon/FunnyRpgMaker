/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019e0d8 */

byte * FUN_18019e0d8(undefined4 *param_1,byte param_2,undefined8 param_3,byte *param_4,byte param_5,
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
    puVar3 = &DAT_18044d230;
    break;
  case 2:
  case 6:
    pbVar2 = (byte *)switchD_18019e2f8::caseD_0(param_1,&DAT_18044c0d0);
    return pbVar2;
  case 3:
    pbVar2 = (byte *)switchD_18019e2f8::caseD_0(param_1,&DAT_18044c0e0);
    return pbVar2;
  case 4:
    bVar1 = *param_4;
    puVar3 = &DAT_18044c230;
    break;
  default:
    return param_4 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00018019e15d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pbVar2 = (byte *)(**(code **)(puVar3 + (ulonglong)bVar1 * 0x10 + 8))
                             (param_1,puVar3 + (ulonglong)bVar1 * 0x10);
  return pbVar2;
}

