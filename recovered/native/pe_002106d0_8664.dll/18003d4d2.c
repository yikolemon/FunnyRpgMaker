/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003d4d2 */

void FUN_18003d4d2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  DWORD DVar2;
  undefined1 local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [40];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  DVar2 = GetCurrentProcessId();
  uVar1 = 0x1f;
  if ((DVar2 | 1) != 0) {
    for (; (DVar2 | 1) >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  FUN_18003ae98(local_50,(ulonglong)DVar2 + *(longlong *)(&DAT_1802b1be0 + (ulonglong)uVar1 * 8) >>
                         0x20,param_1 + 8,param_4);
  local_58 = FUN_180024c02(local_70,DVar2,0x15);
  FUN_180018bde(param_4,local_58);
  FUN_18003af0c(local_50);
  return;
}

