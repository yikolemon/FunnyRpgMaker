/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100138b2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_100138b2(int param_1)

{
  int iVar1;
  BOOL BVar2;
  HANDLE pvVar3;
  LPCSTR ****pppppCVar4;
  LPCSTR ***local_3c [5];
  uint local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_10058e80;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pppppCVar4 = local_3c;
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0xffffffff) {
    local_3c[0] = (LPCSTR ***)0x0;
    BVar2 = PeekNamedPipe(*(HANDLE *)(param_1 + 4),(LPVOID)0x0,0,(LPDWORD)0x0,(LPDWORD)local_3c,
                          (LPDWORD)0x0);
    pvVar3 = *(HANDLE *)(param_1 + 4);
    pppppCVar4 = (LPCSTR ****)local_20;
    if (BVar2 == 0) {
      if (pvVar3 != (HANDLE)0xffffffff) {
        CloseHandle(pvVar3);
        *(undefined4 *)(param_1 + 4) = 0xffffffff;
        pppppCVar4 = (LPCSTR ****)local_20;
      }
    }
    else if (pvVar3 != (HANDLE)0xffffffff) {
      ExceptionList = local_1c;
      return true;
    }
  }
  local_20 = (undefined1 *)pppppCVar4;
  FUN_10015f8f(local_3c,"\\\\.\\pipe\\",param_1 + 8);
  local_14 = 0;
  pppppCVar4 = local_3c;
  if (0xf < local_28) {
    pppppCVar4 = (LPCSTR ****)local_3c[0];
  }
  local_24 = param_1;
  pvVar3 = CreateFileA((LPCSTR)pppppCVar4,_DAT_1028f550,_UNK_1028f554,_UNK_1028f558,_UNK_1028f55c,0,
                       (HANDLE)0x0);
  iVar1 = local_24;
  *(HANDLE *)(local_24 + 4) = pvVar3;
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return *(int *)(iVar1 + 4) != -1;
}

