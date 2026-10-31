/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028d5f0 */

/* Library Function - Multiple Matches With Same Base Name
    public: static int __cdecl __FrameHandler3::GetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
    int __cdecl __GetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Library: Visual Studio */

undefined4 GetUnwindTryBlock(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_18026dea0();
  return *(undefined4 *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1);
}

