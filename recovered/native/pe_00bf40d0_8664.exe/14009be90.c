/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009be90 */

void FUN_14009be90(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)&local_38;
  bVar2 = *param_2;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  while (bVar2 != 0) {
    pbVar1 = (byte *)((longlong)&local_38 + ((longlong)(int)(uint)bVar2 >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (bVar2 & 7);
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  local_38 = local_38 | 1;
  bVar2 = *(byte *)((longlong)&local_38 + (ulonglong)(*param_1 >> 3)) >> (*param_1 & 7);
  while ((bVar2 & 1) == 0) {
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar2 = *(byte *)((longlong)&local_38 + (ulonglong)(*pbVar1 >> 3)) >> (*pbVar1 & 7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)&local_38);
}

