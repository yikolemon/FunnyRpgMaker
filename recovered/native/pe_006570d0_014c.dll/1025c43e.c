/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025c43e */

int FUN_1025c43e(short *param_1,__crt_win32_buffer<wchar_t,__crt_win32_buffer_no_resizing> *param_2,
                undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  int *piVar4;
  
  if (param_1 == (short *)0x0) {
    FUN_1025c337();
    iVar1 = 0;
  }
  else if (*param_1 == 0) {
    if ((*(int *)(param_2 + 0xc) != 0) ||
       (iVar1 = __crt_win32_buffer<wchar_t,__crt_win32_buffer_no_resizing>::allocate(param_2,1),
       iVar1 == 0)) {
      **(undefined1 **)(param_2 + 8) = 0;
      iVar1 = 0;
      *(undefined4 *)(param_2 + 0x10) = 0;
    }
  }
  else {
    uVar2 = FUN_10274283(param_4,0,param_1,0xffffffff,0,0,0,0);
    if (uVar2 == 0) {
      DVar3 = GetLastError();
      ___acrt_errno_map_os_error(DVar3);
      piVar4 = (int *)FUN_10268ffd();
      iVar1 = *piVar4;
    }
    else if ((uVar2 <= *(uint *)(param_2 + 0xc)) ||
            (iVar1 = __crt_win32_buffer<wchar_t,__crt_win32_buffer_no_resizing>::allocate
                               (param_2,uVar2), iVar1 == 0)) {
      iVar1 = FUN_1025c41a(param_4,param_1,*(undefined4 *)(param_2 + 8),
                           *(undefined4 *)(param_2 + 0xc));
      if (iVar1 == 0) {
        DVar3 = GetLastError();
        ___acrt_errno_map_os_error(DVar3);
        piVar4 = (int *)FUN_10268ffd();
        iVar1 = *piVar4;
      }
      else {
        *(int *)(param_2 + 0x10) = iVar1 + -1;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

