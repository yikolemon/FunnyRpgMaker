/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140019ca0 */

void FUN_140019ca0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  local_50 = *param_2;
  FUN_140019f64(&local_50);
  lVar1 = local_50;
  local_50 = *(longlong *)*param_2;
  if ((longlong *)local_50 != (longlong *)*param_2) {
    do {
      lVar2 = local_50;
      if (*(ulonglong *)(local_50 + 0x38) < 0x10) {
        lVar3 = local_50 + 0x20;
      }
      else {
        lVar3 = *(longlong *)(local_50 + 0x20);
      }
      FUN_140019fc2(param_3,lVar3,*(longlong *)(local_50 + 0x30) + lVar3);
      FUN_140019fc2(param_3,&DAT_140ecdca4,&DAT_140ecdca5);
      if (*(ulonglong *)(lVar2 + 0x58) < 0x10) {
        lVar3 = lVar2 + 0x40;
      }
      else {
        lVar3 = *(longlong *)(lVar2 + 0x40);
      }
      FUN_140019fc2(param_3,lVar3,*(longlong *)(lVar2 + 0x50) + lVar3);
      if (local_50 != lVar1) {
        FUN_140019fc2(param_3,&DAT_140edaed0,&DAT_140edaed1);
      }
      FUN_140006b8a(&local_50);
    } while (local_50 != *param_2);
  }
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
}

