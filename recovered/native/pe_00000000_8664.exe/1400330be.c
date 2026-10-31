/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400330be */

void FUN_1400330be(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_140030a1c(local_50,(ulonglong)DVar2 + *(longlong *)(&DAT_1401c9bf0 + (ulonglong)uVar1 * 8) >>
                         0x20,param_1 + 8,param_4);
  local_58 = FUN_14001a250(local_70,DVar2,0x15);
  FUN_140019fc2(param_4,local_58);
  FUN_140030a90(local_50);
  return;
}

