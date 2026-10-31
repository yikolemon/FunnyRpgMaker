/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b41da */

undefined8 FUN_1801b41da(undefined8 param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  if ((longlong)(int)DAT_180404750 < 0) {
    puVar2 = &DAT_1803861e4;
  }
  else {
    puVar2 = (&PTR_DAT_180328560)[(int)DAT_180404750];
  }
  uVar4 = 0;
  cVar1 = FUN_180138722(param_1,puVar2,0);
  if (cVar1 != '\0') {
    ppuVar3 = &PTR_DAT_180328560;
    uVar5 = 0;
    uVar4 = 0;
    do {
      local_30 = 0;
      cVar1 = FUN_1801391f6(*ppuVar3,uVar5 == DAT_180404750,0x40,&local_30);
      if (cVar1 == '\0') {
        if (uVar5 == DAT_180404750) {
          FUN_18011732f();
        }
      }
      else {
        DAT_180404750 = (uint)uVar5;
        if (DAT_180404750 == 2) {
          FUN_18018d910(0);
        }
        else if (DAT_180404750 == 1) {
          FUN_18018dc88();
        }
        else {
          FUN_18018d5a0();
        }
        uVar4 = 1;
      }
      uVar5 = uVar5 + 1;
      ppuVar3 = ppuVar3 + 1;
    } while (uVar5 != 3);
    FUN_180138f6c();
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

