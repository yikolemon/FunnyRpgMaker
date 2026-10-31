/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802351b6 */

ulonglong FUN_1802351b6(undefined8 param_1)

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
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  uVar3 = FUN_1801ce63e(param_1,0);
  if (((((int)uVar3 != 0) || (uVar3 = FUN_1801ce682(param_1,&local_24,4), (int)uVar3 != 0)) ||
      (uVar3 = 3, local_24 != '\x1f')) ||
     (((local_23 != -0x75 || (local_22 != '\b')) || (0x1f < local_21)))) goto LAB_1802351f1;
  uVar3 = FUN_1801ce690(param_1,6);
  local_28 = (uint)uVar3;
  if ((local_21 & 4) != 0) {
    uVar2 = FUN_1801ceed5(param_1,&local_28);
    uVar3 = (ulonglong)local_28;
    if (local_28 != 0) goto LAB_1802351f1;
    uVar3 = FUN_1801ce690(param_1,uVar2);
    local_28 = (uint)uVar3;
    if (local_28 != 0) goto LAB_1802351f1;
    uVar3 = 0;
  }
  if ((local_21 & 8) != 0) {
    do {
      cVar1 = FUN_1801cee43(param_1,&local_28);
      uVar3 = (ulonglong)local_28;
      cVar1 = (cVar1 == '\0') * '\x03';
      if (local_28 != 0) {
        cVar1 = '\x02';
      }
    } while (cVar1 == '\0');
    if (cVar1 == '\x02') goto LAB_1802351f1;
  }
  if ((local_21 & 0x10) != 0) {
    do {
      cVar1 = FUN_1801cee43(param_1,&local_28);
      uVar3 = (ulonglong)local_28;
      cVar1 = (cVar1 == '\0') * '\x05';
      if (local_28 != 0) {
        cVar1 = '\x02';
      }
    } while (cVar1 == '\0');
    if (cVar1 == '\x02') goto LAB_1802351f1;
  }
  if ((local_21 & 2) != 0) {
    uVar3 = FUN_1801ce690(param_1,2);
  }
LAB_1802351f1:
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
  }
  return uVar3;
}

