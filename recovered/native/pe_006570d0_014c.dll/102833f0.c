/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102833f0 */

/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetCurrentState(struct EHRegistrationNode *,void
   *,struct _s_FuncInfo const *)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__FrameHandler3::GetCurrentState(EHRegistrationNode *param_1,void *param_2,_s_FuncInfo *param_3)

{
  if (param_3->maxState < 0x81) {
    return (int)(char)param_1[8];
  }
  return *(int *)(param_1 + 8);
}

