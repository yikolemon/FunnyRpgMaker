/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018448e */

ulonglong FUN_14018448e(undefined8 param_1)

{
  char cVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  uint local_28;
  char local_24;
  char local_23;
  char local_22;
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  uVar3 = FUN_14012d612(param_1,0);
  if (((((int)uVar3 != 0) || (uVar3 = FUN_14012d656(param_1,&local_24,4), (int)uVar3 != 0)) ||
      (uVar3 = 3, local_24 != '\x1f')) ||
     (((local_23 != -0x75 || (local_22 != '\b')) || (0x1f < local_21)))) goto LAB_1401844c9;
  uVar3 = FUN_14012d664(param_1,6);
  local_28 = (uint)uVar3;
  if ((local_21 & 4) != 0) {
    uVar2 = FUN_14012dea9(param_1,&local_28);
    uVar3 = (ulonglong)local_28;
    if (local_28 != 0) goto LAB_1401844c9;
    uVar3 = FUN_14012d664(param_1,uVar2);
    local_28 = (uint)uVar3;
    if (local_28 != 0) goto LAB_1401844c9;
    uVar3 = 0;
  }
  if ((local_21 & 8) != 0) {
    do {
      cVar1 = FUN_14012de17(param_1,&local_28);
      uVar3 = (ulonglong)local_28;
      cVar1 = (cVar1 == '\0') * '\x03';
      if (local_28 != 0) {
        cVar1 = '\x02';
      }
    } while (cVar1 == '\0');
    if (cVar1 == '\x02') goto LAB_1401844c9;
  }
  if ((local_21 & 0x10) != 0) {
    do {
      cVar1 = FUN_14012de17(param_1,&local_28);
      uVar3 = (ulonglong)local_28;
      cVar1 = (cVar1 == '\0') * '\x05';
      if (local_28 != 0) {
        cVar1 = '\x02';
      }
    } while (cVar1 == '\0');
    if (cVar1 == '\x02') goto LAB_1401844c9;
  }
  if ((local_21 & 2) != 0) {
    uVar3 = FUN_14012d664(param_1,2);
  }
LAB_1401844c9:
  if (DAT_140f17b40 != (local_20 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
  }
  return uVar3;
}

