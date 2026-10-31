/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10270254 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: char * __thiscall __crt_seh_guarded_call<char *>::operator()<class
   <lambda_646e26742ed01d5bc03234f44bb6d3d3>,class <lambda_b37934c380d97b75fd242ea49540127a> &,class
   <lambda_bbd9d45274666fbb50f81a29ad795c13> >(class <lambda_646e26742ed01d5bc03234f44bb6d3d3>
   &&,class <lambda_b37934c380d97b75fd242ea49540127a> &,class
   <lambda_bbd9d45274666fbb50f81a29ad795c13> &&)
   
   Library: Visual Studio 2019 Release */

char * __thiscall
__crt_seh_guarded_call<char*>::
operator()<<lambda_646e26742ed01d5bc03234f44bb6d3d3>,<lambda_b37934c380d97b75fd242ea49540127a>&,<lambda_bbd9d45274666fbb50f81a29ad795c13>_>
          (__crt_seh_guarded_call<char*> *this,<lambda_646e26742ed01d5bc03234f44bb6d3d3> *param_1,
          <lambda_b37934c380d97b75fd242ea49540127a> *param_2,
          <lambda_bbd9d45274666fbb50f81a29ad795c13> *param_3)

{
  char *pcVar1;
  undefined4 local_14;
  
  ___acrt_lock(*(undefined4 *)param_1);
  pcVar1 = (char *)FUN_102700f5();
  FUN_102702a3();
  ExceptionList = local_14;
  return pcVar1;
}

