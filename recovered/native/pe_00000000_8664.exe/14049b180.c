/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14049b180 */

/* Library Function - Multiple Matches With Same Base Name
    public: char * __ptr64 __cdecl __crt_seh_guarded_call<char * __ptr64>::operator()<class
   <lambda_41e84717acc955b55e9d0d529e507b68>,class <lambda_b37934c380d97b75fd242ea49540127a> &
   __ptr64,class <lambda_bb6db9f9ac473960206e0d4b942b5506> >(class
   <lambda_41e84717acc955b55e9d0d529e507b68> && __ptr64,class
   <lambda_b37934c380d97b75fd242ea49540127a> & __ptr64,class
   <lambda_bb6db9f9ac473960206e0d4b942b5506> && __ptr64) __ptr64
    public: char * __ptr64 __cdecl __crt_seh_guarded_call<char * __ptr64>::operator()<class
   <lambda_9bd929c17696992ce54f1d748594fc62>,class <lambda_082c17da81b0962e08c0587ee0fac50c> &
   __ptr64,class <lambda_9c08ac857f4975304d44e9f601d9b878> >(class
   <lambda_9bd929c17696992ce54f1d748594fc62> && __ptr64,class
   <lambda_082c17da81b0962e08c0587ee0fac50c> & __ptr64,class
   <lambda_9c08ac857f4975304d44e9f601d9b878> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8
operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  FID_conflict___acrt_lock(*param_2);
  uVar1 = FUN_14049aee0(param_3);
  FID_conflict___acrt_lock(*param_4);
  return uVar1;
}

