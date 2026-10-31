/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009615c */

int FUN_14009615c(longlong *param_1,LARGE_INTEGER param_2,DWORD param_3,longlong *param_4)

{
  int iVar1;
  ulonglong uVar2;
  LARGE_INTEGER LVar3;
  longlong lVar4;
  
  if ((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) == 0) {
    *(undefined1 *)(param_4 + 6) = 1;
    iVar1 = -1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x16;
  }
  else {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffff7;
    UNLOCK();
    uVar2 = FUN_140096060(param_1,param_2.QuadPart,param_3);
    if ((char)uVar2 == '\0') {
      if (param_3 == 1) {
        LVar3 = thunk_FUN_140099610(param_1,param_4);
        param_2.QuadPart = param_2.QuadPart + LVar3.QuadPart;
        param_3 = 0;
      }
      FUN_140097d30((int *)param_1,param_4);
      *param_1 = param_1[1];
      *(undefined4 *)(param_1 + 2) = 0;
      if ((*(uint *)((longlong)param_1 + 0x14) >> 2 & 1) == 0) {
        if ((((byte)*(undefined4 *)((longlong)param_1 + 0x14) & 0x41) == 0x41) &&
           ((*(uint *)((longlong)param_1 + 0x14) >> 8 & 1) == 0)) {
          *(undefined4 *)(param_1 + 4) = 0x200;
        }
      }
      else {
        LOCK();
        *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffffc;
        UNLOCK();
      }
      lVar4 = thunk_FUN_1400a9300(*(uint *)(param_1 + 3),param_2,param_3,(longlong)param_4);
      iVar1 = (lVar4 != -1) - 1;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}

