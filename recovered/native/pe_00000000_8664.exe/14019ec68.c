/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019ec68 */

int FUN_14019ec68(undefined8 *param_1,longlong param_2,int param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) == 0) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    iVar2 = -1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
  }
  else {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffff7;
    UNLOCK();
    cVar1 = FUN_14019eb6c();
    if (cVar1 == '\0') {
      if (param_3 == 1) {
        lVar3 = thunk_FUN_1401a4a58(param_1,param_4);
        param_2 = param_2 + lVar3;
        param_3 = 0;
      }
      FUN_1401a2cf0(param_1,param_4);
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
      lVar3 = thunk_FUN_1401b7ec0(*(undefined4 *)(param_1 + 3),param_2,param_3,param_4);
      iVar2 = (lVar3 != -1) - 1;
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}

