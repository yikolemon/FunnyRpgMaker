/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140033b30 */

void FUN_140033b30(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_78 [5];
  longlong local_50 [2];
  
  local_50[1] = 0xfffffffffffffffe;
  local_78[0] = *param_2;
  FUN_140019f64(local_78);
  lVar1 = local_78[0];
  local_50[0] = *(longlong *)*param_2;
  if ((longlong *)local_50[0] != (longlong *)*param_2) {
    do {
      lVar2 = local_50[0];
      FUN_140030a1c(local_78,*(longlong *)(local_50[0] + 0x50) +
                             (*(longlong *)(local_50[0] + 0x30) - (ulonglong)(local_50[0] == lVar1))
                             + 2,param_1 + 8,param_3);
      if (*(ulonglong *)(lVar2 + 0x38) < 0x10) {
        lVar3 = lVar2 + 0x20;
      }
      else {
        lVar3 = *(longlong *)(lVar2 + 0x20);
      }
      FUN_140019fc2(param_3,lVar3,*(longlong *)(lVar2 + 0x30) + lVar3);
      FUN_140019fc2(param_3,&DAT_140ecdca4,&DAT_140ecdca5);
      if (*(ulonglong *)(lVar2 + 0x58) < 0x10) {
        lVar3 = lVar2 + 0x40;
      }
      else {
        lVar3 = *(longlong *)(lVar2 + 0x40);
      }
      FUN_140019fc2(param_3,lVar3,*(longlong *)(lVar2 + 0x50) + lVar3);
      if (local_50[0] != lVar1) {
        FUN_140019fc2(param_3,&DAT_140edaed0,&DAT_140edaed1);
      }
      FUN_140030a90(local_78);
      FUN_140006b8a(local_50);
    } while (local_50[0] != *param_2);
  }
  return;
}

