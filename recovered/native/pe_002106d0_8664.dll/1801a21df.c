/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a21df */

void FUN_1801a21df(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStackY_68 [32];
  undefined8 local_30;
  int local_28;
  int iStack_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStackY_68;
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  local_30 = 0;
  local_28 = (int)(float)param_2;
  iStack_24 = (int)(float)((ulonglong)param_2 >> 0x20);
  if ((*(byte *)(param_1 + 4) & 4) != 0) {
    FUN_1801a274a(param_1);
  }
  FUN_1801a26c7(param_1,&local_30,*(undefined4 *)((longlong)puVar1 + 0x14),
                *(undefined4 *)(puVar1 + 3));
  SetWindowPos((HWND)*puVar1,(HWND)0x0,0,0,local_28 - (int)local_30,iStack_24 - local_30._4_4_,0x16)
  ;
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStackY_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStackY_68);
}

