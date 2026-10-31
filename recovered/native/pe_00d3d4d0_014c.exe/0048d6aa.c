/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048d6aa */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_03b1d95aef87969028cfba75ccab2455>,class <lambda_6e4b09c48022b2350581041d5f6b0c4c> &,class
   <lambda_22bdf7517842c4b3e53723af5aa32b9e> >(class <lambda_03b1d95aef87969028cfba75ccab2455>
   &&,class <lambda_6e4b09c48022b2350581041d5f6b0c4c> &,class
   <lambda_22bdf7517842c4b3e53723af5aa32b9e> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_4fdada1b837b2abbf20876fac97688ad>,class <lambda_b57350f2640456a0859d250846f69caf> &,class
   <lambda_eed5e4f92b5b7d55fa22c48c484aaa54> >(class <lambda_4fdada1b837b2abbf20876fac97688ad>
   &&,class <lambda_b57350f2640456a0859d250846f69caf> &,class
   <lambda_eed5e4f92b5b7d55fa22c48c484aaa54> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_ceb1ee4838e85a9d631eb091e2fbe199>,class <lambda_ae742caa10f662c28703da3d2ea5e57e> &,class
   <lambda_cd08b5d6af4937fe54fc07d0c9bf6b37> >(class <lambda_ceb1ee4838e85a9d631eb091e2fbe199>
   &&,class <lambda_ae742caa10f662c28703da3d2ea5e57e> &,class
   <lambda_cd08b5d6af4937fe54fc07d0c9bf6b37> &&)
   
   Library: Visual Studio 2019 Release */

void operator()<>(int *param_1,undefined4 *param_2)

{
  undefined4 local_14;
  
  ___acrt_lock(*param_1);
  FUN_0048d5a7(param_2);
  FUN_0048d6eb();
  ExceptionList = local_14;
  return;
}

