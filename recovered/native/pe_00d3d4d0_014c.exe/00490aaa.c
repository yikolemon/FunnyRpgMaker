/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00490aaa */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_6d20deecaf4856105ebacbad442d1079>,class <lambda_9a32fed5bf61b6b509b2d3f6003082a1> &,class
   <lambda_63ea2239ed67c638ddbae41947fdf875> >(class <lambda_6d20deecaf4856105ebacbad442d1079>
   &&,class <lambda_9a32fed5bf61b6b509b2d3f6003082a1> &,class
   <lambda_63ea2239ed67c638ddbae41947fdf875> &&)
   
   Library: Visual Studio 2019 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<<lambda_6d20deecaf4856105ebacbad442d1079>,<lambda_9a32fed5bf61b6b509b2d3f6003082a1>&,<lambda_63ea2239ed67c638ddbae41947fdf875>_>
          (__crt_seh_guarded_call<int> *this,<lambda_6d20deecaf4856105ebacbad442d1079> *param_1,
          <lambda_9a32fed5bf61b6b509b2d3f6003082a1> *param_2,
          <lambda_63ea2239ed67c638ddbae41947fdf875> *param_3)

{
  int iVar1;
  undefined4 local_14;
  
  __lock_file(*(FILE **)param_1);
  iVar1 = FUN_00490804((FILE *)**(undefined4 **)param_2);
  FUN_00490afe();
  ExceptionList = local_14;
  return iVar1;
}

