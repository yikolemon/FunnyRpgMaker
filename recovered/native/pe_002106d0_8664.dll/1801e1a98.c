/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e1a98 */

undefined8 FUN_1801e1a98(longlong *param_1,LPCSTR param_2)

{
  BOOL BVar1;
  HANDLE hFile;
  HANDLE hFileMappingObject;
  LPVOID pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 auStackY_98 [32];
  DWORD local_54;
  LARGE_INTEGER local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStackY_98;
  if (param_1 == (longlong *)0x0) {
    uVar4 = 0x28;
    goto LAB_1801e1c5e;
  }
  uVar4 = 1;
  hFile = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) goto LAB_1801e1c5e;
  BVar1 = GetFileSizeEx(hFile,&local_50);
  if ((((BVar1 == 0) || (0x7fffffff < CONCAT44(local_50.s.HighPart,local_50.s.LowPart))) ||
      (CONCAT44(local_50.s.HighPart,local_50.s.LowPart) == 0)) ||
     (hFileMappingObject = CreateFileMappingA(hFile,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0),
     hFileMappingObject == (HANDLE)0x0)) {
LAB_1801e1c4a:
    CloseHandle(hFile);
    *param_1 = 0;
    param_1[1] = 0;
    uVar4 = 0x51;
  }
  else {
    *(DWORD *)(param_1 + 1) = local_50.s.LowPart;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    uVar4 = 0;
    pvVar2 = MapViewOfFile(hFileMappingObject,4,0,0,0);
    *param_1 = (longlong)pvVar2;
    CloseHandle(hFileMappingObject);
    if (*param_1 == 0) {
      lVar3 = FUN_1801e1cbb(param_1[6],(int)param_1[1]);
      *param_1 = lVar3;
      if (lVar3 == 0) goto LAB_1801e1c4a;
      uVar5 = *(uint *)(param_1 + 1);
      uVar6 = 0;
      pcVar7 = FUN_1801e1cca;
      do {
        BVar1 = ReadFile(hFile,(LPVOID)((ulonglong)uVar6 + *param_1),uVar5 - uVar6,&local_54,
                         (LPOVERLAPPED)0x0);
        if (BVar1 == 0) {
          FUN_1801e1cf5(param_1[6],*param_1);
          goto LAB_1801e1c4a;
        }
        uVar6 = uVar6 + local_54;
        uVar5 = *(uint *)(param_1 + 1);
      } while (uVar6 != uVar5);
    }
    else {
      pcVar7 = FUN_1801e1c93;
    }
    param_1[5] = (longlong)pcVar7;
    CloseHandle(hFile);
    param_1[2] = *param_1;
    param_1[3] = (longlong)param_2;
    param_1[4] = 0;
  }
LAB_1801e1c5e:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStackY_98);
  }
  return uVar4;
}

