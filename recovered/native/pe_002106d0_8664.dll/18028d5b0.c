/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028d5b0 */

/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl __FrameHandler3::SetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64,int)
    void __cdecl __SetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void SetUnwindTryBlock(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_18026dea0();
  if (*(int *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1) < param_4) {
    *(int *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1) = param_4;
  }
  return;
}

