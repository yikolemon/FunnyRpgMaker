/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042ef1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0042ef1c(int *param_1,LPCSTR param_2)

{
  HANDLE hFile;
  BOOL BVar1;
  HANDLE hFileMappingObject;
  LPVOID pvVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  DWORD local_24;
  LARGE_INTEGER local_20;
  uint local_18;
  
  local_18 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  if (param_1 == (int *)0x0) {
    uVar4 = 0x28;
    goto LAB_0042f0a2;
  }
  hFile = CreateFileA(param_2,_DAT_004dcb00,_UNK_004dcb04,_UNK_004dcb08,_UNK_004dcb0c,0x80,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    uVar4 = 1;
    goto LAB_0042f0a2;
  }
  BVar1 = GetFileSizeEx(hFile,&local_20);
  if (BVar1 != 0) {
    if (((SBORROW4(0,local_20.s.HighPart) !=
         SBORROW4(-local_20.s.HighPart,(uint)(0x7fffffff < local_20.s.LowPart))) ==
         (int)(-local_20.s.HighPart - (uint)(0x7fffffff < local_20.s.LowPart)) < 0) &&
       (local_20.s.LowPart != 0 || local_20.s.HighPart != 0)) {
      hFileMappingObject =
           CreateFileMappingA(hFile,(LPSECURITY_ATTRIBUTES)DAT_004dcb10,DAT_004dcb10._4_4_,0,0,
                              (LPCSTR)0x0);
      if (hFileMappingObject != (HANDLE)0x0) {
        param_1[1] = local_20.s.LowPart;
        param_1[2] = 0;
        pvVar2 = MapViewOfFile(hFileMappingObject,DAT_004dcb20,0,0,0);
        *param_1 = (int)pvVar2;
        CloseHandle(hFileMappingObject);
        puVar3 = &LAB_0042f0c5;
        if (*param_1 == 0) {
          iVar5 = FUN_0042f0df((undefined4 *)param_1[7],param_1[1]);
          *param_1 = iVar5;
          if (iVar5 == 0) goto LAB_0042f08c;
          iVar5 = param_1[1];
          iVar6 = 0;
          do {
            BVar1 = ReadFile(hFile,(LPVOID)(*param_1 + iVar6),iVar5 - iVar6,&local_24,
                             (LPOVERLAPPED)0x0);
            if (BVar1 == 0) {
              FUN_0042f111((undefined4 *)param_1[7],(LPVOID)*param_1);
              goto LAB_0042f08c;
            }
            iVar6 = iVar6 + local_24;
            iVar5 = param_1[1];
          } while (iVar6 != iVar5);
          puVar3 = &LAB_0042f0f2;
        }
        param_1[6] = (int)puVar3;
        CloseHandle(hFile);
        param_1[3] = *param_1;
        param_1[4] = (int)param_2;
        param_1[5] = 0;
        uVar4 = 0;
        goto LAB_0042f0a2;
      }
    }
  }
LAB_0042f08c:
  CloseHandle(hFile);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = 0x51;
LAB_0042f0a2:
  if (DAT_0050e8c0 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_18 ^ (uint)&stack0xfffffffc);
}

