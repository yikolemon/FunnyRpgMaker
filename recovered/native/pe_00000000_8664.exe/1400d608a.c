/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d608a */

void FUN_1400d608a(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  LARGE_INTEGER local_40;
  tagRECT local_38;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)FUN_1400d6041();
  lVar3 = FUN_140081200();
  uVar4 = FUN_140081211();
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  GetClientRect((HWND)*puVar2,&local_38);
  *(ulonglong *)(lVar3 + 8) =
       CONCAT44((float)(local_38.bottom - local_38.top),(float)(local_38.right - local_38.left));
  if (*(char *)(puVar2 + 6) == '\x01') {
    FUN_1400d619d();
  }
  local_40.QuadPart = 0;
  QueryPerformanceCounter(&local_40);
  *(float *)(lVar3 + 0x18) =
       (float)((double)(local_40.QuadPart - puVar2[3]) / (double)(longlong)puVar2[4]);
  ((LARGE_INTEGER *)(puVar2 + 3))->QuadPart = (LONGLONG)local_40;
  FUN_1400d6231(lVar3,uVar4);
  FUN_1400d63b0(lVar3);
  iVar1 = -1;
  if (*(char *)(lVar3 + 0x5c) == '\0') {
    iVar1 = FUN_140092240();
  }
  if (*(int *)(puVar2 + 5) != iVar1) {
    *(int *)(puVar2 + 5) = iVar1;
    FUN_1400d64a7(lVar3,iVar1);
  }
  FUN_1400d6548(lVar3);
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_68);
}

