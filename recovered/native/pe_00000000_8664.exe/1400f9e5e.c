/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400f9e5e */

undefined8 FUN_1400f9e5e(undefined8 param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if ((longlong)(int)DAT_140f17ef0 < 0) {
    puVar2 = &DAT_140edcdbf;
  }
  else {
    puVar2 = (&PTR_DAT_140e8c8f0)[(int)DAT_140f17ef0];
  }
  uVar4 = 0;
  cVar1 = FUN_1400b1652(param_1,puVar2,0);
  if (cVar1 != '\0') {
    ppuVar3 = &PTR_DAT_140e8c8f0;
    uVar5 = 0;
    uVar4 = 0;
    do {
      local_30 = 0;
      cVar1 = FUN_1400b2126(*ppuVar3,uVar5 == DAT_140f17ef0,0x40,&local_30);
      if (cVar1 == '\0') {
        if (uVar5 == DAT_140f17ef0) {
          FUN_140090647();
        }
      }
      else {
        DAT_140f17ef0 = (uint)uVar5;
        if (DAT_140f17ef0 == 2) {
          FUN_1400d8e84(0);
        }
        else if (DAT_140f17ef0 == 1) {
          FUN_1400d91fc();
        }
        else {
          FUN_1400d8b14();
        }
        uVar4 = 1;
      }
      uVar5 = uVar5 + 1;
      ppuVar3 = ppuVar3 + 1;
    } while (uVar5 != 3);
    FUN_1400b1e9c();
  }
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
}

