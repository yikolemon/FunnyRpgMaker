/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a5430 */

void FUN_1802a5430(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)&local_38;
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
  bVar2 = *param_1;
  while( true ) {
    if (bVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1802396d0(local_18 ^ (ulonglong)&local_38);
    }
    if ((*(byte *)((longlong)&local_38 + (ulonglong)(bVar2 >> 3)) >> (bVar2 & 7) & 1) != 0) break;
    bVar2 = param_1[1];
    param_1 = param_1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)&local_38);
}

