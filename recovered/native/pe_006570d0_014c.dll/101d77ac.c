/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d77ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101d77ac(int *param_1,LPCSTR param_2)

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
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (param_1 == (int *)0x0) {
    uVar4 = 0x28;
    goto LAB_101d7932;
  }
  hFile = CreateFileA(param_2,_DAT_102944e0,_UNK_102944e4,_UNK_102944e8,_UNK_102944ec,0x80,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    uVar4 = 1;
    goto LAB_101d7932;
  }
  BVar1 = GetFileSizeEx(hFile,&local_20);
  if (BVar1 != 0) {
    if (((SBORROW4(0,local_20.s.HighPart) !=
         SBORROW4(-local_20.s.HighPart,(uint)(0x7fffffff < local_20.s.LowPart))) ==
         (int)(-local_20.s.HighPart - (uint)(0x7fffffff < local_20.s.LowPart)) < 0) &&
       (local_20.s.LowPart != 0 || local_20.s.HighPart != 0)) {
      hFileMappingObject =
           CreateFileMappingA(hFile,(LPSECURITY_ATTRIBUTES)DAT_102944f0,DAT_102944f0._4_4_,0,0,
                              (LPCSTR)0x0);
      if (hFileMappingObject != (HANDLE)0x0) {
        param_1[1] = local_20.s.LowPart;
        param_1[2] = 0;
        pvVar2 = MapViewOfFile(hFileMappingObject,DAT_10294500,0,0,0);
        *param_1 = (int)pvVar2;
        CloseHandle(hFileMappingObject);
        puVar3 = &LAB_101d7955;
        if (*param_1 == 0) {
          iVar5 = FUN_101d796f(param_1[7],param_1[1]);
          *param_1 = iVar5;
          if (iVar5 == 0) goto LAB_101d791c;
          iVar5 = param_1[1];
          iVar6 = 0;
          do {
            BVar1 = ReadFile(hFile,(LPVOID)(*param_1 + iVar6),iVar5 - iVar6,&local_24,
                             (LPOVERLAPPED)0x0);
            if (BVar1 == 0) {
              FUN_101d79a1(param_1[7],*param_1);
              goto LAB_101d791c;
            }
            iVar6 = iVar6 + local_24;
            iVar5 = param_1[1];
          } while (iVar6 != iVar5);
          puVar3 = &LAB_101d7982;
        }
        param_1[6] = (int)puVar3;
        CloseHandle(hFile);
        param_1[3] = *param_1;
        param_1[4] = (int)param_2;
        param_1[5] = 0;
        uVar4 = 0;
        goto LAB_101d7932;
      }
    }
  }
LAB_101d791c:
  CloseHandle(hFile);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = 0x51;
LAB_101d7932:
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

