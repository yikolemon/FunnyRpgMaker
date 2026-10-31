/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026d8ee */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_2cc53f568c5a2bb6f192f930a45d44ea>,class <lambda_ab61a845afdef5b7c387490eaf3616ee> &,class
   <lambda_c2ffc0b7726aa6be21d5f0026187e748> >(class <lambda_2cc53f568c5a2bb6f192f930a45d44ea>
   &&,class <lambda_ab61a845afdef5b7c387490eaf3616ee> &,class
   <lambda_c2ffc0b7726aa6be21d5f0026187e748> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_2cc53f568c5a2bb6f192f930a45d44ea>,<lambda_ab61a845afdef5b7c387490eaf3616ee>&,<lambda_c2ffc0b7726aa6be21d5f0026187e748>_>
          (__crt_seh_guarded_call<void> *this,<lambda_2cc53f568c5a2bb6f192f930a45d44ea> *param_1,
          <lambda_ab61a845afdef5b7c387490eaf3616ee> *param_2,
          <lambda_c2ffc0b7726aa6be21d5f0026187e748> *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  __crt_seh_guarded_call<void> local_1d [9];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10382b58;
  uStack_c = 0x1026d8fa;
  ___acrt_lock(*(undefined4 *)param_1);
  local_8 = (undefined *)0x0;
  puVar1 = DAT_103a4d4c + DAT_103a4d48;
  for (puVar3 = DAT_103a4d4c; local_30 = puVar3, puVar3 != puVar1; puVar3 = puVar3 + 1) {
    local_24 = *puVar3;
    cVar2 = FUN_1026d7e5(local_24,*(undefined4 *)param_2);
    if (cVar2 != '\0') {
      local_34 = *(undefined4 *)(param_2 + 8);
      local_38 = *(undefined4 *)(param_2 + 4);
      local_3c = *(undefined4 *)param_2;
      local_40 = &local_24;
      local_28 = local_24;
      local_2c = local_24;
      operator()<<lambda_2866be3712abc81a800a822484c830d8>,<lambda_39ca0ed439415581b5b15c265174cece>&,<lambda_2b24c74d71094a6cd0cb82e44167d71b>_>
                (local_1d,(<lambda_2866be3712abc81a800a822484c830d8> *)&local_2c,
                 (<lambda_39ca0ed439415581b5b15c265174cece> *)&local_40,
                 (<lambda_2b24c74d71094a6cd0cb82e44167d71b> *)&local_28);
    }
  }
  local_8 = (undefined *)0xfffffffe;
  FUN_1026d98e();
  ExceptionList = local_14;
  return;
}

