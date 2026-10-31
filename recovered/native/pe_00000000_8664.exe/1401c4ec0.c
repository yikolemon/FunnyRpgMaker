/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c4ec0 */

void FUN_1401c4ec0(longlong *param_1)

{
  longlong *TargetFrame;
  PVOID TargetIp;
  PVOID in_SSP;
  DWORD local_28;
  DWORD local_24;
  _EXCEPTION_RECORD *local_20;
  PVOID local_18;
  DWORD local_10;
  longlong *local_8;
  
  local_8 = param_1;
  if (*param_1 != 0) {
    do {
      local_28 = 0x80000026;
      local_24 = 0;
      local_20 = (_EXCEPTION_RECORD *)0x0;
      local_18 = (PVOID)0x0;
      local_10 = 1;
      TargetIp = (PVOID)local_8[10];
      TargetFrame = (longlong *)*local_8;
      RtlUnwind(TargetFrame,TargetIp,(PEXCEPTION_RECORD)&stack0xffffffffffffffd8,in_SSP);
      local_8 = TargetFrame;
      in_SSP = TargetIp;
    } while( true );
  }
  MXCSR = (undefined4)param_1[0xb];
                    /* WARNING: Could not recover jumptable at 0x0001401c4f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[10])(param_1,(code *)param_1[10]);
  return;
}

