/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a20d1 */

void FUN_1801a20d1(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  float fVar2;
  undefined1 auStackY_78 [32];
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStackY_78;
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  fVar2 = (float)((ulonglong)param_2 >> 0x20);
  local_38 = (int)(float)param_2;
  iStack_34 = (int)fVar2;
  iStack_30 = (int)(float)param_2;
  iStack_2c = (int)fVar2;
  if ((*(byte *)(param_1 + 4) & 4) != 0) {
    FUN_1801a274a(param_1);
  }
  FUN_1801a26c7(param_1,&local_38,*(undefined4 *)((longlong)puVar1 + 0x14),
                *(undefined4 *)(puVar1 + 3));
  SetWindowPos((HWND)*puVar1,(HWND)0x0,local_38,iStack_34,0,0,0x15);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStackY_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStackY_78);
}

