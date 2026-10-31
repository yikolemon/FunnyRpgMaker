/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140086fb0 */

undefined8
FUN_140086fb0(longlong param_1,undefined8 param_2,longlong param_3,byte *param_4,longlong *param_5,
             LPWSTR param_6,LPWSTR param_7,longlong *param_8)

{
  byte *pbVar1;
  int iVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  *param_5 = param_3;
  *param_8 = (longlong)param_6;
  pbVar1 = (byte *)*param_5;
  while( true ) {
    if (pbVar1 == param_4) {
      return 0;
    }
    if ((param_6 == param_7) ||
       (iVar2 = FUN_140088b60(param_6,pbVar1,(longlong)param_4 - (longlong)pbVar1,local_res18,
                              (UINT *)(param_1 + 0x10)), iVar2 == -2)) break;
    if (iVar2 == -1) {
      return 2;
    }
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    *param_5 = *param_5 + (longlong)iVar2;
    *param_8 = *param_8 + 2;
    pbVar1 = (byte *)*param_5;
    param_6 = (LPWSTR)*param_8;
  }
  return 1;
}

