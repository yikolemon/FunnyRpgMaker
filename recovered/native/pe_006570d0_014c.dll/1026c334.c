/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026c334 */

/* Library Function - Single Match
    public: __thiscall <lambda_2a444430fde8c29194d880d93eed5e8f>::operator()(void)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
<lambda_2a444430fde8c29194d880d93eed5e8f>::operator()
          (<lambda_2a444430fde8c29194d880d93eed5e8f> *this)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  __crt_seh_guarded_call<void> local_5;
  
  iVar1 = FUN_10275d90(1,0xb8);
  **(int **)this = iVar1;
  FUN_10274120(0);
  if (iVar1 != 0) {
    local_24 = *(undefined4 *)this;
    local_20 = *(undefined4 *)(this + 4);
    local_1c = *(undefined4 *)(this + 8);
    local_18 = *(undefined4 *)(this + 0xc);
    local_14 = *(undefined4 *)(this + 0x10);
    local_c = 4;
    local_10 = 4;
    __crt_seh_guarded_call<void>::
    operator()<<lambda_4fdada1b837b2abbf20876fac97688ad>,<lambda_b57350f2640456a0859d250846f69caf>&,<lambda_eed5e4f92b5b7d55fa22c48c484aaa54>_>
              (&local_5,(<lambda_4fdada1b837b2abbf20876fac97688ad> *)&local_10,
               (<lambda_b57350f2640456a0859d250846f69caf> *)&local_24,
               (<lambda_eed5e4f92b5b7d55fa22c48c484aaa54> *)&local_c);
  }
  return;
}

