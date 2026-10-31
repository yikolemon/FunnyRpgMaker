/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bf5f0 */

ulonglong FUN_1400bf5f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 local_f8 [160];
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if ((uint)param_3 < 5) {
    FUN_1400bf798(local_f8);
    local_58 = 0;
    lStack_50 = 0;
    local_48 = 0;
    lVar1 = param_1[1];
    for (lVar5 = *param_1; lVar5 != lVar1; lVar5 = lVar5 + 0x28) {
      cVar2 = FUN_1400bf90e(lVar5,param_2,local_f8);
      if (cVar2 == '\0') {
        FUN_1400c0a7a(&local_58,lVar5);
      }
    }
    if (local_58 == lStack_50) {
      uVar6 = CONCAT71((uint7)((ulonglong)param_3 >> 8) & 0xffffff,1);
    }
    else {
      uVar4 = FUN_1400052b8(&PTR_DAT_1401c97b0,"Retrying ");
      uVar4 = FUN_1400857e0(uVar4,(lStack_50 - local_58 >> 3) * -0x3333333333333333);
      uVar4 = FUN_1400052b8(uVar4," files ...");
      FUN_1400054d7(uVar4);
      uVar3 = FUN_1400bf5f0(&local_58,param_2,(uint)param_3 + 1);
      uVar6 = (ulonglong)uVar3;
    }
    FUN_1400c0cee(&local_58);
    FUN_1400bfca6(local_f8);
  }
  else {
    uVar4 = FUN_1400052b8(&PTR_DAT_1401c9740,"Max retries reached, aborting");
    FUN_1400054d7(uVar4);
    uVar6 = 0;
  }
  return uVar6;
}

