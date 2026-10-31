/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ab150 */

/* Library Function - Multiple Matches With Same Base Name
    public: static int __cdecl __FrameHandler3::GetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
    int __cdecl __GetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Library: Visual Studio */

undefined4 GetUnwindTryBlock(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14018f810();
  return *(undefined4 *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1);
}

