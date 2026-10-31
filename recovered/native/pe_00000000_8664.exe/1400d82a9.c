/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d82a9 */

void FUN_1400d82a9(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStackY_68 [32];
  undefined8 local_30;
  int local_28;
  int iStack_24;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStackY_68;
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  local_30 = 0;
  local_28 = (int)(float)param_2;
  iStack_24 = (int)(float)((ulonglong)param_2 >> 0x20);
  if ((*(byte *)(param_1 + 4) & 4) != 0) {
    FUN_1400d8814(param_1);
  }
  FUN_1400d8791(param_1,&local_30,*(undefined4 *)((longlong)puVar1 + 0x14),
                *(undefined4 *)(puVar1 + 3));
  SetWindowPos((HWND)*puVar1,(HWND)0x0,0,0,local_28 - (int)local_30,iStack_24 - local_30._4_4_,0x16)
  ;
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStackY_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStackY_68);
}

