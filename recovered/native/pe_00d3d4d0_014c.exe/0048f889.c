/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048f889 */

/* Library Function - Single Match
    bool __cdecl common_fseek_binary_mode_read_only_fast_track_nolock(class
   __crt_stdio_stream,__int64,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl
common_fseek_binary_mode_read_only_fast_track_nolock
          (int *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  if ((((param_4 != 2) && ((param_1[3] & 0x4c0U) != 0)) && ((param_1[3] & 6U) == 0)) &&
     (0 < param_1[2])) {
    uVar2 = param_1[4];
    iVar1 = (uVar2 & 0x3f) * 0x38;
    if (((-1 < *(char *)((&DAT_00521cc8)[(int)uVar2 >> 6] + 0x28 + iVar1)) &&
        (*(char *)((&DAT_00521cc8)[(int)uVar2 >> 6] + 0x29 + iVar1) == '\0')) &&
       ((param_4 != 0 ||
        ((lVar3 = FUN_0049cd94(uVar2,0,0,(PLARGE_INTEGER)0x1), -1 < lVar3 &&
         (iVar1 = FUN_0048f807(param_2,param_3,(uint)(lVar3 - param_1[2]),
                               (int)((ulonglong)(lVar3 - param_1[2]) >> 0x20),(int *)&param_2),
         -1 < iVar1)))))) {
      uVar2 = param_1[1] - *param_1;
      iVar1 = (int)uVar2 >> 0x1f;
      if ((iVar1 <= param_3) && ((iVar1 < param_3 || (uVar2 <= param_2)))) {
        iVar1 = param_1[2] >> 0x1f;
        if ((param_3 <= iVar1) && ((param_3 < iVar1 || (param_2 <= (uint)param_1[2])))) {
          *param_1 = *param_1 + param_2;
          param_1[2] = param_1[2] - param_2;
          return true;
        }
      }
    }
  }
  return false;
}

