/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140062df4 */

uint FUN_140062df4(undefined8 *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 auStack_58 [32];
  byte *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  pbVar3 = (byte *)*param_1;
  local_38 = pbVar3;
  uVar1 = FUN_140062e9a(&local_38,param_2,10);
  uVar2 = 0;
  if (local_38 != pbVar3) {
    if ((local_38 < param_2) && (*local_38 == 0x23)) {
      pbVar3 = local_38 + 1;
      local_38 = pbVar3;
      uVar1 = FUN_140062e9a(&local_38,param_2,uVar1);
      if (local_38 == pbVar3) goto LAB_140062e6a;
    }
    *param_1 = local_38;
    uVar2 = uVar1;
  }
LAB_140062e6a:
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

