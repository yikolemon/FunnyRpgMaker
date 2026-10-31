/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026249a */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_274ecf0a8038e561263518ab346655e8>,class <lambda_21448eb78dd3c4a522ed7c65a98d88e6> &,class
   <lambda_0ca1de2171e49cefb1e8dc85c06db622> >(class <lambda_274ecf0a8038e561263518ab346655e8>
   &&,class <lambda_21448eb78dd3c4a522ed7c65a98d88e6> &,class
   <lambda_0ca1de2171e49cefb1e8dc85c06db622> &&)
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_36ac44d44c28c1398f5e169dd4192dec>,class <lambda_3a6df4a947a8aa82799204b10582e979> &,class
   <lambda_252de749fd308ba532c6dc89db3d4ff4> >(class <lambda_36ac44d44c28c1398f5e169dd4192dec>
   &&,class <lambda_3a6df4a947a8aa82799204b10582e979> &,class
   <lambda_252de749fd308ba532c6dc89db3d4ff4> &&)
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_3cfd252a7c5e244e8f20fc56fe35ebe9>,class <lambda_d7427dbf72509eba5fa970998bac2a27> &,class
   <lambda_8f55a0afecd2292d47fde3ce68e72492> >(class <lambda_3cfd252a7c5e244e8f20fc56fe35ebe9>
   &&,class <lambda_d7427dbf72509eba5fa970998bac2a27> &,class
   <lambda_8f55a0afecd2292d47fde3ce68e72492> &&)
    public: unsigned int __thiscall __crt_seh_guarded_call<unsigned int>::operator()<class
   <lambda_4ac01c32aa5b53846f05d0620572872e>,class <lambda_5856287d7ecd2be6c9197bb4007c3f6e> &,class
   <lambda_e7a9868ed898c75c0f0637692d94351a> >(class <lambda_4ac01c32aa5b53846f05d0620572872e>
   &&,class <lambda_5856287d7ecd2be6c9197bb4007c3f6e> &,class
   <lambda_e7a9868ed898c75c0f0637692d94351a> &&)
     15 names - too many to list
   
   Library: Visual Studio 2019 Release */

undefined4 operator()<>(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  __lock_file((FILE *)*param_1);
  uVar1 = FUN_10260023();
  FUN_102624e9();
  ExceptionList = local_14;
  return uVar1;
}

