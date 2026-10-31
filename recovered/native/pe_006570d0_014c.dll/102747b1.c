/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102747b1 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_15ade71b0218206bbe3333a0c9b79046>,class <lambda_da44e0f8b0f19ba52fefafb335991732> &,class
   <lambda_207f2d024fc103971653565357d6cd41> >(class <lambda_15ade71b0218206bbe3333a0c9b79046>
   &&,class <lambda_da44e0f8b0f19ba52fefafb335991732> &,class
   <lambda_207f2d024fc103971653565357d6cd41> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_15ade71b0218206bbe3333a0c9b79046>,<lambda_da44e0f8b0f19ba52fefafb335991732>&,<lambda_207f2d024fc103971653565357d6cd41>_>
          (__crt_seh_guarded_call<void> *this,<lambda_15ade71b0218206bbe3333a0c9b79046> *param_1,
          <lambda_da44e0f8b0f19ba52fefafb335991732> *param_2,
          <lambda_207f2d024fc103971653565357d6cd41> *param_3)

{
  undefined4 local_14;
  
  ___acrt_lock(*(undefined4 *)param_1);
  LOCK();
  **(int **)(**(int **)param_2 + 0x48) = **(int **)(**(int **)param_2 + 0x48) + 1;
  UNLOCK();
  FUN_102747f7();
  ExceptionList = local_14;
  return;
}

