/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10268c99 */

/* Library Function - Single Match
    __register_onexit_function
   
   Library: Visual Studio 2019 Release */

void __register_onexit_function(void)

{
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  __crt_seh_guarded_call<int> local_5;
  
  local_18 = &stack0x00000004;
  local_14 = &stack0x00000008;
  local_c = 2;
  local_10 = 2;
  __crt_seh_guarded_call<int>::
  operator()<<lambda_8e746cf0007f6ed984d6f78af1fec997>,<lambda_22ebabd17bc4fa466a2aca6d8deb888d>&,<lambda_18ed0c0b38a6dc0daf1e7ac6d6adf05e>_>
            (&local_5,(<lambda_8e746cf0007f6ed984d6f78af1fec997> *)&local_10,
             (<lambda_22ebabd17bc4fa466a2aca6d8deb888d> *)&local_18,
             (<lambda_18ed0c0b38a6dc0daf1e7ac6d6adf05e> *)&local_c);
  return;
}

