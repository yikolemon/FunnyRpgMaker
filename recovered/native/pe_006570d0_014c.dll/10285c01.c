/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10285c01 */

/* Library Function - Multiple Matches With Different Base Names
    __sopen_s
    __wsopen_s
   
   Library: Visual Studio 2019 Release */

errno_t __cdecl
FID_conflict___sopen_s
          (int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode)

{
  int iVar1;
  
  iVar1 = common_sopen_dispatch<char>(_Filename,_OpenFlag,_ShareFlag,_PermissionMode,_FileHandle,1);
  return iVar1;
}

