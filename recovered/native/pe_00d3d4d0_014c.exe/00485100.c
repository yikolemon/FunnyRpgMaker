/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00485100 */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Library: Visual Studio */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x00485129. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}

