/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101988c5 */

void FUN_101988c5(void)

{
  undefined4 *puVar1;
  int iVar2;
  LARGE_INTEGER local_38;
  tagRECT local_30;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  puVar1 = (undefined4 *)FUN_10198894();
  iVar2 = FUN_1010330d();
  FUN_1010331e();
  local_30.left = 0;
  local_30.top = 0;
  local_30.right = 0;
  local_30.bottom = 0;
  GetClientRect((HWND)*puVar1,&local_30);
  *(ulonglong *)(iVar2 + 8) =
       CONCAT44((float)(local_30.bottom - local_30.top),(float)(local_30.right - local_30.left));
  if (*(char *)(puVar1 + 10) == '\x01') {
    FUN_101989df();
  }
  local_38.s.HighPart = 0;
  local_38.s.LowPart = 0;
  QueryPerformanceCounter(&local_38);
  *(float *)(iVar2 + 0x18) =
       (float)((double)CONCAT44((local_38.s.HighPart - puVar1[5]) -
                                (uint)(local_38.s.LowPart < (uint)puVar1[4]),
                                local_38.s.LowPart - puVar1[4]) / (double)*(longlong *)(puVar1 + 6))
  ;
  puVar1[5] = local_38.s.HighPart;
  puVar1[4] = local_38.s.LowPart;
  FUN_10198a62();
  FUN_10198bcb();
  if (*(char *)(iVar2 + 0x48) == '\0') {
    iVar2 = FUN_10114109();
  }
  else {
    iVar2 = -1;
  }
  if (puVar1[8] != iVar2) {
    puVar1[8] = iVar2;
    FUN_10198ca6();
  }
  FUN_10198d2b();
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

