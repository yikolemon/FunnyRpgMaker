/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800246d0 */

void FUN_1800246d0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_50 = *param_2;
  FUN_180024994(&local_50);
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
      FUN_180018bde(param_3,lVar3,*(longlong *)(local_50 + 0x30) + lVar3);
      FUN_180018bde(param_3,&DAT_18036dbae,&DAT_18036dbaf);
      if (*(ulonglong *)(lVar2 + 0x58) < 0x10) {
        lVar3 = lVar2 + 0x40;
      }
      else {
        lVar3 = *(longlong *)(lVar2 + 0x40);
      }
      FUN_180018bde(param_3,lVar3,*(longlong *)(lVar2 + 0x50) + lVar3);
      if (local_50 != lVar1) {
        FUN_180018bde(param_3,&DAT_18037bdab,&DAT_18037bdac);
      }
      FUN_180016c4c(&local_50);
    } while (local_50 != *param_2);
  }
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
}

