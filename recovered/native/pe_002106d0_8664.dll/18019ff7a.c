/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019ff7a */

void FUN_18019ff7a(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  LARGE_INTEGER local_40;
  tagRECT local_38;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)FUN_18019ff31();
  lVar3 = FUN_180107ee8();
  uVar4 = FUN_180107ef9();
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  GetClientRect((HWND)*puVar2,&local_38);
  *(ulonglong *)(lVar3 + 8) =
       CONCAT44((float)(local_38.bottom - local_38.top),(float)(local_38.right - local_38.left));
  if (*(char *)(puVar2 + 6) == '\x01') {
    FUN_1801a008d();
  }
  local_40.QuadPart = 0;
  QueryPerformanceCounter(&local_40);
  *(float *)(lVar3 + 0x18) =
       (float)((double)(local_40.QuadPart - puVar2[3]) / (double)(longlong)puVar2[4]);
  ((LARGE_INTEGER *)(puVar2 + 3))->QuadPart = (LONGLONG)local_40;
  FUN_1801a0121(lVar3,uVar4);
  FUN_1801a02a0(lVar3);
  iVar1 = -1;
  if (*(char *)(lVar3 + 0x5c) == '\0') {
    iVar1 = FUN_180118f28();
  }
  if (*(int *)(puVar2 + 5) != iVar1) {
    *(int *)(puVar2 + 5) = iVar1;
    FUN_1801a0397(lVar3,iVar1);
  }
  FUN_1801a0438(lVar3);
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_68);
}

